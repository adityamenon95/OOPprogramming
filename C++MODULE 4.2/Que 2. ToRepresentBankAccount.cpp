/*Que-2 
Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include<iostream>
using namespace std;

class BankAccount
{
	public:
	int Balance=50000;//class var
	char Name[20]="ADITYA";
	char Type[10]="current";
	long int AccountNo=45985377896;
	int Deposit,WithDraw,ToDeposit,ToWithDraw;
	
	public:
		void Bank()//void method 1 to take input from user
		{
			cout<<"===========Bank Account Details==========="<<endl;
			cout<<"Depositor : "<<Name<<endl;
			cout<<"Account No : "<<AccountNo<<endl;
			cout<<"Type Of Account :"<<Type<<endl;
			cout<<"Balance ="<<Balance<<endl;
		}
		int bank()//int method 2 to take input from user
		{
			cout<<"Enter the Amount to be Deposited"<<endl;
			cin>>Deposit;
			ToDeposit=50000+Deposit;
		    cout<<"Remaining balance ="<<ToDeposit<<endl;
		    cout<<"Enter the Amount to be Withdrawed"<<endl;
		    cin>>WithDraw;
		    ToWithDraw=ToDeposit-WithDraw;
		    cout<<"Remaining balance ="<<ToWithDraw<<endl;
		    cout<<"Name ="<<Name<<endl<<"Balance = "<<Balance<<endl;
		}
};
int main()
{   
     BankAccount obj;//obj created
     obj.Bank();//calling the function using object
     obj.bank();
}
