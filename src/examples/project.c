
#include <stdio.h>
#include <syscall.h>


int
main (void)
{
 
  int pid[4];
  semaphore_cantidad_init(2);
  semaphore_init(0,10);
  semaphore_init(1,0);

  pid[2] =  exec("productor 1");
  pid[3] =  exec("productor 2");
  pid[0] =  exec("consumidor 3");
  pid[1] =  exec("consumidor 4");
  

  wait(pid[0]);
  wait(pid[1]);
  wait(pid[2]);
  wait(pid[3]);
  return 0;
}


