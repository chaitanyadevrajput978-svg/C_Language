#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0, digit;
    int digits = countDigits(num);

    while (num > 0) {
        digit = num % 10;
        sum += power(digit, digits);  // FIXED
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int n;
    printf("Armstrong numbers between 1 and 100 are:\n");

    for (n = 1; n <= 100; n++) {
        if (isArmstrong(n))
            printf("%d ", n);
    }

    return 0;
}

   
