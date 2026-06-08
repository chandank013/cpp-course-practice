#include<iostream>

using namespace std;

class complex{
    private:
        int real;
        int imag;
        public:

        // Constructor
        complex(int r=0, int i=0){
            real = r;
            imag = i;
        }

        // Setters and Getters
        void setReal(int r){
            real = r;
        }
        void setImag(int i){
            imag = i;
        }

        int getReal(){
            return real;
        }
        int getImag(){
            return imag;
        }

        // Normal method to add two complex numbers
        complex add(complex c){
            complex res;
            res.real = real + c.real;
            res.imag = imag + c.imag;
            return res;
        }

        // Normal method to multiply two complex numbers
        complex multiply(complex c){
            complex res;
            res.real = real*c.real - imag*c.imag;
            res.imag = real*c.imag + imag*c.real;
            return res;
        }

        // Operator overloading for addition
        complex operator + (complex c){
            complex res;
            res.real = real + c.real;
            res.imag = imag + c.imag;
            return res;
        }

        complex operator * (complex c){
            complex res;
            res.real = real*c.real - imag*c.imag;
            res.imag = real*c.imag + imag*c.real;
            return res;
        }

        ~complex(){
            cout<<"Destructor called for "<<real<<" + "<<imag<<"i"<<endl;
        }

};

int main()
{

    // Using normal methods
    complex c1(3,4), c2(5,6);
    complex c3 = c1.add(c2);
    complex c4 = c1.multiply(c2);

    cout<<"c1: "<<c1.getReal()<<" + "<<c1.getImag()<<"i"<<endl;
    cout<<"c2: "<<c2.getReal()<<" + "<<c2.getImag()<<"i"<<endl;

    cout<<"c3: "<<c3.getReal()<<" + "<<c3.getImag()<<"i"<<endl;
    cout<<"c4: "<<c4.getReal()<<" + "<<c4.getImag()<<"i"<<endl;

    // Using operator overloading
    complex c5 = c1 + c2;
    complex c6 = c1 * c2;
    cout<<"c5: "<<c5.getReal()<<" + "<<c5.getImag()<<"i"<<endl;
    cout<<"c6: "<<c6.getReal()<<" + "<<c6.getImag()<<"i"<<endl;
    
    return 0;
} 