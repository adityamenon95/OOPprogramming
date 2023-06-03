/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)*/
 
#include<iostream>
#include<string.h>
using namespace std;

class Stud
{
	public:
	
		int RollNo;//class variable
		void display()//method of base class one
		{
			cout<<"-------- Date of Batch result----------";
			cout<<endl<<endl<<"Enter Roll number :"<<endl;
			cin>>RollNo;
		}
};
class Test
{
	public:
		int Maths,Science;//class variable
		void display1()//method of base class two
		{
			cout<<"Each subject is of 100 marks "<<endl;
			cout<<"marks obtained in maths "<<endl;
			cin>>Maths;
			cout<<"marks obtained in science :"<<endl;
			cin>>Science;
		}
};
class Result : public Stud,public Test  //multi level inheritance inherting from two base classes 
{
	public:
		void display2()
		{
			cout<<endl<<"=========Data inserted==========";
			cout<<endl<<"Roll number of student :"<<Student ::roll;//getting using scope resolution operator
			cout<<endl<<"Total marks obtained :"<<test::maths+test::science;
		}
};
int main()
{
   Result obj;//child class obj
   obj.display();//using obj calling function of base classes
   obj.display1();
   obj.display2();	
}
