/*Write a program of to swap the two values using templates*/

#include<iostream>
using namespace std;

template <typename T>
T Swap(T &x, T &y)
{
	T Temp;//swaping two numbers
	Temp = x;
	x = y;
	y = Temp;
}
int main()
{
	int x=12,y=56;//variables assigned
	
	cout<<"Before passing data to function Tempalte"<<endl;
	cout<<"x = "<<x<<"\ny = "<<y;
	
	Swap(x,y);
	
	cout<<"\nAfter passing data to function Tempalte"<<endl;
	cout<<"x = "<<x<<"\ny ="<<y;//printing output
}
