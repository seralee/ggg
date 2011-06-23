#include<stdio.h>

int print_7_n(int n,int m)
{
printf("%d*%d=%d\n",n,m,m*n);
}

int main()
{
int n,m;
scanf("%d %d",&n,&m);
print_7_n(m,n);

return 0;

}

