#include<bits/stdc++.h>
using namespace std;
  int main()
  {
    int a,b,c;
    cin>>a>>b>>c;
    a=a*a;
    b=b*b;
    c=c*c;
    if(a==b+c||b==a+c||c==a+b)
    cout<<("Yes,it is a Right Angle Triangle");
    else
    cout<<("No,it's not a Right Angle Triangle");
    return 0;
  }
