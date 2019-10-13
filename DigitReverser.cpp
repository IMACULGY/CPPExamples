#include<bits/stdc++.h>
using namespace std;

string reverse(string number)
{
    int ind = 0;
    string ans;
    if(number[0] == '-')
    {
        ind = 1;
        ans += '-';
    }
    int flag=1;
    int n = number.size();
    for(int i = n-1; i>=ind; i--)
    {
        if(number[i] == '0' && flag == 1)
        {
            continue;
        }
        else
        {
            flag=0;
            ans+=number[i];
        }
    }
    if(number == "0" || number == "-0")
    {
        ans = number;
    }
	return ans;
}

int main()
{
    string number;
    cout<<"Enter the number to be reversed: ";
    cin>>number;
    cout<<endl;
    cout<<"Reversed number: "<<reverse(number);    
}
