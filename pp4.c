#include<stdio.h>

int main()
{
int n,i,f;
printf("enter the number");
scanf("%d",&n);
for(i=1,f=1;i<=n;i++)
{
f=f*i;
}

printf("the factorial number %d is %d",n,f);


}
