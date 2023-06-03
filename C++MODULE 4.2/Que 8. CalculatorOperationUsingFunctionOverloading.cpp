/* Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/

#include <iostream>
using namespace std;

class Calculator {
    public:
		void calculate(int No1, int No2)//function with arguments 
		{
            cout << "Addition: " << No1 + No2 << endl;
            cout << "Subtraction: " << No1 - No2 << endl;
            cout << "Multiplication: " << No1 * No2 << endl;
            cout << "Division: " << No1 / No2 << endl;
        }

        void calculate(int No1, int No2, char op)//function with arguments
		 {
        	cout<<"Enter the operation you perform : ";
        	cin>>op;
            switch(op) {
                case '+':
                    cout << "Addition: " << No1 + No2 << endl;
                    break;
                case '-':
                    cout << "Subtraction: " << No1 - No2 << endl;
                    break;
                case '*':
                    cout << "Multiplication: " << No1 * No
					2 << endl;
                    break;
                case '/':
                    cout << "Division: " << No1 / No2 << endl;
                    break;
                default:
                    cout << "Invalid operator!" << endl;
            }
        }
};

int main() {
    Calculator c;//class object
    c.calculate(10, 5);//using object for calling function 
    c.calculate(10, 5, '*');
    return 0;
}

