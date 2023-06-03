//Write a program to swap the two numbers using friend function without using third variable
#include<iostream>
using namespace std;

class Swap
{
	public:
	int x,y;//variable
	
	public:
		friend void swap(Swap obj);//swapping using friend function
		
};
void swap(Swap obj)
{
//	int x,y;
//	obj.x=25;
//	obj.y=52;
obj.x=23;
obj.y=45;
	obj.x=obj.x+obj.y; //swap the number
	obj.x=obj.x-obj.y;
	obj.x=obj.x-obj.y;

	cout<<"Swapping numbers \n"<<"x :"<<obj.x<<endl<<"y :"<<obj.y;
}
int main()
{
	Swap ob;//class object
	swap(ob);//calling
	
	return 0;
}


