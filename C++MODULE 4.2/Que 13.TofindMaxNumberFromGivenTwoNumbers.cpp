/*Write a program to find the max number from given two numbers using
friend function*/

#include<iostream>
using namespace std;

class Test {
private:
   int a, b;//class variable
public:

   void input()//method to take input
    {
       cout << "Enter two numbers:";
       cin >>a>>b;
   }

   friend void find(Test t);//friend function
};

void find(Test t) {
   if (t.a > t.b) {
       cout << "Largest is:" << t.a;
   } else {
       cout << "Largest is:" << t.b;
   }
}

int main() {

   Test t;//class object
   t.input();//calling function using object
   find(t);

   return 0;
}
