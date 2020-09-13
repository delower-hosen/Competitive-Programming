
#include <stdio.h>
int main() {
    int p=7;
    int *ptr;
    ptr = &p;
    *ptr = *ptr + 1;
    printf("%d\n", ptr);
    printf("%d\n",p);
    printf("%d\n", *ptr);
    return 0;
}

