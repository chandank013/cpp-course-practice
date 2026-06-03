# include<iostream>

using namespace std;

int main() {

    // WAP to calculate the distance between two points
    int x1, y1, x2, y2;
    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Distance between the two points: " << distance << endl;

    // WAP to calculate the simple interest
    int principal, rate, time;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;

    double simpleInterest = (principal * rate * time) / 100.0;
    cout << "Simple Interest: " << simpleInterest << endl;

    // WAP to calculate the compound interest
    double compoundInterest = principal * pow((1 + rate / 100.0), time) - principal;
    cout << "Compound Interest: " << compoundInterest << endl;

    // WAP to calculate the volume of a sphere
    double radius;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    double volume = (4.0 / 3.0) * (22/7) * pow(radius, 3);    

    cout << "Volume of the sphere: " << volume << endl;

    return 0;
}