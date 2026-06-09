#include<iostream>

using namespace std;


class Rectangle 
{

    private:
    int length;
    int breadth;

    public:

    // Constructor
    Rectangle(int length, int breadth);

    // Getter and Setter functions
    int getlength();
    int getbreadth();
    void setlength(int length);
    void setbreadth(int breadth);

    // Other member functions
    int area();
    int perimeter();
    bool isSquare();

    // Destructor
    ~Rectangle(){
        cout<<"Destructor called for Rectangle with length: "<<length<<" and breadth: "<<breadth<<endl;
    }

};



// Inheritance
class Cuboid : public Rectangle {
    private:
    int height;

    public:
    // Constructor
    Cuboid(int height=0);

    // Getter and Setter functions
    void setheight(int height);
    int getheight();

    // Other member functions
    int volume();

    // Destructor
    ~Cuboid(){
        cout<<"Destructor called for Cuboid with height: "<<height<<endl;
    }
};

int main(){

    Rectangle r1(10,6);

    cout<< "Length of Rectangle: "<< r1.getlength()<<endl;
    cout<< "Breadth of Rectangle: "<< r1.getbreadth()<<endl;
    cout<< "Area of Rectangle: "<< r1.area()<<endl;
    cout<< "Perimeter of Rectangle: "<< r1.perimeter()<<endl;

    if (r1.isSquare()){
        cout<<"The rectangle is a square."<<endl;
    } else {
        cout<<"The rectangle is not a square."<<endl;
    }

    // Inheritance
    Cuboid c1(10);
    c1.setlength(10); // using setlength() from Rectangle
    c1.setbreadth(6); // using setbreadth() from Rectangle
    cout<< "Height of Cuboid: "<< c1.getheight()<<endl;
    cout<< "Volume of Cuboid: "<< c1.volume()<<endl; // using area() from Rectangle

    return 0;
}

Rectangle::Rectangle(int length=0, int breadth=0){
    setlength(length);
    setbreadth(breadth);
}

int Rectangle::getlength(){
    return length;
}

int Rectangle::getbreadth(){
    return breadth;
}

void Rectangle::setlength(int length){
    if (length < 0){
        cout<<"Length cannot be negative."<<endl;
        this->length = 0;
    } else {
        this->length = length;
    }
    
}

void Rectangle::setbreadth(int breadth){
    if(breadth < 0){
        cout<<"Breadth cannot be negative."<<endl;
        this->breadth = 0;
    } else {
        this->breadth = breadth;
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


Cuboid::Cuboid(int height){
    setheight(height);
}

int Cuboid::getheight(){
    return height;
}

void Cuboid::setheight(int height){
    if (height < 0){
        cout<<"Height cannot be negative."<<endl;
        this->height = 0;
    } else {
        this->height = height;
    }
}

int Cuboid::volume(){
    return area() * height; // using area() from Rectangle
}
