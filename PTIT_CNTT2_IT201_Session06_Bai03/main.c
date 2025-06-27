#include <stdio.h>
int recursion(int n) {
    if (n == 0) {
        return 0;
    }
    int result = n % 10 + recursion(n / 10);
    return result;
}
int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = recursion(n);
    printf("The recursion of %d is %d\n", n, result);
    return 0;
}