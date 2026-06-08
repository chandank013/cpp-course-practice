#include<iostream>

using namespace std;

class Complex {

    private:
        int real;
        int img;

    public:

        Complex(int real=0, int img=0)
        {
            this->real = real;
            this->img = img;
        }

        // insertion operator
        friend ostream & operator<<(ostream &out, Complex c);


};

ostream & operator<<(ostream &out, Complex c)
{
    out<<c.real<<"+i"<< c.img<<endl;
    return out;
}

int main(){

    Complex c(3, 4);
    cout<<c<<endl; // This will call the overloaded insertion operator, which will print the complex number in the format "real + i*img"
    
    // Alternatively, we can also call the operator function directly like this:
    operator<<(cout,c);


    return 0;
}

