#include <stdio.h>

int print_n_m(int n, int m)
{
 printf("%d * %d = %d\n", n, m, n*m);
}

int main()
{
 int n;
 int m;
 scanf("%d %d", &n, &m);
 print_n_m(n, m);
 return 0;
}









