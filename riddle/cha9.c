#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main (){


  char temp[4097];


  int fd=open("secret_number",O_RDWR|O_CREAT);

  char ch;
  scanf("%c",&ch);
  if(ch=="a"){
    ch='s';
  }
  else{
    printf("%s\n","hi");
    read(fd,temp,4096);
    temp[4096]='\0';
    printf("%s\n", temp);
  }

  close(fd);
  return 0;
}
