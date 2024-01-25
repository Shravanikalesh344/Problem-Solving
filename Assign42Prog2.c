#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define BUFFERSIZE 1024

int CountSmall(char FName[])
{
    int fd = 0;
    char Arr[1024] = {'\0'};
    int iRet = 0;
    int i = 0;
    int iCnt = 0;

    fd = open(FName , O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file .\n");
    }
    else 
    {
        printf("%s file is opened with file discriptor %d\n",FName,fd);

         while(iRet = read(fd,Arr,sizeof(Arr)!= 0))
         {
              for(i = 0 ; i < iRet ; i++)
              {
                    if((Arr[i] >= 'a')&&(Arr[i]<= 'z'))
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


    printf("Enter the File Name :");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);
    printf("Number of Small Characters Are  %d\n",iRet);

   

    return 0;
}