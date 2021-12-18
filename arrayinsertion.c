#include<stdio.h>
#include<conio.h>
void main()
{
 int ar[25],m,i, pos, num;

 printf("Enter the size of the array \n");
 scanf("%d",&m);
 printf("Enter the array \n");
 for (i=0;i<m;i++)
 {
     scanf("%d",&ar[i]);
 }
 printf("Enter the number to be inserted");
 scanf("%d",&num);
 printf("Enter the position to be inserted");
 scanf("%d",&pos);
 for (i=m-1;i>=pos-1;i--)
 {
     ar[i+1]=ar[i];
 }
     ar[pos-1]=num;
     m++;

 for (i=0;i<m;i++)
 {
     printf("%d \t", ar[i]);
 }
getch();
}
