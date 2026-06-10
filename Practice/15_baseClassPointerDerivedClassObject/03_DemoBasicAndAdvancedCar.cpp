#include<iostream>
using namespace std;

class BasicCar
{
    public:
	void start()
	{
		cout<<"Car Started"<<endl;
	}
	
};
    
class AdvanceCar:public BasicCar
{
    public:
	void playmusic()
	{
		cout<<"Playing Music"<<endl;
	}
	
};
    
int main()
{
	BasicCar *ptr;
	ptr=new AdvanceCar();

	ptr->start();
	
	//ptr->playmusic(); //Error: Base class pointer cannot access derived class members
}
    
