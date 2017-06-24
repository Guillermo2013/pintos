#include <stdio.h>
#include <syscall.h>
int 
main(int argc, char* argv[])
{
    int i = 0;
    int a = 0;
    int randonNum;
    while(a < 50)
    {
      semaphore_wait(i);
      semaphore_wait((i+1)%5);
      printf("filosofo esta comiendo %d\n", i);
      randonNum = 1000000;
      while(randonNum>0)
        randonNum--;
      semaphore_post(i);
      semaphore_post((i+1)%5);
      printf("filosofo esta pensando %d\n", i) ; 
      randonNum = 1000;
      while(randonNum>0)
        randonNum--;      
       i = (i + 1 )% 5;
	a++;
    }

    return 0;
}
