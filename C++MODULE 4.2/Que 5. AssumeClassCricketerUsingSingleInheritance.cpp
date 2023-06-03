/* Assume a class cricketer is declared. Declare a derived class batsman from  cricketer. 
Data member of batsman. Total runs, Average runs and best  performance. 
Member functions input data, calculate average runs, Display data (Single Inheritance)*/
 
#include<iostream>n
#include<string.h>
using namespace std;

class Cricketer
{
       public:
	     char TeamNo1[30]; char TeamNo2[30];
		 int choice=0,team1=0,team2=0, team1score=0,team2score=0,i,avgteam1,avgteam2;
		 void display()
		 {
		 	cout<<"-------------Welcome to cricket tournament-----------";
		 	cout<<endl<<"     Tournament info\n Total over :20\n Tournament timing :8:00 am to 12:00 pm";
		 	cout<<endl<<"First team name :";
		 	gets(TeamNo1);
		 	cout<<endl<<"Second team name :";
		 	gets(TeamNo2);
		 	for(i=1;i<=3;i++)
		 	{
		 		cout<<"Day ("<<i<<")";
		 		cout<<endl<<"Who got to bat first";
		 		here:
		 		cout<<endl<<"press 1 for team "<<TeamNo1<<" and"<<"2 for team "<<TeamNo2;
		 		cin>>choice;
		 		if(choice==1)
		 		{
		 			T:
		 			cout<<endl<<"Total Run scored by "<<TeamNo1<<"= : ";
		 			cin>>team1;
		 			if(team1<=0 || team1>=300)
		 			{
		 				cout<<"These scores are not practicle. Try again";
		 				goto T;//goto function is used
					}
					team1score+=team1;
					
					t:
		 			cout<<endl<<"Total Run scored by team 2"<<TeamNo2<<"= : ";
		 			cin>>team2;
		 			if(team2<=0 || team2>=300)
		 			{
		 				cout<<"These scores are not practicle. Try again";
		 				goto t;
					}
					team2score+=team2;
	
				}
				else if(choice==2)
				{
					A:
		 			cout<<endl<<"Total Run scored by "<<TeamNo2<<"= : ";
		 			cin>>team2;
		 			if(team2<=0 || team2>=300)
		 			{
		 				cout<<"These scores are not practicle. Try again";
		 				goto A;
					}
					team2score+=team2;
					
					a:
		 			cout<<endl<<"Total Run scored by "<<TeamNo1<<"= : ";
		 			cin>>team1;
		 			if(team1<=0 || team1>=300)
		 			{
		 				cout<<"These scores are not practicle. Try again";
		 				goto a;
					}
					team1score+=team1;
				}
		 		else 
				{
		 		    cout<<"invalid input please try again";
					goto here;	
				}
		 			
			}
		 	avgteam1 =team1score/3;
			avgteam2= team2score/3;    
		 	   
			}	
			
};
class Batsman :public Cricketer//derived class batsman imherits from cricketer using single inheritance
{
	public:
		void total_run()//base class method
		{
			cout<<endl<<"Total runs scored by team "<<Cricketer::TeamNo1<<" : "<<Cricketer::team1score;//print output using scope resolution operator
			cout<<endl<<"Total runs scored by team "<<Cricketer::TeamNo2<<" : "<<Cricketer::team2score;
		}
		void average_runs()
		{
			cout<<endl<<"Total runs scored by team "<<Cricketer::TeamNo1<<" : "<<Cricketer::avgteam1;
	    	cout<<endl<<"Total runs scored by team "<<Cricketer::TeamNo2<<" : "<<Cricketer::avgteam2;
		}
};
int main()
{
	Batsman obj1;//derived class object
	
	obj1.display();//calling method of base class using derived class object
	cout<<endl<<"-----------Match Results----------------------";
	obj1.total_run();//calling method of derived class using its object
	obj1.average_runs();
}
