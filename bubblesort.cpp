#include<stdio.h>
#define MAX 100
int main()
{
	int A[5] , i , j , temp,n;
	printf("BUBBLE SORT:\n");
	printf("array before sorting:");
	scanf("%d",&A[i]);
	for(i=0;i<5;i++)
	{
		printf("%d",A[i]);
	}
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("array after sorting:");
	for(i=0;i<5;i++)
	printf("%d",A[i]);
	printf("\n");
}
