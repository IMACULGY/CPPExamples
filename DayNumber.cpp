/*
Write a program that prints the day number of the year, given the date in the
form month-day-year. For example, if the input is 1-1-2006, the day
number is 1; if the input is 12-25-2006, the day number is 359. The program
should check for a leap year. A year is a leap year if it is divisible by 4, but not
divisible by 100. For example, 1992 and 2008 are divisible by 4, but not
by 100. A year that is divisible by 100 is a leap year if it is also divisible by
400. For example, 1600 and 2000 are divisible by 400. However, 1800 is not
a leap year because 1800 is not divisible by 400.

You may name the program as you please, for example, "DayNumber.cpp"

Please make sure the program compiles and runs as it should!
*/

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
