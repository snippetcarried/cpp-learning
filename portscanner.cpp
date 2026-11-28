// 11/27/26 not done yet
#include <iostream>
#include <WinSock2.h>
#include <ws2tcpip.h>
#include <string>


int main() {
	WSADATA wsaData;
	int resulti;

	resulti = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (resulti != 0) {
		std::cout << "WSAStartup failed: " << resulti << std::endl;
		return 1;
	}
	std::cout << "WSAStartup succeeded." << std::endl;

			std::cout << "                      " << std::endl;
			std::cout << "  --port scanner --\n " << std::endl;
	
	
			
	std::string ourtarget;

	std::cout << "Enter the target IP address: ";
	std::cin >> ourtarget;
	std::cout << "scanning target: " << ourtarget << "..." << std::endl;
	std::cout << "we not scanning shit its just a cout message" << std::endl;

	// scanning thing
	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
		if (sock == INVALID_SOCKET) {
		std::cout << "Socket creation failed: " << std::endl;
		WSACleanup();
		return 1;	
        }
		std::cout << "Socket created " << std::endl;

		sockaddr_in serverAddr;
		serverAddr.sin_family = AF_INET;
		serverAddr.sin_port = htons(80);
		inet_pton(AF_INET, ourtarget.c_str(), &serverAddr.sin_addr);

		int connresult = connect(sock, (sockaddr*)&serverAddr, sizeof(serverAddr));
		if (connresult == 0) {
			std::cout << "Port 80 is OPEN!" << std::endl;
		} else {
			std::cout << "Port 80 is closed." << std::endl;
		}

		closesocket(sock);
		WSACleanup();
		return 0;
}
