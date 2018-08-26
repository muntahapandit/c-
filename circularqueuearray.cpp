PROGRAM TO IMPLEMENT CIRCULAR QUEUE USING ARRAYS USING C LANGUAGE

#include < stdio.h>
#include < conio.h>
#include < malloc.h>
#include < process.h>
#include < ctype.h>

#define SIZE 5

void menu();
void display();
int underflow();
int overflow();
void enqueue(int);
void dequeue();

int cqueue[SIZE];
int front=-1;
int rear=-1;

void main()
{
clrscr();
menu();
}

void menu()
{
int choice,item;
printf("MENU");
printf("\n1. Insert into the queue");
printf("\n2. Delete from queue");
printf("\n3. Display");
printf("\n4. Exit");
printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
clrscr();
if(overflow()==0)
{
printf("\nEnter the item tobe inserted: ");
scanf("%d",&item);
enqueue(item);
clrscr();
printf("\nAfter inserting queue is:\n");
}
display();
getch();
clrscr();
menu();
break;
case 2:
clrscr();
if(underflow()==1)
{
dequeue();
if(underflow()==1)
{
printf("\nAfter deletion queue is:\n");
display();
}
}
getch();
clrscr();
menu();
break;
case 3:
clrscr();
if(underflow()==1)
{
printf("The queue is:\n");
display();
}
getch();
clrscr();
menu();
break;
case 4:
exit(1);
default:
clrscr();
printf("Your choice is wrong\n\n");
menu();
}
}

int underflow()
{
if((front==-1)&&(rear==-1))
{
printf("\nQueue is empty");
return(0);
}
else
{
return(1);
}
}

int overflow()
{
if(((front==0)&&(rear==SIZE-1))||(front==rear+1))
{
printf("\nQueue is full\n");
return(1);
}
else
{
return(0);
}
}
void enqueue(int item)
{
if((front==-1)&&(rear==-1))
{
front=0;
rear=0;
}
else if(rear==SIZE-1)
{
rear=0;
}
else
{
rear=rear+1;
}
cqueue[rear]=item;
}

void dequeue()
{
if(front==rear)
{
front=-1;
rear=-1;
}
else if(front==SIZE-1)
{
front=0;
}
else
{
front=front+1;
}
}

void display()
{
int i;
if(front<=rear)
{
for(i=front;i<=rear;i++)
{
printf("\nElement %d : %d",i+1,cqueue[i]);
}
}
else
{
for(i=front;i<=SIZE-1;i++)
{
printf("\nElement %d : %d",i+1,cqueue[i]);
}
for(i=0;i<=rear;i++)
{
printf("\nElement %d : %d",i+1,cqueue[i]);
}
}
}
