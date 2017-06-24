#include <stdio.h>
#include <syscall.h>
int 
main(int argc, char* argv[])
{
    

    int i = 0;
    while(i<100)
    {
       semaphore_wait(0);
       printf("write %s\n", argv[1]);
       semaphore_post(0);
       i++;
    }

    return 0;
}