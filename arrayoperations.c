#include<stdio.h>
#include<stdlib.h>
void insert(int a[],int size);
void deleteElement(int a[],int size);
void search(int a[],int size);
void sort(int a[],int size);
void display(int a[],int size);
int main()
{
int size,a[50],i,ch;
printf("enter the size of the array: ");
scanf("%d",&size);
printf("enter the elements of the array: ");
for(i=0;i<size;i++);
{
scanf("%d",&a[i]);
}
while(1)
{
printf("enter your choice: 1.insert\n2.deleteElement\n3.search\n4.sort\n5.display\n6exit");
scanf("%d",&ch);
switch(ch)
{
case 1: insert(a,size);
        break;
case 2: deleteElement(a,size);
        break;
case 3: search(a,size);
        break;
case 4: sort(a,size);
        break;
case 5: display(a,size);
        break;
case 6: return 0;
default: printf("invalid choice");
}
}
}
void insert(int a[],int size)
{
int ins,i,pos;
printf("enter the element to be inserted: ");
scanf("%d",&ins);
printf("enter the position of the element: ");
scanf("%d",&pos);
for(i=size;i>=pos;i--)
{
a[i]=a[i-1];
}
a[pos-1]=ins;
size++;
}
void deleteElement(int a[],int size)
{
int del,i,pos;
printf("enter the element to be deleted: ");
scanf("%d",&del);
for(i=pos-1;i<size-1;i++)
{
a[i-1]=a[i];
}
}
void search(int a[],int size)
{
int ele,i;
printf("enter the element to be searched: ");
scanf("%d",&ele);
for(i=0;i<size;i++)
{
if(a[i]==ele)
{
printf("element found at %d",i);
}
if(a[i]==size)
{
printf("element is not found");
}
}
}
void sort(int a[],int size)
{
int i,j,temp;
for(i=0;i<size-1;i++)
{
for(j=0;j<size-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
void display(int a[],int size)
{
int i;
printf("the array elements are: ");
for(i=0;i<size;i++)
{
printf("%d",a[i]);
}
}




