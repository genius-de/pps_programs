#include <stdio.h>

double factorial(int n);

int main() {
    int n;

    
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

        double result = factorial(n);
        printf("Factorial of %d = %f\n", n, result);
    return 0;
}

double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;  
    } else 
        return (double)n * factorial(n - 1);  
}
