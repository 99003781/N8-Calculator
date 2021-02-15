#include <math.h>
#include <stdio.h>
int bintooct(long long b);
int main() 
{
    long long b;
    printf("Enter a binary number: ");
    scanf("%lld", &b);
    printf("%lld in binary = %d in octal", b, bintooct(b));
    return 0;
}

int bintooct(long long b) 
{
    int o = 0, d = 0, t = 0;

    // converting binary to decimal
    
    while (b != 0) 
    {
        d += (b % 10) * pow(2, t);
        ++d;
        b /= 10;
    }
    t = 1;
     // converting to decimal to octal
    
    while (d != 0) 
    {
        o += (d % 8) * t;
        d /= 8;
        t *= 10;
    }
    return o;
}
