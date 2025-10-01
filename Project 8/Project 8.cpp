//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main()
{

    clsQueueLine PayBillsQueue("A0", 10);


    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintAllTickets();

    PayBillsQueue.ServeNextClient();

    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintAllTickets();



    system("pause>0");

    return 0;
}

