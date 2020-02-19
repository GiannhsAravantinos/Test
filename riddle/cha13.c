#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>



int main() {
  char *file=".hello_there";
  int fd=open(file,O_RDWR);
  ftruncate(fd, 32768);
  printf("%s %d\n","hi",fd);
  close(fd);
  return 0;
}
