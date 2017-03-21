#include<stdio.h>
int main()
{
int a,n,r,rev=0;

printf("enter the number");
scanf("%d",&a);
n=a;
while(a!=0)
{
r=a%10;
a=a/10;
rev=(rev*10)+r;
}
if(n==rev)
printf(" %d palindrome",n);
else
printf("%d not a palindrome",n);
return 0;
}
