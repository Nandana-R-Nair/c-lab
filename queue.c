#include<stdio.h>
int main()
{
int i,a[30],front=0,rear=0,ch,item;
do
{
printf("\n enter the choice\n");
printf("\n1.insertion\t 2.deletion\t 3.display\t4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter the elements");
 scanf("%d",&item);
 if(rear!=30)
 {
 a[rear]=item;
 rear++;
 }
 if(rear==30)
 printf("array is full");
 break;

case 2:if(front!=30)
 front++;
 if(front==30)
 printf("Queue is empty");
 break;
case 3: for(i=front;i<rear;i++)
 printf("%d\t",a[i]);
 break;
case 4: printf("exiting");
 break;
default:printf("wrong choice");
}
}while(ch!=4);
return 0;
}