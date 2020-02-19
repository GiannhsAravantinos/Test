#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>


int main(int argc,char *argv[]) {


  pid_t pid;
  
  int lock=0;
  while(lock==0){

    pid=fork();

    if(pid>0){

      wait(0);
      //printf("returned %d\n",pid);
      if(pid==32767||pid>100000){
        printf("Right_pid\n");
        lock=1;
      }
    }
    else{

      if(getpid()==32767){
        printf("Got right pid\n");
        char *executable = "./riddle";
    	  char *argv[] = { executable, NULL, NULL, NULL };
    	  char *envp[] ={ NULL };
        //raise(SIGSTOP);
    	  execve(executable, &argv[0], envp);
     }
     //printf("%d Process out\n",getpid());

     return 0;
    }

  }



  return 0;
}
