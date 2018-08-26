/*LINEAR SEARCH PROGRAM USING POINTERS IN C LANGUAGE
*/
#include<stdio.h>

void main()

{

int *a[100],i,no,*srchno;

clrscr();

printf("\n Enter the number of elements\n");

scanf("%d",&no);

printf("\n Enter %d numbers\n",no);

for(i=0;i<no;++i)

scanf("%d",&a[i]);

printf("Enter the search number\n");

scanf("%d",&srchno);

for(i=0;i<no;++i)

if(srchno==a[i])

{

  printf("\n search number is present");

  exit(0);

}

  printf("\n Search number is not present");

}
