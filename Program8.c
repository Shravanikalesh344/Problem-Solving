// Problem Statement : Accept Radius from user and calculate the area of circle.

//Step 1  : Understand the problem statement 
// We are going to use the formula as PI * R* R 

//Step 2 : Write the algorithm .
/* START 
    Accept radius from user and store it into RADIUS 
    Create variable as PI and store value 3.14 
    Calculate the area as PI * RADIUS * RADIUS 
    Display the value of Area to the user
    STOP 

*/

//////////////////////////////////////////////////////////////////////
// Function Name :      CalculateArea
// Description :        It is used to calculate area of circle
// Input :              Float
// Output :             Float
// Author Name :        Shravani Manoj Kaleshwarkar
// Date :               02/10/2023
//////////////////////////////////////////////////////////////////////



#include<stdio.h>

#define PI 3.14 

float CalculateArea(float Radius)
{
     //const float PI = 3.14f;
     float fCarea = 0.0f;
    fCarea = PI * Radius * Radius;
    return fCarea;
}

//////////////////////////////////////////////////////////////////////

// Entry Point Function 

//////////////////////////////////////////////////////////////////////

int main()
{

     float fRadius = 0.0f;
     float fCircleArea = 0.0f;
    printf("Enter the radius of a circle\n");
    scanf("%f",&fRadius);
    fCircleArea = CalculateArea(fRadius);
    printf("Area of circle is :  %f\n",fCircleArea);

    return 0;

}