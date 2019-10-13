#include<iostream>
using namespace std;
int main()
{
    long int n, to_be_rev;          //decleration of variables
    int rem=0,rev=0;
    cout<<"Enter the number to be reversed: ";
    cin>>n;
    to_be_rev=n;                    //Number to be reversed
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;             //Creation of reversed number
        n=n/10;
    }
    cout<<"Reverse of ("<<to_be_rev<<") is "<<rev;              //printing of old number and its new reversed form
    return 0;
}
