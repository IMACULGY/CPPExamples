#include <iostream>
using namespace std;

int main() {
	// your code goes here
	cout<<"enter 3 numbers\n";
	float a,b,c;
	cin>>a>>b>>c;
	float small = (a<b)?((a<c)?a:c):((b<c)?b:c);
	float big= ((a>b)?((a>c)?a:c):((b>c)?b:c));
	float med;
	if (a==small || a==big)
	{
	    if (c==small || c== big)
	    {
	        med=b;
	    }
	    else
	    med=c;
	}
	else
	{
	    if (c==small || c== big)
	    {
	        med=a;
	    }
	    else
	    med=c;
	}
	
	if (((small*small)+(med*med))==(big*big))
	cout<<"right angle pair";
	else
	cout<<"NOT a right angle pair";
	return 0;
	
	
}
