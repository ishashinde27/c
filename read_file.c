#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
    int fd = 0;
    int Ret = 0;
    char Arr[20];

    fd = open("Marvellous.txt",O_RDWR);
    if (fd == -1)
    {
        printf("Enable to open the file");
    }
    else{
        printf("file gets opend with fd: %d\n",fd);

        Ret = read(fd,Arr,6);

       // printf("file gets opend with fd: %d\n",fd);
        //Ret = read(fd,Arr,4);


        printf("%d Bytes gets read into the file\n",Ret);

        printf("%s\n",Arr);
    }

    close(fd);
    
    return 0;
}