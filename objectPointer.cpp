// Explicitly copy constructor Calling
#include<iostream>
using namespace std;

class Sample
{
	int id;
	public:
	// void init(int x)
	// {
	// 	id=x;	
	// }	
    Sample(){
    
    } 
	Sample(double a, double b){
        id = a + b;
    } 
    Sample(int a, int b){
        id = a - b;
    }

    //default constructor with empty body
	
	// Sample(Sample &t) //copy constructor
	// {
	// 	id=t.id;
	// }
	void display()
	{
		cout<<endl<<"ID="<<id;
	}
};
int main()
{
	Sample obj1(10, 5);
	//obj1.init(10);
	obj1.display();
	
	Sample obj2; //or obj2=obj1; copy constructor called
    obj2 = obj1;
	obj2.display();
	return 0;
}
