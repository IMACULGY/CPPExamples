#include <iostream>
#include <string>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;


int display_Choices();
string twentyfour_to_twelve();
string twelve_to_twentyfour();
string get_input();
void display(string);
int main(){
string (*funptr[])()={twentyfour_to_twelve,twelve_to_twentyfour};
display((funptr[display_Choices()])());

return 0;
}
/***


Display the choices and input format


***/
int display_Choices(){
int a;
cout << "Enter the requiered option:\n";
cout << "24 hour to 12 hour format [input format: 23:00   12:12   12:00  0:00] -> press 1\n";
cout << "12 hour to 24 hour format [input format: 12:00NOON  2:10PM   1:00PM  0:00MIDNIGHT] -> press 2\n";

cin >> a;
return a-1;
}

/***



Recieve the input from the uder


***/



string get_input(){
string time;
cout << "Enter the time of decided format:\n";
cin >> time; 
return time;
}

/***



Function to convert 24hr to 12hr format



***/

string twentyfour_to_twelve(){
string result;
string time = get_input();
int index = time.find(':');
int hours = strtol(time.substr(0,index).c_str(),NULL,10);
int minutes = strtol(time.substr(index+1,time.length()-index-1).c_str(),NULL,10);
int hour12 = (hours!=12)?hours%12 : hours ;
string amorpm;
if (hours!=12 && minutes!=0)
amorpm= hours>=12?"PM":"AM";
 else if (hours==0 && minutes==0){
 amorpm="MIDNIGHT";
 }
 else{
 amorpm="NOON";
 }
 result=to_string(hour12)+":"+(minutes<10?"0"+to_string(minutes):to_string(minutes))+amorpm;
 return result;
}
/***


function to convert the 12hr to 24hr format



***/



string twelve_to_twentyfour(){
int hours24;
int minutes;
string amorpm;
string result;
string time=get_input();
int index=time.find(':');
int hours = strtol(time.substr(0,index).c_str(),NULL,10);
reverse(time.begin(),time.end());
string rev=time;
if(rev.substr(0,2)!="MP" && rev.substr(0,2)!="MA")
{ reverse(time.begin(),time.end());
 minutes = strtol(time.substr(index+1,time.length()-index-1-3).c_str(),NULL,10);}
else{
reverse(time.begin(),time.end());
minutes = strtol(time.substr(index+1,time.length()-index-1-2).c_str(),NULL,10);
}
if(rev.substr(0,2)=="MP")
 hours24=12+hours;
else if(rev.substr(0,2)=="TH"){
hours24=0;
}
else {
hours24=hours;
}


result=to_string(hours24)+":"+(minutes<10?"0"+to_string(minutes):to_string(minutes));
return result;
}

/***


display the result


***/

void display(string result){
cout << result;
}
