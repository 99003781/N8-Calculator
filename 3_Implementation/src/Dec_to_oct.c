/*#include <stdio.h>
#include <math.h>

int Dectooct(int dec);
int main()
{
    int dec;

    printf("decimal num = ");
    scanf("%d", &dec);

    printf("%d in dec = %d in oct", dec, Dectooct(dec));

    return 0;
}*/

#include "Dec_to_oct.h"
int Dectooct(int dec)
{
    int oct = 0, i = 1;

    while (dec != 0)
    {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }

    return oct;
}
