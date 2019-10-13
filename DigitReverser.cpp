/*Write a function, reverseDigit, that takes an integer as a parameter and returns the number with its digits reversed. For example, the value of reverseDigit(12345) is 54321; the value of reverseDigit(5600) is 65; the value of reverseDigit(7008) is 8007; and the value of reverseDigit(-532) is -235.*/
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
    cout<<"The value of reverseDigit("<<to_be_rev<<") is "<<rev;              //printing of old number and its new reversed form
    return 0;
}
