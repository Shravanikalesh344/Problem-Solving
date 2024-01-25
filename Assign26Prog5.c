#include<stdio.h>



void Reverse(char *str)
{
   int iCnt = 0;
   while(str[iCnt] != '\0')
   {
      iCnt++;
   }
   int iStart = 0;
   int iLength  = iCnt -1;
   
   while(iStart < iLength)
   {
      char temp = str[iStart];
      str[iStart] = str[iLength];
      str[iLength]= temp;

      iStart++;
      iLength--;
   }

   printf("%s",str);

}


int main()
{
    char arr[20];
   

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}