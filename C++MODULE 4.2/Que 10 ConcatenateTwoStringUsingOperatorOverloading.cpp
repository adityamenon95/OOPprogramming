/*Write a program to concatenate the two strings using Operator Overloading */


#include<iostream>
using namespace std;

class sample{
	public:
		//class var
		string a;
		
		sample(string word)
		{
		  a=word;
		}
		//passing object to a function
		//operator keyword 
		
		void operator +(sample obj)
		{
			cout<<"concatenate :"<<a+obj.a;
		}
};    
int main()
{
	sample o1("hello");
	sample o2("world");
	
	o1+o2;
	
	return 0;
}
