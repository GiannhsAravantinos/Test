#include <fcntl.h>
#include <unistd.h>

int main(){

  int fd = open("test.txt", O_RDONLY);
  dup2(fd,99);// twra mporw na kanw access ton 99

  char *name = "./riddle";
  char *argv[] = { name, NULL, NULL, NULL };
  char *envp[] ={ NULL };
  execve(name, &argv[0], envp);

  return 0;
}
