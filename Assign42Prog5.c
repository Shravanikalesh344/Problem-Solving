#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


void DisplayN(char FName[],int iSize)
{
    int fd = 0;
    char Arr[100] = {'\0'} ;
    int iRet = 0;
    int iCnt = 0;
    char ch;
   

    fd = open(FName , O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file .\n");
    }
    else 
    {
        printf("%s file is opened with file discriptor %d\n",FName,fd);

        iRet = read(fd,Arr,iSize);

        printf("\n%d Characters Read From File :",iRet);

        printf("\nData from the file is : %s\n",Arr);
          
          close(fd);  

    }
  

}

int main()
{
    char FileName[30];
    int iCount = 0;

    printf("Enter the File Name :");
    scanf("%s",FileName);

    printf("Enter the number of characters:\n");
    scanf("%d",&iCount);

    DisplayN(FileName,iCount);
  
   return 0;
}