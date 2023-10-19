#include <stdio.h>

int summation(int n) {
    if (n == 1) {
        return 1;  
    } else {
        return n + summation(n - 1);  
    }
}

int main() {
    int n;
    double sum = 0.0;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("n must be a non-negative integer.\n");
    } else {
       
        sum = summation(n);

        
        printf("Sum of the first %d natural numbers is: %.2f\n", n, sum);
    }

    return 0;
}
