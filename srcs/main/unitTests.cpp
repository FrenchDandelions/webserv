#include "Webserv.hpp"
#include "SubServ.hpp"

int	testRemoveClientSocket()
{
	SubServ	myServ(4245);
	return (myServ.tests());
}

int	testRemoveFDFromIdMap()
{
	Webserv	myServ("config/good_config/test.conf");
	
	return (0);
}

int	main()
{
	testRemoveClientSocket();
	testRemoveFDFromIdMap();
}