#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Arr[50] = {'\0'};
    int fd = 0;

    printf("Enter the file name you want to create :");
    scanf("%s",Arr);

    fd = creat(Arr , 0777);

    if(fd == -1)
    {
        printf("Unable to create the file :");
    } 
    else 
    {
        printf("File is Successfully created");
    }

    return 0;
}