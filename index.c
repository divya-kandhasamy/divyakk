#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[10];
printf("Enter the limit");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==i)
printf("%d is in index %d",a[i],i);
}
getch();
}
