#include <stdio.h>
int fibonaci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonaci(n - 1) + fibonaci(n - 2);
}
int main(void) {
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("input ko hop le");
        return 0;
    }
    for (int i = n-1; i > 0; i--) {
        printf("%d ", fibonaci(i));
    }
    return 0;
}

