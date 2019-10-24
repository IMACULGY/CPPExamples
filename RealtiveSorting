#include <bits/stdc++.h>
using namespace std;

vector<int> sorted(vector<int> a,vector<int> b,int n1,int n2){
	vector <int> c;
	// array a is sorted using labrary sorting function
	sort(a.begin(),a.end()); 

	for(int i=0;i<n2;i++){
		for(int j=0;j<n1 && a[j]<=b[i];j++){
			// elements of sorted a is entered to array c 
			// maintaing the element order as in b
			if(a[j]==b[i]){
				c.push_back(a[j]);
				//clear the element pushed into c
				a[j]=0;
			}
		}
	}

	// the elements that are not in b is in being entered to c 
	// in sorted manner as a is already sorted
	for(int i=0;i<n1;i++)  
		if(a[i]!=0)    //remaining elements of a
			c.push_back(a[i]);
			
	//return the output
	return c; 
}


int main() {
	int n1,n2,u;
	vector<int> :: iterator p; //iterator p

	scanf("%d %d",&n1,&n2);

	vector<int> a; //array a
	vector<int> b;//array b

	for(int j=0;j<n1;j++){
		scanf("%d",&u);
		// inputing elements of array a
		a.push_back(u); 
	}
	for(int j=0;j<n2;j++){
		scanf("%d",&u);
		// inputing elements of array b
		b.push_back(u);  
	}

	// implemented relative sorting function
	vector<int> c=sorted(a,b,n1,n2); 
	for(p=c.begin();p!=c.end();p++)	
		printf("%d ",*p);  // printing the sorted array
	printf("\n");

	return 0;
}
