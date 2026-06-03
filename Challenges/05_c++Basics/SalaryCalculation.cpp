#include<iostream>

using namespace std;

int main() {

    int salary, per_allowances, per_deducations;
    cout<<"Enter the salary of the person: "<< endl;
    cin>>salary;
    cout<<"Enter the percentage allowances of the person: "<< endl;
    cin>>per_allowances;
    cout<<"Enter the percentage dedication of the person: "<< endl;
    cin>>per_deducations;


    float net_sal = salary + salary*per_allowances - salary*per_deducations;

    cout<< "Net Salary of the person is :" << net_sal << endl;
    cout <<endl;


    return 0;
}