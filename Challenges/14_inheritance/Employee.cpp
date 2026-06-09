#include<iostream>

using namespace std;


class Employee
{
    private:
        string name;
        int id;
        double salary;
    public:
        Employee(string name, int id, double salary)
        {
            this->name = name;
            this->id = id;
            this->salary = salary;
        }
        
};

int main()
{
    Employee emp1("John Doe", 12345, 50000.0);

    
    return 0;
}