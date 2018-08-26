#include<stdio.h>
#include<conio.h>
int main()
{
	int A[10],B[10],i;
	printf("enter the elements of array A:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}
     int temp=A[0];
	for(i=0;i<5;i++)
	{
	  B[i]=A[i+1];	
	}
	 B[4]=temp;
	for(i=0;i<5;i++)
	{
	printf("%d  ",B[i]);
}	
}
