#include<bits/stdc++.h>
using namespace std;
int main()
{
	int G[5][5]={{0,4,2,0,0},{0,0,3,2,3},{0,1,0,4,5},{0,0,0,0,0},{0,0,0,-5,0}};
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			//penalty to the weight that is -ve
			if(G[i][j]<0)
			{
				G[i][j]*=G[i][j];		
			}
			else if(G[i][j]==0)
			{
				G[i][j]=100;
			}
		}
	}
	//running dijkstras algorithm
	int order[5]={0},distance[5],visited[5]={0},mini,node;
	for(int i=0;i<5;i++)
	{
		distance[i]=G[0][i];
	}
	for(int c=0;c<5;c++)
	{
    	mini=100;
		for(int i=0;i<5;i++)
		  	if(distance[i]<mini && !visited[i]) 
		  	{
		    	mini=distance[i];
		    	node=i;
		  	}
		visited[node] = 1;
		for(int i=0;i<5;i++)
		{
		  	if(!visited[i])
		  	{
		    	if(mini+G[node][i]<distance[i])
		    	{
		      		distance[i]=mini+G[node][i];
		    	}
		    }
  		}
  	}
  	for(int i=1;i<5;i++){
      	printf("From source 1 to %d is %d\n",i+1,distance[i]);
  	}
  	return 0;
}
