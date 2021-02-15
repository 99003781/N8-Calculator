#include<stdio.h>
#include<math.h>

float degree,radian;
const float pi =3.14159;
int input =0;



/*----------------function 1-------------------- */


int get_user_choice()
{
int selected_choice; 
scanf("%d",&selected_choice);
return(selected_choice);
}

/*----------------function 2-------------------- */

int Check_selected_value(int input)
{
while(!((input>=1)&&(input<=3)))
input=get_user_choice();
}

/*----------------function 3-------------------- */

int Check_selected_valuexx(int input)
{
while(!((input>=1)&&(input<=6)))
input=get_user_choice();
}


/*----------------function 3-------------------- */

float Degree_to_Radian()
{
	int Choose_Identity1,Check_Identity1;
	
		printf("\nChoose Identity for Performing Function:");
		printf("\n 1- sin");
		printf("\n 2- cos");
		printf("\n 3- tan");
		printf("\n 4- cosec");
		printf("\n 5- sec");
		printf("\n 6- cot");
		printf("\n\t");
			
		Choose_Identity1 = get_user_choice();

			Check_Identity1 = Check_selected_valuexx(Choose_Identity1);
				printf("\n");
		
		printf("\nEnter the value of angle: ");
		scanf(" %f",&degree);

			//Choose_Identity1 = get_user_choice();

			//Check_Identity1 = Check_selected_value(Choose_Identity1);

				if(Check_Identity1==1)
				{
				radian = degree*(pi/180.0);
				printf("\nsin(%f) = sin(%f)",degree,sin(radian));
				}

				else if(Check_Identity1==2)
				{
				radian = degree*(pi/180.0);
				printf("\ncos(%f) = cos(%f)",degree,cos(radian));
				}

				else if(Check_Identity1==3)
				{
				radian = degree*(pi/180.0);
				printf("\ntan(%f) = tan(%f)",degree,tan(radian));
				}

				else if(Check_Identity1==4)
				{
				radian = degree*(pi/180.0);
				printf("\ncosec(%f) = cosec(%f)",degree,1/sin(radian));
				}

				else if(Check_Identity1==5)
				{
				radian = degree*(pi/180.0);
				printf("\nsec(%f) = sec(%f)",degree,1/cos(radian));
				}

				else if(Check_Identity1==6)
				{
				radian = degree*(pi/180.0);
				printf("\ncot(%f) = cot(%f)",degree,1/tan(radian));
				}

}

/*----------------function 4-------------------- */


float Radian_to_Degree()
{
	int Choose_Identity2,Check_Identity2;
	
		printf("\nChoose Identity for Performing Function:");
		printf("\n 1- sin");
		printf("\n 2- cos");
		printf("\n 3- tan");
		printf("\n 4- cosec");
		printf("\n 5- sec");
		printf("\n 6- cot");
		printf("\n\t");
		Choose_Identity2 = get_user_choice();

			Check_Identity2 = Check_selected_valuexx(Choose_Identity2);
			printf("\n");
		
		printf("\nEnter the value of angle: ");
		scanf("%f",&radian);

			//Choose_Identity2 = get_user_choice();

			//Check_Identity2 = Check_selected_value(Choose_Identity2);

				if(Check_Identity2==1)
				{
				degree = radian/(pi/180.0);
				printf("\nsin(%f) = sin(%f)",sin(radian),degree);
				}

				else if(Check_Identity2==2)
				{
				degree = radian/(pi/180.0);
				printf("\ncos(%f) = cos(%f)",cos(radian),degree);
				}

				else if(Check_Identity2==3)
				{
				degree = radian/(pi/180.0);
				printf("\ntan(%f) = tan(%f)",tan(radian),degree);
				}

				else if(Check_Identity2==4)
				{
				degree = radian/(pi/180.0);
				printf("\ncosec(%f) = cosec(%f)",1/sin(radian),degree);
				}

				else if(Check_Identity2==5)
				{
				degree = radian/(pi/180.0);
				printf("\nsec(%f) = sec(%f)",1/cos(radian),degree);
				}

				else if(Check_Identity2==6)
				{
				degree = radian/(pi/180.0);
				printf("\ncot(%f) = cot(%f)",1/tan(radian),degree);
				}

}


	int main()
	{
            int value;
		printf("Choose the conversion method:");
		printf("\n 	1 - Degree to Radian");
		printf("\n 	2 - Radian to Degree");
		printf("\n 	3 - Exit");
		printf("\n\t");
        
		input = get_user_choice();

		value = Check_selected_value(input);
		
			if(value==1)
			{
			Degree_to_Radian();

			}
			else if(value==2)
			{
			Radian_to_Degree();

			}
			else if(value==3)
			{
			printf("GET LOST");
			}
   return 0;
	}

