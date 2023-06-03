// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;
class Matrix
{
	int x[7],y[7];//array variables
	int z[7];
	int i;//variable
	public:
		void accept();//class method declared
		void display();
		void operator +(Matrix obj);//operator overloading
};

void Matrix :: accept()//accessing method using scope resolution operator
{
	cout<<"Enter  array element \n";//matrix array 

	for(i=0;i<7;i++)
	{
		cin>>x[i];
	}
}

void Matrix :: display()
{
	for(i=0;i<7;i++)
	{
		cout<<x[i]<<" ";
	}

	}
	
void Matrix :: operator +(Matrix obj)
{
	for(i=0;i<7;i++)
	{

    	z[i] = x[i]+obj.x[i];
	}
	cout<<endl<<"Addition of two array is :"<<endl;
	for(i=0;i<7;i++)
	{
		cout<<z[i]<<" ";
	}
}
int main()
{
	
    Matrix x1,y1;//class objects
    x1.accept();//using object calling function 
    y1.accept();
    cout<<endl<<"first array is:"<<endl;
    x1.display();
    cout<<endl<<"second array is :"<<endl;
    y1.display();
    x1+y1;

	return 0;
}
