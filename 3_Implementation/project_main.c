#include <calculator_operations.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

float gcd(float a, float b)
if (b==0)
return a;
else
return gcd(b, a%b);
int main()
{

    while(1) 
    {
        char oper, decision;
        float num1, num2, den1, den2;
        printf("\nEnter the first number: ");
        scanf("%f %f", &num1, &den1);

        printf("\nEnter the operator: ");
        scanf("%c", &oper) ;

        printf("\nEnter second number: ");
        scanf("%f %f", &num2, &den2);

        if(oper == '+') 
        {
            float addNum = num1*den2 + num2*den1;
            float addDen = den1*den2;
            if(addDen == 0) 
            {
                printf("Please put valid input\n");
            }
            else if(addNum == 0) 
            {
                printf("0\n");
            }
            else 
            {
                float gcd = gcd(addNum, addDen); 
				printf("%f / %f \n", addNum/gcd, subDen/gcd);
				// __fpurge(stdin);
				getchar();
				break
            }
        }
        else if(oper == '-') {
            float subNum = num1*den2 - num2*den1;
            float subDen = den1*den2;
            if(subDen == 0) 
            {
                printf("Please put valid input\n");
            }
            else if(subNum == 0) 
            {
                printf("0\n");
            }
            else 
            {
                float gcd = gcd(subNum, subDen);
				printf("%f / %f \n", subNum/gcd, subden/gcd);
				// __fpurge(stdin);
				getchar();
				break;
            }
        }
        else if(oper == '*') 
        {
            float mulNum = num1*den2;
            float mulDen = den1*num2;
            if(mulDen == 0) 
            {
                printf("Please put valid input\n");
            }
            else if(mulNum == 0) 
            {
                printf("0\n");
            }
            else 
            {
                float gcd = gcd(mulNumerator, mulDenominator);
                printf("%f / %f \n", mulNum/gcd, mulDen/gcd);
				// __fpurge(stdin);
				getchar();
				break;
            }
        }
        else if(oper=='/') 
        {
            float divNum = num1*den1;
            float divDen = den2*num2;
            if(divDen == 0) 
            {
                printf("Please put valid input\n");
            }
            else if(divNum == 0) 
            {
                printf("0\n");
            }
            else 
            {
                float gcd = gcd(divNumerator, divDenominator);
                printf("%f / %f \n", divNum/gcd, divDen/gcd);
				// __fpurge(stdin);
				getchar();
				break;
            }
        }
		else if (oper=='%') 
        {
		    printf("Percentage is %f", ((Num1/Den1)/(Num2/Den2)*100)
		// __fpurge(stdin);
		getchar();
		break;
		}
        printf("Do you want to continue?");
        scanf("%c",decision);
        if(decision == 'n') 
        {
            break;
        }
    }
    return 0;
}
