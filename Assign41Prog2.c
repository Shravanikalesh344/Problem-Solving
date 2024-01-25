#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{   
    char Arr[50] = {'\0'};
    int fd = 0;

    printf("Enter the file name you want to open :");
    scanf("%s",Arr);

    fd = open(Arr,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file");
    }
    else
    {
        printf(" %s File is Successfully opened with file discriptor %d :\n",Arr,fd);
    }

    return 0;
}