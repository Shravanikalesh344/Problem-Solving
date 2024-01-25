#include<stdio.h>

int CArea(float r ,float PI)
{
    float carea = 0.0f;
    printf("Enter the radius of circle:\n");
    scanf("%f\n",&r);

    carea= PI * r * r ;
    


    return carea;

}

int SArea(int s)
{
    int sarea = 0;
    printf("Enter the side of a square");
    scanf("%d\n",&s);

    sarea = s * s;
   
    return sarea;

}
int main()
{
    float Radius = 0.0f;
    const float PI = 3.14f;
    float CircleArea=0.0f;

   
    int side = 0;
    int SquareArea = 0;
    
   
    int ch =0;

    printf("1-Area of Circle\n2-Area of Square\n");
    printf("Enter your Chocie\n");
    scanf("%d\n",&ch);

    
    switch(ch)
    {

        case 1 :
            
            printf("Area is %f\n",CircleArea);
            CircleArea = CArea(Radius,PI);

            
            break;

        case 2 :
 
            SquareArea = SArea(side);

            printf("Area of Square is :%d\n",SquareArea);

            break;

        default :
            printf("Default Case ");
    }
   
    return 0;
}