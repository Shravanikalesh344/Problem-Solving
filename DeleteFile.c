#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
   unlink("Marvellous.txt");

   printf("File Deleted Successfully ...\n");
    return 0;

   
}


// O_RDONLY - READ
// O_WRONLY - WRIte
// O_RDWR - read + write 