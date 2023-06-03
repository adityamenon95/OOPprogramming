/*Write a program of to sort the array using templates.*/

#include<iostream>
using namespace std;

template<typename T>
class A
{
	public:
		T i,j, b[10],temp;//class variables
		void input()
		{
			for(i=0;i<10;i++)//FOR loop to enter values in array
			{
				cout<<"enter value  :";
				cin>>b[i];
			}
		}
		void display()//class method
		{
			for(i=0;i<10;i++)
			{
				for(j=i+1;j<10;j++)
				{
					if(b[i]>b[j])//to sort the array
					{
						temp =b[i];
						b[i] =b[j];
						b[j] =temp;
					}
				}
			}
			for(i=0;i<10;i++)//for loop to print the output
			{
				cout<<endl<<b[i];
			}
		}
};
int main()
{
	A<int> obj;//class obj
	obj.input();//calling function
	obj.display();
}
