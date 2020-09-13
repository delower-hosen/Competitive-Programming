#include<bits/stdc++.h>
using namespace std;
int main() {
    int p=7;
    int *ptr;
    ptr = &p;
    printf("%d\n", ptr);
    *ptr = 13;
    printf("%d\n", ptr);
    printf("%d\n",p);
    printf("%d\n", *ptr);
    return 0;
}
