//TCP client Side

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

#define PORT 7777

void main()
{
	struct sockaddr_in servAddr;
	servAddr.sin_family		= AF_INET;
	servAddr.sin_port 		= htons(PORT);
	inet_pton(AF_INET,"127.0.0.1",&servAddr.sin_addr);

	int servSock = socket(AF_INET,SOCK_STREAM,0);
	connect(servSock,(struct sockaddr*)&servAddr,sizeof(servAddr));

	char buf[1024];
	printf("Message: ");
	fgets(buf,sizeof(buf),stdin);
	send(servSock,buf,strlen(buf),0);
}
