#include <stdio.h>

int rev(int n, int c)
{
    if(n==0) return c;
    c = c*10 + n%10;
    return rev(n/10, c);
}

int main()
{
    int n, r;
    scanf("%d", &n);
    r = rev(n, 0);
    printf("%d\n", r);
    return 0;
}
