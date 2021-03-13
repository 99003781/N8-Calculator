


/*#include <math.h>
#include <stdio.h>
int bintodec(long long num);
int main() 
{
    long long num;
    scanf("%lld", &num);
    printf(" %lld = %d in decimal", num, bintodec(num));
    return 0;
}
*/

#include"Bin_to_dec.h" 

int bintodec(long long num) 
{
    int decimal_num = 0, inp = 0, res;

    while (num != 0) 
    {
        res = num % 10;
        num /= 10;
        decimal_num +=  res* pow(2, inp);
        ++inp;
    }
    return decimal_num;
}
