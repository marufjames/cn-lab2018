//Link State - Dijsktras Algo to find the shortest path

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,src,i,j,w,v,min;
	int cmat[100][100],dist[100],last[100];
	int flag[100];
	printf("Enter the no of nodes\n");
	scanf("%d",&n);
	printf("Enter the cost matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&cmat[i][j]);
			if(cmat[i][j]<0)
				cmat[i][j]=999;
		}
	}
	printf("Enter src node\n");
	scanf("%d",&src);
		for(v=0;v<n;v++)
		{
			flag[v]=0;
			last[v]=src;
			dist[v]=cmat[src][v];
		}
	flag[src]=1;
	for(i=0;i<n;i++)
	{
		min=999;
		for(w=0;w<n;w++)
		{
			if(!flag[w])
			if(dist[w]<min)
			{
				v=w;
				min=dist[w];
			}
		}
	flag[v]=1;
	for(w=0;w<n;w++)
	{
		if(!flag[w])
		if(min+cmat[v][w]<dist[w])
		{
			dist[w]=min+cmat[v][w];
			last[w]=v;
		}
	}


}
for(i=0;i<n;i++)
	{
		printf("\n%d-->%d\n",src,i);
		w=i;
		printf("\nShortest path cost is :%d\n",dist[i]);
	}
}	
