WRITE A PROGRAM TO IMPLEMENT STACK USING LINKED LIST USING C LANGUAGE
#include<stdio.h>
struct stack
{
int info;
struct stack *next;
};
typedef struct stack node;
class stlink
{
node *start;
public:
stlink()
{
start=NULL;
}
void display(void);
void push(int);
int pop(void);
};
void stlink::push(int term)
{
node *p,*s;
s=start;
if(s==NULL||s!=NULL)
{
p=(node *)malloc(sizeof(node));
p->info=term;
p->next=s;
s=p;
}
start=s;
return;
}
void stlink::display(void)
{
node *temp;
if(start==NULL)
{
cout << endl<<"UNDERFLOEW";
}
temp=start;
while(temp!=NULL)
{
cout << endltemp=temp->next;
}
return;
}
int stlink::pop(void)
{
int term;
if(start==NULL)
{
cout<<"UNDERFLOW";
return(-1);
}
else
{
node *p;
term=start->info;
p=start;
free(start);
start=p->next;
return(term);
}
}
int main()
{
stlink s1;
int ch,temp;
do
{
clrscr();
cout<<"1->Push\n";
cout<<"2->Display\n";
cout<<"3->Pop\n";
cout<<"4->Exit\n";
cout<<"Enter your choice:";
cin>>ch;
switch(ch)
{
case'1':
cout<<"Enter the term to push:";
cin>>temp;
s1.push(temp);
break;
case'2':
cout << endl<<"Stack";
s1.display();
getch();
break;
case'3':
temp=s1.pop();
if(temp!=-1)
cout<<"Popped term is " << temp;
getch();
break;
case'4':
cout<<"Exiting";
getch();
break;
default:
cout<<"Invalid choice";
getch();
break;
}
}while(ch!=4);
return(0);
} 
s
