#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <netdb.h>
#include <sys/socket.h>
#include <unistd.h>
#define PORT "3490"
#define BACKLOG 10

int main(int argc, char* argv[])
{
	struct addrinfo hints; 

	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_PASSIVE;

	struct addrinfo* servInfo;


	int rv = getaddrinfo(NULL, PORT, &hints, &servInfo); 
	if (rv != 0) 
	{
		fprintf(stderr, "getaddrinfo: %s\n" , gai_strerror(rv)); 
		return 1;
	}

	int socket_descriptor = socket(servInfo->ai_family, servInfo->ai_socktype, servInfo->ai_protocol);
	if (socket_descriptor == -1) {
		perror("server: socket");
		return 1;
	}

	if(bind(socket_descriptor,  servInfo->ai_addr, servInfo->ai_addrlen) == -1)
	{
		perror("server: bind"); 
		return 1; 
	}

	printf("Listening on Port %s\n", PORT);

	if(listen(socket_descriptor, BACKLOG) == -1)
	{
		perror("server: listen");
		return 1;
	}

	while (true) 
	{

		struct sockaddr_storage client_info;

		socklen_t client_addr_size; 

		client_addr_size = sizeof(client_info);
		int accept_fd = accept(socket_descriptor, (struct sockaddr *)&client_info, &client_addr_size);  
		if (accept_fd == -1) 
		{
			perror("server: accept");
			continue;
		}

		if (fork() == 0) 
		{
			close(socket_descriptor);
			if(send(accept_fd, "Hello from server: ", 18, 0) == -1)
			{
				perror("send");
			}
			close(accept_fd);
			exit(0);
		}
		close(accept_fd);
	}

	return 0;
}

