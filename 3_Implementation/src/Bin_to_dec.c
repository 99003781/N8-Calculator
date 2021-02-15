#include <math.h>
#include <stdio.h>
int bintodec(long long n);
int main() {
    long long num;
    printf("Enter a binary number: ");
    scanf("%lld", &num);
    printf("%lld in binary = %d in decimal", num, bintodec(num));
    return 0;
}

int bintodec(long long num) {
    int dec = 0, d = 0, res;
    while (num != 0) {
        res = num % 10;
        num /= 10;
        dec += res * pow(2, d);
        ++d;
    }
    return dec;
}
