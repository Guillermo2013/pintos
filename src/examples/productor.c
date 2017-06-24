#include <stdio.h>
#include <syscall.h>
int 
main(int argc, char* argv[])
{
    

    int i = 0;
    while(1)
    {
       semaphore_wait(1);
       printf("produce %s\n", argv[1]);

       int randonNum = 10000000;
       while(randonNum > 0){
		randonNum = randonNum -1;
       }
       	
       semaphore_post(0);
       i++;
    }

    return 0;
}