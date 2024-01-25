#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Arr[] = "PRE-PLACEMENT ACITIVITY";
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);
    
    Ret = write(fd,Arr,strlen(Arr)); //(Kashat lihayhaca , kai lihaycha , kiti lihaycha)
    //strlen(Arr)

    printf("%d bytes gets written in the file\n",Ret);

     close(fd);
    return 0;

   
}


// O_RDONLY - READ
// O_WRONLY - WRIte
// O_RDWR - read + write 