
#include <stdio.h>
#include <syscall.h>


int
main (void)
{
 
  int pid[4];
  semaphore_cantidad_init(2);
  semaphore_init(0,1);
  semaphore_init(1,1);


  pid[0] =  exec("write 1");
  pid[2] =  exec("write 3");
  pid[1] =  exec("read 2");
  pid[3] =  exec("read 4");
  

  wait(pid[0]);
  wait(pid[1]);
  wait(pid[2]);
  wait(pid[3]);
  return 0;
}