#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>



int main()
{   
    char Arr[50] = {'\0'};
    int fd = 0;
    char Arr1[] = {'\0'};
    int iRet = 0;
    int iSize = 0;

    printf("Enter the file name you in which want to write :");
    scanf("%s",Arr);

    fd= open(Arr,O_RDONLY);

   if(fd == -1)
    {
        printf("Unable to read the file");
    }
    else
    {
        printf("File  gets opened Successfully with file Discriptor \n",fd);      
        
       while((iRet =read(fd,Arr1,sizeof(Arr)!= 0)))
       {
            iSize = iSize + iRet;
       }
       printf("File Contains %d bytes in it\n",iSize);

        
    }

    return 0;
}