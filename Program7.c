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

// Additon is a function which accepts 2 parameters as integers and it returns and return integer

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Addition 
// Description :    It is used to perform addition of two integers 
// Input Arguments : Integer , Integer 
// Output :         Integer 
// Author :         Shravani Manisha Manoj Kaleshwarkar
// Date :           25/09/2023  (Update : 02/10/2023)
//////////////////////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1 , int iNo2) 
{
    int iSum = 0;           // Variable to store the value of addition 

    iSum = iNo1 + iNo2 ;

    return iSum;    
}

//////////////////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function of an application which performs 2 Addition of 2 Integers
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

   auto int iValue1 = 0;    // Variable to store first input 
   auto int iValue2 = 0;    // Variable to store second input
   auto int iAns = 0;       // Variable to store result 
    printf("Enter first number :\n");
    scanf("%d",&iValue1);
    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1, iValue2);  // Function Call to perform addition 

    printf("Addition is : %d\n",iAns);


    return 0;
}


// Step 5 : Test the code 

/*
    Test Case 1 : 
    Input : 10  11 
    Output : 21

    Test Case 2 : 
    Input : 10  0 
    Output : 10


    Test Case 3 : 
    Input : 12 -6  
    Output : 6


    Test Case 4 : 
    Input : -6 -5 
    Output : 11


*/