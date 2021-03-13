#include "area.h"


int rect_area(int length,int width)
{
    int areaR=0;

//Calculate the area of rectangle using below formula

    areaR=length*width;
  
    return areaR;
}


int square_area(int length)
{
    int areaS=0;

    //Calculate the area of square using below formula
    areaS=length*length;
 
   return areaS;
}

int triangle_area(int length,int width)
{
    int areaT=0; 

    //Calculate the area of triangle using below formula

    areaT=0.5*length*width; 
    //printf("Area of triangle : %d\n", area3);
    return areaT;

}

int circum_area(double radius)
 {
   double PIE = 3.141;
   double areaC = 0;
   areaC = PIE * radius * radius;
//    printf("Area of circle : %0.4f\n", areaC);
   return areaC;
}

