#include<iostream>

using namespace std;

class RationalNumber
{
    private:
        int numerator;
        int denominator;
    public:
        RationalNumber(int num, int den)
        {
            numerator = num;
            denominator = den;
        }

        RationalNumber operator+(RationalNumber const &obj)
        {
            RationalNumber res(0, 1);
            res.numerator = numerator * obj.denominator + obj.numerator * denominator;
            res.denominator = denominator * obj.denominator;
            return res;
        }

        void display()
        {
            cout << numerator << "/" << denominator << endl;
        }

};

int main()
{
    RationalNumber r1(1, 2);
    RationalNumber r2(1, 3);
    RationalNumber r3 = r1 + r2;
    r3.display();
    return 0;
}