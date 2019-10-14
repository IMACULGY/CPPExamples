/*A Simple C++ program to Check whether a triangle is a Right Angled Triangle or not.*/

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three space separated lengths of the triangle :"<<"\n";
    cin>>a>>b>>c;
    a=a^2;
    b=b^2;
    c=c^2;
    if(a==b+c)
        cout<<"Right Angled Triangle"<<endl;
    else if(b==c+a)
        cout<<"Right Angled Triangle"<<endl;
    else if(c==a+b)
        cout<<"Right Angled Triangle"<<endl;
    else
        cout<<"Not a Right Angled Triangle"<<endl;
    return 0;
}