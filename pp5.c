#include<stdio.h>
int main()
{
int n,i,p;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=16;i++)
{
p=i*n;

printf("%d x%d=%d\n",i,n,p);
}
return 0;
}
