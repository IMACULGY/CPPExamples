/*
Consider the definition of the function main.

int main()
{
     int x, y;
     char z;
     double rate, hours;
     double amount;
     .
     .
     .
}
The variables x, y, z, rate, and hours referred to in items a through f below
are the variables of the function main. Each of the functions described must
have the appropriate parameters to access these variables. Write the following
definitions:

a. Write the definition of the function initialize that initializes x and y
to 0 and z to the blank character.

b. Write the definition of the function getHoursRate that prompts the
user to input the hours worked and rate per hour to initialize the
variables hours and rate of the function main.

c. Write the definition of the value-returning function payCheck that calculates
and returns the amount to be paid to an employee based on the hours worked
and rate per hour. The hours worked and rate per hour are stored in the
variables hours and rate, respectively, of the function main. The formula for
calculating the amount to be paid is as follows: For the first 40 hours, the rate is
the given rate; for hours over 40, the rate is 1.5 times the given rate.

d. Write the definition of the function printCheck that prints the hours
worked, rate per hour, and the salary.

e. Write the definition of the function funcOne that prompts the user to
input a number. The function then changes the value of x by assigning
the value of the expression 2 times the (old) value of x plus the value of y
minus the value entered by the user.

f. Write the definition of the function nextChar that sets the value of z to
the next character stored in z.

g. Write the definition of a function main that tests each of these functions.

*/

#include <iostream>

using namespace std;

void initialize(int* x, int* y, char* z){
    *x = *y = 0;
    *z = ' ';
}

void getHoursRate(double* x, double* y){
    cout<<"Enter the number of hours: "<<endl;
    cin>>*x;
    cout<<"Enter the per hour rate: "<<endl;
    cin>>*y;
}

int payCheck(double h, double r){
    if(h <= 40.00){
        return h*r;
    }else{
        return 40*r + ((h-40)*15*r)/10;
    }
}

void printCheck(double h, double r){
    int salary = payCheck(h, r);
    cout<<"Your salary is $"<<salary<<endl;
}

void funcOne(int* x, int y){
    cout<<"Please enter some integer value: "<<endl;
    int k;
    cin>>k;
    *x = *x*2 + y - k;
    cout<<"Updated value of x= "<<*x<<endl;
}

int main(){

    int x, y;
    char z;
    double rate, hours;
    double amount;

    initialize(&x, &y, &z);

    cout<<"After initialisation x= "<<x<<" y= "<<y<<" z= '"<<z<<"'"<<endl;

    getHoursRate(&hours, &rate);
    printCheck(hours,rate);

    funcOne(&x,y);   // x=2 for input=-2
    
    funcOne(&x,y);  // x=1 for input=3

    return 0;
}