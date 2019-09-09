#include<stdio.h>
#include<stdlib.h>
void bs(int [],int ,int ,int );
void main()
{
	int n,i,num;
	printf("\nENTER THE RANGE OF ARRAY");
	scanf("%d",&n);
	int a[n];
	printf("\nENTER THE ELEMENTS");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	printf("\nENTER THE NUMBER TO SEARCH");
		scanf("%d",&num);
	bs(a,num,0,n-1);
	
}
void bs(int a[],int num,int i,int j)
{
	if(i>j){
		printf("\n ELEMENT NOT FOUND");
		}
	else {
	
	{
		int mid=0;
			mid=(i+j)/2;
		if(a[mid]==num)
		{
			printf("\n ELEMENT FOUND");
			exit(0);
		}
		else if(a[mid]>num)
			bs(a,num,i,mid-1);
		else
			bs(a,num,mid+1,j);
	}
	}
}
		 
