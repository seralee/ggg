#include <stdio.h>

int print_n_m(int n, int m)
{
 printf("%d * %d = %d\n", n, m, n*m);
}

int main()
{
 int n;
 int i;
 scanf("%d", &n);
 for(i=1;i<10;i++)
  print_n_m(n,i);
 return 0;
}

