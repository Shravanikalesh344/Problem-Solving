#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>



int main()
{   
    char Arr[50] = {'\0'};
    int fd = 0;
    char Arr1[] = "Display all Data Of File";

    printf("Enter the file name you in which want to write :");
    scanf("%s",Arr);

    fd= open(Arr,O_RDWR);

    int iRet = write(fd,Arr1,24);

    if(fd == -1)
    {
        printf("Unable to write the file");
    }
    else
    {
        printf(" %s File  gets writen Successfully with  %d bytes :\n",Arr,iRet);
    }

    return 0;
}