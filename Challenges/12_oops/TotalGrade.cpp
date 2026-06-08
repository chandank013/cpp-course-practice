#include<iostream>

using namespace std;

class Student 
{
    private:
    int rollNumber;
    string name;
    int marks1;
    int marks2;
    int marks3;

    public:
    Student(int rollNumber,string name,int marks1,int marks2,int marks3)
    {
        this->rollNumber=rollNumber;
        this->name=name;
        this->marks1=marks1;
        this->marks2=marks2;
        this->marks3=marks3;
    }

    int getRollNumber()
    {
        return rollNumber;
    }
    string getName()
    {
        return name;
    }
    int getMarks1()
    {
        return marks1;
    }
    int getMarks2()
    {
        return marks2;
    }
    int getMarks3()
    {
        return marks3;
    }
    
    // function to calculate total marks
    int totalMarks()
    {
        return marks1+marks2+marks3;
    }

    //function for calculate grade
    char grade()
    {
        int total=totalMarks();
        if(total>=270)
        {
            return 'A';
        }
        else if(total>=240)
        {
            return 'B';
        }
        else if(total>=210)
        {
            return 'C';
        }
        else
        {
            return 'D';
        }
    }

    ~Student()
    {
        cout<<"Destructor called for roll number: "<<rollNumber<<endl;
    }
};

int main()
{
    Student s1(1,"John",90,85,80);
    cout<<"Roll Number: "<<s1.getRollNumber()<<endl;
    cout<<"Name: "<<s1.getName()<<endl;
    cout<<"Marks 1: "<<s1.getMarks1()<<endl;
    cout<<"Marks 2: "<<s1.getMarks2()<<endl;
    cout<<"Marks 3: "<<s1.getMarks3()<<endl;
    cout<<"Total Marks: "<<s1.totalMarks()<<endl;
    cout<<"Grade: "<<s1.grade()<<endl;

    return 0;
}