#include <stdio.h>
int countWay( int n ) {
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return 0;
    }
    return countWay( n - 1 ) + countWay( n-2 );
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count = countWay(n);
    printf("Number of ways: %d\n", count);
    return 0;
}