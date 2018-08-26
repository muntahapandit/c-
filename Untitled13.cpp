/*PROGRAM TO IMPLEMENT MERGE SORT USING ARRAYS
*/
#include<stdio.h>
#define MAX 20

void mergesort(int *,int);
void main()
{
int x[MAX],n,j,i;
char ans;
clrscr();
{
printf("\nEnter The Length Of The Array\t: ");
scanf("%d",&n);
for(i=0;i< n;i++)
{
printf("Enter Element %d\t: ",i+1);
scanf("%d",&x[i]);
}
mergesort(x,n);
printf("\n\t¦ Sorted Array :\t\t\t¦\n\t¦");
for(i=0;i< n;i++)
printf("%d\t",x[i]);
}
printf("¦");
getch();
}

void mergesort(int x[],int n)
{
int sub[MAX];
int i,j,k,list1,list2,u1,u2,size=1;
while(size< n)
{
list1=0;
k=0;

while((list1+size)< n)
{
list2=list1+size;
u1=list2-1;
u2=((list2+size-1)< n)?(list2+size-1):(n-1);

for(i=list1,j=list2;i< =u1 &&amp;amp;amp; j< =u2;k++)
if(x[i]< =x[j])
sub[k]=x[i++];
else
sub[k]=x[j++];

for(;i< =u1;k++)
sub[k]=x[i++];

for(;j< =u2;k++)
sub[k]=x[j++];

list1=u2+1;
}
for(i=list1;k< n;i++)
sub[k++] = x[i];
for(i=0;i< n;i++)
x[i] =sub[i];
size *= 2;
}
}
