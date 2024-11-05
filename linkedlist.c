#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
int main()
{
struct node* newnode;
struct node* current;
struct node* head=NULL;
int i,n;
printf("enter the size of the linkedlist");
scanf("%d",&n);
for(i=0;i<n;i++)
{
newnode = (struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next = NULL;
if(head==NULL)
{
head=newnode;
current=newnode;
}
else
{
current->next=newnode;
current=newnode;
}
}
printf("linked list");
for(current=head;current!=NULL;current=current->next)
{
printf("%d",current->data);
}
return 0;
}



