#include <stdio.h>
#include <syscall.h>
int 
main(int argc, char* argv[])
{
    

    int i = 0;
    int read_count =  0;
    while(i<100)
    {
       semaphore_wait(1);
        read_count = read_count + 1;
        if(read_count == 1)
        semaphore_wait(0);
       semaphore_post(1);
        printf("read %s\n", argv[1]);
       semaphore_wait(1);
       read_count = read_count - 1;
       if(read_count == 0)
       semaphore_post(0);
       semaphore_post(1);
     
       i++;
    }

    return 0;
}