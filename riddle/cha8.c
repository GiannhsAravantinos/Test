#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <netinet/in.h>


int main() {

	int newsockfd, portno, clilen, n;
	int fd = socket(AF_INET, SOCK_STREAM, 0 );
	struct sockaddr_in serv_addr,  cli_addr;
	char temp[100];


	portno = 49842;

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY;//inet_addr("127.0.0.1")
	serv_addr.sin_port = htons(portno);

	bind(fd, (struct sockaddr *) &serv_addr, sizeof(serv_addr));
	listen(fd,5);

	clilen = sizeof(cli_addr);

	newsockfd = accept(fd, (struct sockaddr *)&cli_addr, &clilen);
	printf("Mpompa\n");

  //sleep(1000);
	read(newsockfd, temp, 16);
	printf("read\n");
	temp[16] = '\0';
	printf("%s\n", temp);
	scanf("%c%c%c%c\n", &temp[0], &temp[1], &temp[2], &temp[3]);

  n = write(newsockfd, temp, 4);
	printf("N: %d\n", n);

	return 0;
}
