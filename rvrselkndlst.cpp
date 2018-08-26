Program to implement REVERSE LINKED LIST PROGRAM using c

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

struct node

{


int no;

struct node *next;

};

 

struct node *head=NULL,*temp,*LLt;

void addrecord();

void main()

{

  int ch;

  clrscr();

  while (1)

  {

    printf("\n add element (number) TO LIST\n 0 TO EXIT / END");

    scanf("%d", &ch)
    if (ch==0)
    {
     exit(0);
    }
    else
    {
    AddElement(ch,*LLt );
    }
    printf("the reverse of linked list is %d " reverse(*LLt));

}
    
void AddElement(ch,*LLt )

{

   struct node *temp;

   
   temp=(struct node*)malloc(sizeof(struct node));


   temp->no=ch;

      
     if (LLt==NULL)

     {

          LLt=temp;

           temp->next=NULL;
           
         
        }

      else

      {

          LLt->next=temp;

          temp->next=NULL;
          
      
      }

    

    }

 

node *reverse(node *first)
{
   node *temp = NULL;

   if(first->next != NULL)
   {
        temp = reverse(first->next);
        temp->next = first;
        return first;
   }
   else
        return first;

 }
