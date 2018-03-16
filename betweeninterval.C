#include<stdio.h>
int main()
{
int n,low,high,i;
printf("enter the 2 numbers:");
scanf("%d%d",&low,&high);
printf("\nenter a number:");
scanf("%d",&n);
if(n>=low && n<=high)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
