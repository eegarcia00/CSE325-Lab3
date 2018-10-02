#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  int priority;
  int pid;

  if(argc < 3){
    printf(2, "Usage: nice pid priority\n");
    exit();
  }

  pid = atoi(argv[1]);
  priority = atoi(argv[2]);
 
  if(priority < 0 || priority > 20){
    printf(2, "Priority not in range (0-20)! \n");
    exit();
  }

  change_priority(pid, priority);

  exit();
}
