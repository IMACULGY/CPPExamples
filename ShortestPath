#include <bits/stdc++.h>
using namespace std;

//checking valid node
int isvalid(int nextx,int nexty,int m,int n){
	if(nextx>=0 && nextx<m && nexty>=0 && nexty<n)
		return 1;
	return 0;
}

//defining point
class point{
	public:
	int row;
	int col;
	//make point 
	void mpoint(int m,int n){
		row=m;
		col=n;
	} 
};

//defining node
class node{
	public:
	point p;
	int d;
	void mnode(point q,int dis){ //make node
		p.row=q.row;
		p.col=q.col;
		d=dis;
	}
};


//finding shortest path
int shortest(int** a,int m,int n,int x1,int y1){
	if(a[0][0]==0)//base case
		return -1;

	bool visited[m][n];
	//initialize
	memset(visited,false,sizeof(visited));

	//declare queue by STL 
	queue<node> q;

	point curr;
	//set the source point (0,0)
	curr.mpoint(0,0);

	node t;
	//set the source node at point (0,0)
	t.mnode(curr,0); 

	//ENQUEUE source node
	q.push(t); 

	//direction matrices
	int arrx[]={-1,0,1,0};
	int arry[]={0,1,0,-1};

	point c;
	node v;
	while(!q.empty()){
		//DEQUEUE
		v=q.front();

		c=v.p;
		//if destnation node is reached
		if(x1==c.row && y1==c.col ){ 
			return v.d;
		}
		q.pop();
		//check for all four neighbours
		for(int i=0;i<4;i++){ 
			int nextx=c.row+arrx[i];
			int nexty=c.col+arry[i];
			//if valid node && not visited yet
			if(isvalid(nextx,nexty,m,n) && a[nextx][nexty] && !visited[nextx][nexty]){
				curr.mpoint(nextx,nexty);
				//set neighbour node by incrementing distance value
				t.mnode(curr,(v.d)+1); 
				q.push(t); //EnQueue
				//mark as visited
				visited[nextx][nexty]=true;
			}
		}
	}
	return -1;
}


int main()
{
	int m,n,x,y;

	cout<<"enter matrix row & column"<<endl;
	scanf("%d %d",&m,&n);
	
	int **a=(int**)malloc(sizeof(int*)*m);
	
	for(int i=0;i<m;i++)
		a[i]=(int*)(malloc(sizeof(int)*n));
	
	cout<<"enter matrix elements (0/1)"<<endl;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	
	cout<<"enter row & column of destinanation point"<<endl;
	scanf("%d %d",&x,&y);
	
	if(shortest(a,m,n,x,y)!=-1)//if path found
		printf("shortest distance is %d\n",shortest(a,m,n,x,y));
	else{
		cout<<-1<<endl;
		cout<<"no path found\n";
	}
	
	return 0;
}
