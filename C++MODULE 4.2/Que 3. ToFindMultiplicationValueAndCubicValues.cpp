/*Write a program to find the multiplication values and the cubic values using
inline function
*/
#include<iostream>
using namespace std;

class function//class
{
	public:
		inline float Multi(float A,float B)//inline function 
		{
			return (A*B);
		}
		inline float Cubic(float A)//inline function 
		{
			return (A*A*A);
		}
	
};
int main()
{
	function obj;// class obj 
	float a,b;//float variables
	cout<<"Enter two values"<<endl;//taking input
	cin>>a>>b;
	
	cout<<"MULTIPLICATION VALUE IS :\n"<<obj.Multi(a,b);//calling function using obj
	
	cout<<"\n----------------------------------\n";
	
	cout<<"CUBIC VALUE IS :\n"<<obj.Cubic(a);//calling function using obj

	
}
