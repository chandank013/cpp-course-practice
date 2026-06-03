#include<iostream>

using namespace std;

int main() {

    // enum and typedef are user defined data types
    enum day {sun,mon,tue,wed,thu,fri,sat};
    day d1=mon;
    cout<<d1<<endl;
    
    typedef int marks;
    marks m1=95;
    cout<<m1<<endl;
    
    return 0;
}