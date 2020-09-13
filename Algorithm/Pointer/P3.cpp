
#include <stdio.h>
int main() {
    int p=7;
    int *ptr1, *ptr2;
    ptr1 = &p;
    printf("%d\n", ptr1);
    int b = 124;
    ptr2 = &b;
    *ptr1 = b;
    printf("%d\n", *ptr1);
    printf("%d\n", ptr1);
}

