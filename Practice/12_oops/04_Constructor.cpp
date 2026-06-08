#include<iostream>

using namespace std;

class Rectangle{
    
    private: // data hiding
        int length;
        int breadth;

    public:
    
    //parameterized constructor (constructor with parameters and act as default constructor if we provide default values to parameters)
        Rectangle(int l=0, int b=0){
            setLength(l);
            setBreadth(b);
        }


        // copy constructor (constructor with object as parameter)
        Rectangle(Rectangle &r){
            length = r.length;
            breadth = r.breadth;
        }


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
                breadth = 0;
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

        int isSquare(){
            return length == breadth;
        }

        // destructor (called when object goes out of scope or is deleted)
        ~Rectangle(){
            cout<<"Destructor called for Rectangle with length: "<<length<<" and breadth: "<<breadth<<endl;
        }
};

int main(){

    // creating object using default constructor
    Rectangle r1; 
    cout<<"Area of r1: "<<r1.area()<<endl;

    // creating object using parameterized constructor
    Rectangle r2(10, 5);
    cout<<"Area of r2: "<<r2.area()<<endl;
    
    // creating object using copy constructor
    Rectangle r4(r2);
    cout<<"Area of r4: "<<r4.area()<<endl;

    return 0;
}