/*The function func2 has three parameters of type int, int, and double, say a, b,
and c, respectively. Write the definition of func2 so that its action is as follows:

a. Prompt the user to input two integers and store the numbers in a and b,
respectively.

b. If both of the numbers are nonzero:
i. If a >= b, the value assigned to c is a to the power b, that is, ab.
ii. If a < b, the value assigned to c is b to the power a, that is, ba.

c. If a is nonzero and b is zero, the value assigned to c is the square root of
the absolute value of a.

d. If b is nonzero and a is zero, the value assigned to c is the square root of
the absolute value of b.
e. Otherwise, the value assigned to c is 0.

The values of a, b, and c are passed back to the calling environment.
After completing the definition of the func2 and writing its function
prototype, test run your program.

You may name the program as you please, for example, "FunctionTester.cpp"*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void func1();
void func2(int a,int b,double c);
int main()
{
     int num1, num2;
     double num3;
     int choice;
     cout << fixed << showpoint << setprecision(2);
     do
     {
          func1();
          cin >> choice;
          cout << endl;
          if (choice == 1)
          {
               func2(num1, num2, num3);
               cout << num1 << ", " << num2 << ", " << num3 << endl;
          }
     }
     while (choice != 99);
     return 0;
}

void func1()
{
     cout << "To run the program, enter 1." << endl;
     cout << "To exit the pogram, enter 99." << endl;
     cout << "Enter 1 or 99: ";
}

void func2(int a,int b,double c)
{
     //Write the body of func2.
    cout<<"Enter two integers"<<endl;
    int x,y;
    cin>>x>>y; // Taking two integers as input
    a=x; //Storing first number in a
    b=y; //Storing second number in b
    if(a!=0 && b!=0) //If both of the numbers are nonzero
    {
        if(a>=b) //If a >= b, the value assigned to c is a to the power b, that is, ab.
        {
            c=a*b;
        }
        else //If a < b, the value assigned to c is b to the power a, that is, ba.
        {
            c=b*a;
        }
    }
    else if(a!=0 && b==0) //If a is nonzero and b is zero, the value assigned to c is the square root of the absolute value of a.
    {
        c=sqrt(abs(a));
    }
    else if(b!=0 && a==0) //If b is nonzero and a is zero, the value assigned to c is the square root of the absolute value of b.
    {
        c=sqrt(abs(b));
    }
    else //Otherwise, the value assigned to c is 0.
    {
        c=0;
    }
}