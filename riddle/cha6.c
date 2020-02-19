#include <fcntl.h>
#include <unistd.h>

int main(){




  int pipe1[2],pipe2[2];

  pipe(pipe1);
  pipe(pipe2);

  dup2(pipe1[0],33);
  dup2(pipe1[1],34);
  dup2(pipe2[0],53);
  dup2(pipe2[1],54);//tlsa 2 pipes poy zhtan oi keratades


  char *name = "./riddle";
  char *argv[] = { name, NULL, NULL, NULL };
  char *envp[] ={ NULL };
  execve(name, &argv[0], envp);

  return 0;
}
