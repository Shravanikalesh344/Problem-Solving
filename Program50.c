//Reverse Numbeer

#include<stdio.h>
#include<stdbool.h>


bool CheckPalindrome(int iNo)
{
    int iCopy = iNo;       //Xerox Kadhli
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
    iDigit = iNo % 10;
    iNo = iNo / 10;
    iRev = (iRev * 10)+ iDigit;
    }
    
   if(iRev == iCopy)
    {
      return true;
    }
    else
     {
       return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
         printf("%d is a Palindrome Number \n",iValue);
    }
    else
    {
         printf("%d is not a Palindrome Number\n",iValue);
    }

   
    return 0;
}