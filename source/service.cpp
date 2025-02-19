#include "../headers/service.hpp"
#include <netinet/in.h>
#include <sys/socket.h>

int ServerSocket = socket(AF_INET, SOCK_STREAM, 0);

void Socket() {
  sockaddr_in ServerAddress;
  ServerAddress.sin_family = AF_INET;
  ServerAddress.sin_port = htons(8080);
  ServerAddress.sin_addr.s_addr = INADDR_ANY;
}
