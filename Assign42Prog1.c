#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define BUFFERSIZE 1024

int CountCapital(char FName[])
{
    int fd = 0;
    int iRet = 0;
    int i = 0;
    int iCnt = 0;

    char Arr[1024] = {'\0'};

    fd = open(FName , O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file .\n");
    }
    else 
    {
        printf("%s file is opened with file descriptor %d\n",FName,fd);

         while(iRet = read(fd,Arr,sizeof(Arr)!= 0))
         {
              for(i = 0 ; i < iRet ; i++)
              {
                    if((Arr[i] >= 'A')&&(Arr[i]<= 'Z'))
                    {
                        iCnt++;
                    }
              }  
         }
         close(fd);
    }


    return iCnt;
   
}

int main()
{
    char FileName[30];

    int iRet = 0;

    printf("Enter File Name :\n");
    scanf("%s",FileName);

    iRet = CountCapital(FileName);
    printf("Number of Capital Letters are %d\n",iRet);

    return 0;
}