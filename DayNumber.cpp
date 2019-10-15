#include<iostream>

using namespace std;

int main()
{
	char date[10];
	
	cout<<"Enter date in MM-DD-YYYY format: ";
	cin>>date;
	
	int day, month, year, result=0;
	
	day = (date[3]-'0')*10 + (date[4]-'0');
	month = (date[0]-'0')*10 + (date[1]-'0');
	year = (date[6]-'0')*1000 + (date[7]-'0')*100 + (date[8]-'0')*10 + (date[9]-'0');
	
	if((year%4==0 && year%100!=0) || (year%100==0 && year%400==0))
	{
		int arr[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		
		for(int i=1; i<month; i++)
		{
			result += arr[i];
		}
		
		result += day;
	}
	else
	{
		int arr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		
		for(int i=1; i<month; i++)
		{
			result += arr[i];
		}
		
		result += day;
	}
	
	cout<<"Day Number is "<<result;
	
	return 0;
}
