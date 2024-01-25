#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char FileName[50];
    char Str[] = "Hello World";

    int fd = 0;
    int iRet = 0;

    printf("Enter the file you want to write in :");
    scanf("%s",FileName);

    fd= open(FileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file");
    }
    else 
    {
        printf("%s file is opened with %d FD :\n",FileName,fd);

        iRet = write(fd,Str,11);

        printf("%d bytes are written at the end of the file",iRet);

        close(fd);

    }

    return 0;
}