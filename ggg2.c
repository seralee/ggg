#include<stdio.h>

int print__n(int n, int i)
{
printf("%d*%d=%d\n",n,i,n*i);
}
int print_9_n(int n)
{
int i;
for(i=1;i<10;i++)
print__n(n,i);
}

int main()
{
int n;
scanf("%d",&n);
print_9_n(n);
return 0;
}
