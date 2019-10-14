#include<bits/stdc++.h>
using namespace std;

// function to check for leap year
bool isLeapYear(int year)
{
   
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0) return true;
            else return false;
        }
        else return true;
    }
    else return false;
}

// split date into day, month and year
void split_day_month_year(string date,int &day, int &month, int &year)
{
    stringstream f(date);
    vector<string> arr;
    string s;
    
    while(getline(f,s,'-'))
    {
        arr.push_back(s);
    }
    
    day = stoi(arr[1]);
    month = stoi(arr[0]);
    year = stoi(arr[2]);
    
}

// find # of days
int countNumberOfDays(int day, int month, int year)
{
    int no_of_days = 0;
    if(isLeapYear(year))
    {
        for(int i=1;i<month;i++)
        {
            if(i<=7)
            {
                if(i==2) no_of_days += 29;
                else if(i%2!=0) no_of_days += 31;
                else no_of_days += 30;
            }
            else
            {
                if(i%2==0) no_of_days += 31;
                else no_of_days += 30;
            }
        }
    }
    else
    {
        for(int i=1;i<month;i++)
        {
            if(i<=7)
            {
                if(i==2) no_of_days += 28;
                else if(i%2!=0) no_of_days += 31;
                else no_of_days += 30;
            }
            else
            {
                if(i%2==0) no_of_days += 31;
                else no_of_days += 30;
            }
        }
    }
    no_of_days += day;
    
    return no_of_days;
}

int main()
{
    string date;
    cout<<"Enter date as MM-DD-YYYY: ";
    cin>>date;
    
    int day,month,year;
    split_day_month_year(date,day,month,year);
    
    int days = countNumberOfDays(day,month,year);
    cout<<"Number of days till "<<date<<" is: "<<days<<endl;
    
    return 0;
}
