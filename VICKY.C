#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={0},c[10]={0},i=0,b=0,temp=0,j=0,n=0,l=0;
clrscr();
printf("enter the array ele\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=0;i<10;i++)
c[i]=a[i];
for(i=0;i<10;i++)
printf("pos=%d ele=%d\n",i+1,a[i]);
for(i=0;i<10;i++)
for(j=0;j<10;j++)
{ if(a[j]>a[i])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
}
for(i=0;i<10;i++)
{
if(a[i]!=c[i])
{ printf("Enter only sorted array\n");
 n=1;
 break;
}
}
switch(n)
{
 case 1:for(i==0;i<10;i++)
	scanf("%d",&a[i]);
	break;
 default: printf("it is sorted\n");
 }
for(i=0;i<10;i++)
printf("%d\t",a[i]);
printf("Enter the element to be searched");
scanf("%d",&b);
for(i=0;i<10;i++)
{
if(b==a[i])
printf("pos=%d ",i+1);
}
getch();
}