include<stdio.h>
#include<conio.h>
void  main()
{
int i,j,b;
int a[100];
clrscr();
printf("Enter the number");
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
if(a[i]==a[j])
{
printf("%d",a[i]);
}
}
}
getch();
}
