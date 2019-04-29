// Trello2Monthly_Client_CMake.cpp : Defines the entry point for the application.
//

#include "Trello2Monthly_Client_CMake.h"
#include "monthly.h"
using namespace std;

int main()
{
	monthly new_month;
	new_month.run();
	new_month.shutdown();
	std::getchar();
	return 0;
}
