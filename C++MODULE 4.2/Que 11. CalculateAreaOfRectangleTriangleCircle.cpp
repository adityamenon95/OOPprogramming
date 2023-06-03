/* Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
„« Rectangle: Area * breadth
„« Triangle: . *Area* breadth
„« Circle: Pi * Area *Area
*/
#include<iostream>
using namespace std; 

class base
{
public:
	int choice,base,height,radius,length,width;
	float area;

void getdata()//method to get data
{
cout<<"\t *****************Menu***************** \n";
cout<<"\t 1. Triangle\n";
cout<<"\t 2. Cricle\n";
cout<<"\t 3. Rectangle\n";

cout<<"Select your choice:";
cin>>choice;
	
}
};
class letdata : public base//single level inheritance
{
public:
void sdata()
{
	if (choice==1)//if else if condition 
	{
		cout<<"Enter Base & Height:";
		cin>>base>>height;
		area=(base*height)/2;
		cout<<"Area of Triangle:"<<area;
	}
	else if (choice==2)
	{
		cout<<"Enter radius of circle:";
		cin>>radius;
		area=3.142*radius*radius;
		cout<<"Area of circle:"<<area;
	}
	else if (choice==3)
	{
		cout<<"Enter Length & Width:";
		cin>>length>>width;
		area=length*width;
	    cout<<"Area of Rectangle:"<<area;
	}
	else
	{
			cout<<"invalid output";
	}	
}
};

main()
{
letdata d;//class obj of child class 
d.getdata();//calling base class function using obj of child class 
d.sdata();
}
