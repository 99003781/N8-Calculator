#include <math.h>
#include <stdio.h>
long dectobin(int num);
int main() {
    int num;
    scanf("%d", &num);
    printf("%d in decimal = %lld in binary", num, dectobin(num));
    return 0;
}

long dectobin(int num) {
    long  binary = 0;
    int reminder, i = 1; //step = 1;
    while (num != 0) 
    {
        reminder = num % 2;
       //printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rem, n / 2);
        num /= 2;
        binary += reminder * i;
        i *= 10;
    }
    return binary;
}
