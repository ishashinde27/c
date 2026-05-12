#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
    int fd = 0;
    int Ret = 0;;
    char Arr[] = "marvellous Infosystems";
    fd = open("Marvellous.txt",O_RDWR);
    if (fd == -1)
    {
        printf("Enable to open the file");
    }
    else{
        printf("file gets opend with fd: %d\n",fd);

        Ret = write(fd,Arr,10);

        printf("%d Bytes gets written into the file\n",Ret);
    }

    close(fd);
    
    return 0;
}