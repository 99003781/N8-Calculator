#include <stdio.h>
#include <math.h>
long octtodec(int oct);
int main()
{
    int oct;
    printf("Enter an octal number: ");
    scanf("%d", &oct);
    printf("%d oct  = %ld decimal", oct, octtodec(oct));
    return 0;
}
//Conversion of octal to decimal
long octtodec (int oct)
{
    int dec = 0, d = 0;
    while(oct != 0)
    {
        dec += (oct%10) * pow(8,d);
        ++d;
        oct/=10;
    }
    d = 1; 
 return dec;
}
