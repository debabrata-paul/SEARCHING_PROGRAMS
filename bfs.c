#include<stdio.h>
int a[20][20],q[20], visited[20],n,i,j,f=0,r=-1;
void bfs(int v)
{
	for(i=1;i<=n;i++)
	if(a[v][i] && !visited[i])
	q[++r]=i;
	if(f <= r){
	
		visited[q[f]] = 1;
		bfs(q[f++]);
	}
}

void main()
{
	int v;
	printf("\n ENTER THE NO OF VERTICES::");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	printf("\nENTER THE ADJACENCY MATRIX");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n THE ADJACENCY MATRIX IS::\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nENTER THE STARTING INDEX");
	scanf("%d",&v);
	bfs(v);
	printf("\nTHE NODES WHICH ARE REACHABLE::");
	for(i=1;i<=n;i++)
	{
		if(visited[i])
			printf("%d\t" , i);
		else
			printf("\n NOT REACHABLE");
	}
}