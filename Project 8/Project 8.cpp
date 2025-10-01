#include<iostream>
#include"clsQueueLine.h"
using namespace std;
int main()
{
	clsQueueLine MyQueueLine("A0", 10);

	MyQueueLine.IssueTicket();
	MyQueueLine.IssueTicket();
	MyQueueLine.IssueTicket();

	MyQueueLine.PrintInfo();

	cout << "\n\n";

	MyQueueLine.PrintTicketsRTL();
	cout << "\n\n";

	MyQueueLine.PrintTicketsLTR();


	cout << "\n\n\n";

	MyQueueLine.PrintAllTickets();

	MyQueueLine.ServeNextClient();

	cout << "\n\n\n";

	MyQueueLine.PrintInfo();

	cout << "\n\n";

	MyQueueLine.PrintAllTickets();

	
	MyQueueLine.ServeNextClient();

	cout << "\n\n\n";

	MyQueueLine.PrintInfo();

	cout << "\n\n";

	MyQueueLine.PrintAllTickets();

	system("pause>0");
	return 0;
}