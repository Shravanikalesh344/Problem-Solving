// Problem Statemet : Accept Any 2 values from user and perform the addition 


// Step 1 : Understand the problem statement .
// Conclusion : We have to accept two integrs and perform it's addition .

// Step 2 : Write the algorithm 

/*
    START 
        Accept first number form user and store it into no1 
        Accept first number form user and store it into no2
        Create one variable to store the result named as Ans
        Perform Addition of no1 and no2 , store the result in ans
        Display the result from Ans to the user  
    STOP 
*/

// Decide the programming language (C/C++/Java/Python)
// We Select C Programming 

// Step 4 : Write a program  

#include<stdio.h>

int main()
{

    int i,j,k;
    printf("Enter first number :\n");
    scanf("%d",&i);
    printf("Enter second number : \n");
    scanf("%d",&j);

    k = i + j;

    printf("Addition is : %d\n",k);


    return 0;
}