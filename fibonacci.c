#include <stdio.h>

int fibonacci_iterative(int n) {
    if (n <= 0) {
        return -1; // Некоректне значення
    } else if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    
    int a = 0, b = 1, next;
    for (int i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    printf("Введіть номер числа Фібоначчі: ");
    scanf("%d", &n);
    
    int result = fibonacci_iterative(n);
    if (result == -1) {
        printf("Некоректне значення\n");
    } else {
        printf("%d-е число Фібоначчі: %d\n", n, result);
    }

    return 0;
}

