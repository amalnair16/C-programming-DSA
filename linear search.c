#include<stdio.h>
#include<conio.h>
void main()
{
int a[25],n, i,z,flag=0;
printf("Enter the size of the array");
scanf("%d",&n);
printf("Enter the array ");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number to be searched");
scanf("%d",&z);
for(i=0;i<n;i++)
{
if (a[i]==z)
{
printf("Number found ..... :) \n");
printf("Position : %d", i+1);
flag=1;
break;
}
}
if (flag==0)
{
printf("Nummber not found .... :(");
}
getch();
}
