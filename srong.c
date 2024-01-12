#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


int sn(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

void sir(int start, int end) {
    printf("Strong numbers between %d and %d are:\n", start, end);
	int i = start;
    for (i; i <= end; i++) {
        if (sn(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    sir(start, end);

    return 0;
}
