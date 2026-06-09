#include<iostream>

using namespace std;

class Parent{
    private:
        int a;
    protected:
        int b;
    public:
        int c;

    void setData(int x, int y, int z){
        this->a = x;
        this->b = y;
        this->c = z;
    }

    void funParent(){
        a=10;
        b=20;
        c=30;
        cout<<"Inside Parent class: "<<a<<" "<<b<<" "<<c<<endl;
    }
};

class Child : public Parent{       // if public is not specified, then it is private by default
                                   // if protected is used, then private members of Parent become protected in Child
                                   // if private is used, then private members of Parent become private in Child
    public:
        void funChild(){
            // a=10; // error: 'a' is private in 'Parent'
            b=20; // allowed: 'b' is protected in 'Parent'
            c=30; // allowed: 'c' is public in 'Parent'
            cout<<"Inside Child class: "<<b<<" "<<c<<endl;
        }
};

class GrandChild : public Child{
    public:
        void funGrandChild(){
            // a=10; // error: 'a' is private in 'Parent'
            b=20; // allowed: 'b' is protected in 'Parent'
            c=30; // allowed: 'c' is public in 'Parent'
            cout<<"Inside GrandChild class: "<<b<<" "<<c<<endl;
        }
};

int main(){

    Child c1;
    // c1.a=10; // error: 'a' is private in 'Parent'
    // c1.b=20; // error: 'b' is protected in 'Parent'
    // c1.c=30; // allowed: 'c' is public in 'Parent'

    GrandChild g1;
    // g1.a=10; // error: 'a' is private in 'Parent'
    // g1.b=20; // error: 'b' is protected in 'Parent'
    // g1.c=30; // allowed: 'c' is public in 'Parent'

}