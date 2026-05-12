#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDWR);
    if (fd == -1)
    {
        printf("Enable to open the file");
    }
    else{
        printf("file gets opend with fd: %d\n",fd);
    }
    
    close(fd);
    return 0;
}