#include<iostream>

using namespace std;

class Rectangle{
    
    private: // data hiding
        int length;
        int breadth;

    public:
        // setter functions (mutator functions)
        void setLength(int l){
            if (l < 0){
                cout<<"Length cannot be negative."<<endl;
                length = 0;
            } else {
                length = l;
            }
            
        }

        void setBreadth(int b){
            if(b < 0){
                cout<<"Breadth cannot be negative."<<endl;
                breadth = 1;
            } else {
                breadth = b;
            }
        }


        // getter functions (accessor functions)
        int getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
        }



        int area(){
            return length * breadth;
        }

        int perimeter(){
            return 2 * (length + breadth);
        }
};

int main(){

    Rectangle r;

    // r.length = 10; // error: length is private
    // r.breadth = 5; // error: breadth is private

    r.setLength(10);
    r.setBreadth(5);

    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;
    return 0;
}