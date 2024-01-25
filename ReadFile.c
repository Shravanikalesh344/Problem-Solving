#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Arr[20] ;
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);
    
    Ret = read(fd,Arr,10); //(Kashatun vachaycha , kashyat vachaycha , kiti vachaycha)
    //strlen(Arr)

    printf("%d bytes gets read in the file\n",Ret);
    printf("Data is : %s\n",Arr);

     close(fd);
    return 0;

   
}


// O_RDONLY - READ
// O_WRONLY - WRIte
// O_RDWR - read + write 