/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/


#include<iostream>
#include<string.h>

using namespace std;

class person
{
	public:
		char Name[20];//class variables 
		int Age;
		void input()//class method for talking input from user
		{
			cout<<"--------------presonal Details-------";
			cout<<endl<<"Enter name :";
			gets(Name);
			cout<<endl<<"Age :";
			cin>>Age;
		}
};
class student:public person//inheriting from parent class person 
{
	public :
		int Percentage;
		
		void percentage()
		{
			cout<<endl<<"percentage of "<<person::Name<<" in % : ";//accessing name using scope resolution operator
			cin>>Percentage;
		}
};
class teacher :public student//inherting from parent class student multi level inheritance
{
	public:
		string Teacher;//string variables
		int Salary=0;
		
		void salary()
		{
			cout<<endl<<"Name of teacher : ";
			cin>>Teacher;
			cout<<endl<<"Salary of "<<Teacher<<" : ";
			cin>>Salary;
			cout<<endl<<"======= Data inserted===========";
			cout<<endl<<"Name :"<<person::Name;
			cout<<endl<<"Age :"<<person::Age;
			cout<<endl<<"percentage : "<<student::Percentage;
			cout<<endl<<"Name of teacher:"<<Teacher;
			cout<<endl<<"Salary of teacher  :"<<Salary;
			
		}
};
int main()
{
	teacher obj;//derived class obj 
	obj.input();//using obj calling function of base class
	obj.percentage();
	obj.salary();
}
