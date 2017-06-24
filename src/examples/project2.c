
#include <stdio.h>
#include <syscall.h>


int
main (void)
{
 
  int pid[4];
  semaphore_cantidad_init(5);
  semaphore_init(0,1);
  semaphore_init(1,1);
  semaphore_init(2,1);
  semaphore_init(3,1);
  semaphore_init(4,1);

  pid[0] =  exec("filosofos 1");
  pid[1] =  exec("filosofos 2");
  pid[2] =  exec("filosofos 3");
  pid[3] =  exec("filosofos 4");
  pid[4] =  exec("filosofos 5");
  

  wait(pid[0]);
  wait(pid[1]);
  wait(pid[2]);
  wait(pid[3]);
  wait(pid[4]);
  return 0;
}