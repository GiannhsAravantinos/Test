#include <fcntl.h>
#include <unistd.h>

int main(){



  int fd=openat(AT_FDCWD, "bf00", O_RDWR);
  lseek(fd, 1073741824, SEEK_SET) ;
  write(fd,"asdfghjklpoiuytr",16);
  close(fd);

  fd=openat(AT_FDCWD, "bf01", O_RDWR);
  lseek(fd, 1073741824, SEEK_SET) ;
  write(fd,"asdfghjklpoiuytr",16);
  close(fd);

  fd=openat(AT_FDCWD, "bf02", O_RDWR);
  lseek(fd, 1073741824, SEEK_SET) ;
  write(fd,"asdfghjklpoiuytr",16);
  close(fd);

  fd=openat(AT_FDCWD, "bf03", O_RDWR);
  lseek(fd, 1073741824, SEEK_SET) ;
  write(fd,"asdfghjklpoiuytr",16);
  close(fd);

  fd=openat(AT_FDCWD, "bf04", O_RDWR);
  lseek(fd, 1073741824, SEEK_SET) ;
  write(fd,"asdfghjklpoiuytr",16);
  close(fd);

  fd=openat(AT_FDCWD, "bf05", O_RDWR);
  lseek(fd, 1073741824, SEEK_SET) ;
  write(fd,"asdfghjklpoiuytr",16);
  close(fd);

  fd=openat(AT_FDCWD, "bf06", O_RDWR);
  lseek(fd, 1073741824, SEEK_SET) ;
  write(fd,"asdfghjklpoiuytr",16);
  close(fd);

  fd=openat(AT_FDCWD, "bf07", O_RDWR);
  lseek(fd, 1073741824, SEEK_SET) ;
  write(fd,"asdfghjklpoiuytr",16);
  close(fd);

  fd=openat(AT_FDCWD, "bf08", O_RDWR);
  lseek(fd, 1073741824, SEEK_SET) ;
  write(fd,"asdfghjklpoiuytr",16);
  close(fd);

  fd=openat(AT_FDCWD, "bf09", O_RDWR);
  lseek(fd, 1073741824, SEEK_SET) ;
  write(fd,"asdfghjklpoiuytr",16);
  close(fd);

  fd=openat(AT_FDCWD, "bf10", O_RDWR);
  lseek(fd, 1073741824, SEEK_SET) ;
  write(fd,"asdfghjklpoiuytr",16);
  close(fd);

  return 0;
}
