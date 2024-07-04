#include "SubServ.hpp"

SubServ::SubServ()
{
	return ;
}

SubServ::SubServ(int port) : _port(port)
{
	return ;
}

SubServ::~SubServ(void)
{
	return ;
}

SubServ::SubServ(const SubServ &otherSubServ)
{
	if (this != &otherSubServ)
	{
		*this = otherSubServ;
	}
	return;
}

SubServ &SubServ::operator=(const SubServ &otherSubServ)
{
	if (this != &otherSubServ)
	{
	}		
	return(*this);
}

int	SubServ::acceptNewConnection(void)
{
	int	clientSocket;
	
	clientSocket = accept(this->_serverSocket, NULL, NULL);
	if (clientSocket == -1)
	{
		std::cerr << "webserv: SubServ::acceptNewConncetion: accept: " << strerror(errno) << std::endl;
		return (-1);
	}
	try
	{
		this->_clientSockets.push_back(clientSocket);
	}
	catch(const std::exception& e)
	{
		/* Send error to client ; */
		close(clientSocket);
		std::cerr << "webserv: SubServ::acceptNewConnection: " << e.what() << std::endl;
		return (-1);
	}
	return (clientSocket);
}

int	SubServ::removeClientSocket(int clientSocket)
{
	std::vector<int>::iterator	iter;

	iter = std::find(this->_clientSockets.begin(), this->_clientSockets.end(), clientSocket);
	if (iter != this->_clientSockets.end())
	{
		this->_clientSockets.erase(iter);
		std::cout << "webserv: successfully remove client socket " << clientSocket << " in subserver listening on port " << this->_port << std::endl;
		return (0);
	}
	else
	{
		std::cerr << "webserv: SubServ::removeClientSocket: trying to remove non existing fd from vector" << std::endl;
		return (1);
	}
}

bool	SubServ::isClientSocket(int socketFd)
{
	if (std::find(this->_clientSockets.begin(), this->_clientSockets.end(), socketFd) != this->_clientSockets.end())
	{
		return (false);
	}
	else
	{
		return (true);
	}
}

bool	SubServ::isServerSocket(int socketFd)
{
	if (socketFd == this->_serverSocket)
	{
		return (true);
	}
	else
	{
		return (false);
	}
}

int	SubServ::tests(void)
{
	int		socket1;
	int		socket2;

	socket1 = createServerSocket(4245);
	socket2 = createServerSocket(4244);
	this->_clientSockets.push_back(socket1);
	this->_clientSockets.push_back(socket2);
	this->removeClientSocket(15);
	this->removeClientSocket(socket1);
	this->removeClientSocket(socket2);
	close(socket1);
	close(socket2);
	return (0);	
}