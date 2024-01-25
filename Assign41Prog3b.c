#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>



int main()
{   
    char Arr[50] = {'\0'};
    int fd = 0;
    char Arr1[] = {'\0'};

    printf("Enter the file name you in which want to write :");
    scanf("%s",Arr);

    fd= open(Arr,O_RDONLY);

    int iRet = read(fd,Arr1,24);

    if(fd == -1)
    {
        printf("Unable to read the file");
    }
    else
    {
        printf("File  gets read Successfully with  %d bytes\n",iRet);      
        printf("%s\n",Arr1);
    }

    return 0;
}