//Program to check if a triange is right angled or not
//when 3 sides of the triangle are given

#include <iostream>
#include <math.h>
using namespace std;

int checker(int a, int b, int c)
{int y = pow(b,2) + pow(c,2);
 if(pow(a,2) == y)
 return 1;
 else return 0;
}
int main()
{
int a,b,c,k,l=1;
//input of three sides of triangle
cout<<"Enter 3 sides of triangle: ";
cin>>a>>b>>c;
//checking individually with each side as hypotenuse
//a is hypo
k = checker(a,b,c);
if(k==1)
{
cout<<"\nThe triangle is right angeled."; l=0;}
//b is hypo
k = checker(b,a,c);
if(k==1)
{
cout<<"\nThe triangle is right angeled."; l=0;}
//c is hypo
k = checker(c,a,b);
if(k==1)
{
cout<<"\nThe triangle is right angeled."; l=0;}

if(l==1)
{
cout<<"\nThe triangle is not right angeled.";}


return 0;
}
