#include<iostream>

using namespace std;

class Rectangle{
    
    private: // data hiding
        int length;
        int breadth;

    public:
        Rectangle(int l, int b); // parameterized constructor
        Rectangle(Rectangle &r); // copy constructor

        void setLength(int l);
        void setBreadth(int b);

        int getLength(){return length;}

        int getBreadth(){return breadth;}

        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle(); // destructor
};

int main(){

    Rectangle r(10, 5); // creating object using parameterized constructor
    cout<<"Area: "<<r.area()<<endl;

    cout<<"Perimeter: "<<r.perimeter()<<endl;
    
    if (r.isSquare()){
        cout<<"The rectangle is a square."<<endl;
    } else {
        cout<<"The rectangle is not a square."<<endl;
    }
    
    return 0;
}

Rectangle::Rectangle(int l=0, int b=0){
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &r){
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l){
    if (l < 0){
        cout<<"Length cannot be negative."<<endl;
        length = 0;
    } else {
        length = l;
    }
    
}

void Rectangle::setBreadth(int b){
    if(b < 0){
        cout<<"Breadth cannot be negative."<<endl;
        breadth = 0;
    } else {
        breadth = b;
    }
}


int Rectangle::area(){
    return length * breadth;
}

int Rectangle::perimeter(){
    return 2 * (length + breadth);
}

bool Rectangle::isSquare(){
    return length == breadth;
}

Rectangle::~Rectangle(){
    cout<<"Rectangle destroyed."<<endl;
}