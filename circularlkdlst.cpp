PROGRAM TO IMPLEMENT CIRCULAR LINKED LIST - c Language
#include<stdio.h>

#include<alloc.h>

#include<conio.h>

struct node

{

int data;

struct node *next;

};

struct node *head=NULL;

struct node *tail=NULL;

void main()

{

void addrecord();

void deleterecord();

void disrecord();

int ch;

clrscr();

do

  {

    printf("\n 1. To add records\n");

    printf("\n 2. To delete a records\n");

    printf("\n 3. To view the records\n");

    printf("\n 4. To exit\n");

    printf("\n Enter your choice\n");

    scanf("%d",&ch);

 

    fflush(stdin);

    switch(ch)

    {

          case 1:addrecord();

                 break;

          case 2:deleterecord();

                 break;

          case 3: disrecord();

                 break;

          case 4:exit(0);

     }

  } while (ch!=4);

}

 

void addrecord()

{

   int new_data;

   char ans='y';

   struct node *ptr,*prev,*temp;

   clrscr();

 

   while (ans=='y')

   {

   temp=(struct node*)malloc(sizeof(struct node));

   printf("\n Enter the new element:\n");

   scanf("%d",&new_data);

   fflush(stdin);

   temp->data=new_data;

   temp->next=NULL;

     if (head==NULL)

     {

          head=tail=temp;

          temp->next=head;

 

      }

      else

      {

          tail->next=temp;

          tail=temp;

      }

    printf("\n Would you like to enter another data(y\\n): \n");

    ans = getchar();

    fflush(stdin);

    }

 

 }

void deleterecord()

{

 struct node *ptr,*prev,*delnode;

 int elt;

 

  printf("\n Enter the enrollment number to be deleted \n");

  scanf("%d",&elt);

  fflush(stdin);

 

if (head==NULL)

 {

  printf("\n No elements in the list \n");

  return;

 }

else

{

  if (head->data==elt)

     {

           delnode=head;

           if (head==tail)

           head=tail=NULL;

           else

           {

           head=head->next;

           tail->next=head;

           }

     }

   else if (tail->data==elt)

    {

      for(ptr=head;(ptr!=tail);prev=ptr,ptr=ptr->next);

      delnode=tail;

      tail=prev;

      tail->next=head;

    }

   else

    {

    for(prev=ptr=head;(ptr->data!=elt)&&(ptr!=tail);

    prev=ptr,ptr=ptr->next);

    if(ptr->data==elt)

    {

       delnode=ptr;

       prev->next=ptr->next;

       printf("yes...");

    }

    else

    {

      printf("Given element not found in the list");

      getch();

      return;

     }

    }

   }

   free(delnode);

}

 

void disrecord()

{

 struct node *ptr,*prev=NULL;

 

    if (head==NULL)

   {

    printf("\n No records to view\n");

    return;

    }

    printf("\n The elements in the circular list are\n");

    for (ptr=head;prev!=tail;prev=ptr,ptr=ptr->next)

    printf("\n\n  %d",ptr->data);

    printf(" NULL\n\n ");

    getch();

}
