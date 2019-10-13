/*Write a program that prints the day number of the year, given the date in the form month-day-year.*/
#include<iostream>
using namespace std;
int main()
{
    int mm, dd, yyyy, days_count=0;
    int days_in_lp[]={0,31,29,31,30,31,30,31,31,30,31,30,31};           //number of days in a month of a leap year
    int days_in_nlp[]={0,31,28,31,30,31,30,31,31,30,31,30,31};          //number of days in a month of a non-leap year
    cout<<"Enter the date in the mm dd yyyy format: ";
    cin>>mm>>dd>>yyyy;
    if ((yyyy%4==0 && yyyy%100!=0)||(yyyy%400==0))
    {
        for (int i=1;i<mm;i++)
        {
            days_count+=days_in_lp[i];                              //Adding days of previous months for a leap year
        }
        days_count+=dd;                                             //Adding days of current month if the year is a leap year
    }
    else
    {
        for (int i=1;i<mm;i++)
        {
            days_count+=days_in_nlp[i];                             //Adding days of previous months for a non- leap year
        }
        days_count+=dd;                                             //Adding days of current month for a non- leap year
    }
    cout<<"The day number for "<<mm<<"-"<<dd<<"-"<<yyyy<<" is "<<days_count;                //printing the number of days
    return 0;
}
