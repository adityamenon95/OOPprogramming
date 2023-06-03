/*WAP to create simple calculator using class*/

#include<iostream>
using namespace std;

class calculator
{
	float x,y;//class variables
	public:
		
		void input()//method for taking input
		{
			cout<<"Enter two numbers :"<<endl;
			cin>>x>>y;
		}
		
		float Sum()//method for sum
		{
			return x+y;
		}
	    float Sub()//method for sub
		{
			return x-y;
		}
		float Mul()//method for mul
		{
			return x*y;
		}
		float Div()//method for div
		{
			return x/y;
		}
	
};
int main()
{
	int choice;//variable for switch case choice
	
	calculator obj;//obj of class created
	
	    cout<<"Enter 1 to Addition\n";
	    cout<<"Enter 2 to Substraction\n";
	    cout<<"Enter 3 to Multiplication\n";
      	cout<<"Enter 4 to Division\n";
	    cout<<"Enter 0 to Exit\n";
	    
	do
	{
		
		cout<<"\nEnter your choice\n";// to take choice input from user
		cin>>choice;
		switch(choice)//switch case
		{
			case 1:
				obj.input();
				cout<<"Result = "<<obj.Sum()<<endl;
				break;
			case 2:
				obj.input();
				cout<<"Result = "<<obj.Sub()<<endl;
				break;
			case 3:
				obj.input();
				cout<<"Result = "<<obj.Mul()<<endl;
				break;
			case 4:
				obj.input();
				cout<<"Result = "<<obj.Div()<<endl;
				break;		
		}
		
	}while(choice >= 1 && choice <= 4);
	
	
	return 0;
}
