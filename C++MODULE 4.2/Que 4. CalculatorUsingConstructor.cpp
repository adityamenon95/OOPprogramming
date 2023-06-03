#include<iostream>
using namespace std;

class Addition
{
	float z;//class variables
	
	public:
		Addition(float x,float y);
	
};
Addition ::Addition(float x,float y)//constructor with arguments
{
	z=x+y;
	cout<<"Sum of given two numbers :"<<z<<endl;
}
class Subtraction
{
	float z;
	
	public:
		Subtraction(float x,float y);
	
};
Subtraction ::Subtraction(float x,float y)//constructor 2 with scope resolution operator
{
	z=x-y;
	cout<<"Sub of given two numbers :"<<z<<endl;
}
class Multiplication
{
	float z;
	
	public:
		Multiplication(float x,float y);
	
};
Multiplication ::Multiplication(float x,float y)//constructor 3
{
	z=x*y;
	cout<<"Mul of given two numbers :"<<z<<endl;
}
class Division
{
	float z;
	
	public:
		Division(float x,float y);
	
};
Division ::Division(float x,float y)//constructor 4
{
	z=x/y;
	cout<<"Division of given two numbers :"<<z<<endl;
}

int main()
{
	float a,b;
	cout<<"Enter two numbers :";
	cin>>a>>b;
	
	Addition add(a, b);//creating an object of constructor
    Subtraction sub(a, b);
    Multiplication mult(a, b);
    Division div(a, b);

}
