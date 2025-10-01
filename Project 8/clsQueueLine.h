#pragma once
#include<iostream>
#include<queue>
#include<string>
#include"/Users/YUSUF/My Repos/LIbraries/clsDate.h"
using namespace std;
class clsQueueLine 
{
private:
	string _Prefix = ""; //from constructer
	 int _TotalTickets = 0; // when issue ticket just up 
	 int _ServedClients = 0;  // related to waiting clients 
	 short _AverageServeTime = 0; // from constructer
	

	class _clsTicket
	{
	public:
		string BookingTime = "";
		short YourNumber = 0;

		_clsTicket()
		{

		}

		_clsTicket(int WaitingClients)
		{
			BookingTime = clsDate::GetSystemDateTimeString();  // need more focus 
			YourNumber = WaitingClients;
		}
	};

	queue<_clsTicket> _MyQueue;

	void _PrintHeaderOfInfo()
	{
		cout << "\t\t\t\t\t__________________________________";
		cout << "\n\n\t\t\t\t\t\t  Queue Info";
		cout << "\n\t\t\t\t\t__________________________________";
	}


	void _PrintTicket(_clsTicket Ticket)
	{
		int WaitingBefore = Ticket.YourNumber - _ServedClients - 1;
		int ExpectedTime = WaitingBefore * _AverageServeTime;

		cout << "\t\t\t\t\t\t\t"<<_Prefix<<Ticket.YourNumber;
		cout << "\n\n";
		cout << "\t\t\t\t\t\t" << Ticket.BookingTime;
		cout << "\n\t\t\t\t\t\tWaiting Clients =" << WaitingBefore;
		cout << "\n\t\t\t\t\t\t Serve Time In";
		cout << "\n\t\t\t\t\t\t  " << ExpectedTime << " Minutes.";
	}

public:

	clsQueueLine(string Prefix, short AverageServeTime)
	{
		_Prefix = Prefix;
		_AverageServeTime = AverageServeTime;
	}

	void IssueTicket()
	{
		_TotalTickets++;
		_clsTicket Ticket(_MyQueue.size() + 1);
		_MyQueue.push(Ticket);
	}

	void PrintInfo()
	{
		_PrintHeaderOfInfo();
		cout << "\n\n\t\t\t\t\t  Prefix            =" << _Prefix;
		cout << "\n\t\t\t\t\t  Total Tickets     =" << _TotalTickets;
		cout << "\n\t\t\t\t\t  Served Clients    =" << _ServedClients;  // done
		cout << "\n\t\t\t\t\t  Waiting Clients   =" << _MyQueue.size();

		cout << "\n\t\t\t\t\t__________________________________";
	}

	void PrintTicketsRTL()
	{
		queue <_clsTicket> TempQueue = _MyQueue;
		_clsTicket TempTicket;
		cout << "\t\t\tTickets:  ";
		while (!TempQueue.empty())
		{
			TempTicket = TempQueue.front();
			TempQueue.pop();
			cout << _Prefix << TempTicket.YourNumber << " <--  ";
		}
	}

	void PrintTicketsLTR()
	{
		queue <_clsTicket> TempQueue = _MyQueue;
		_clsTicket TempTicket;
		cout << "\t\t\tTickets:  ";
		while (!TempQueue.empty())
		{
			TempTicket = TempQueue.back();
			TempQueue.pop();
			cout << _Prefix << TempTicket.YourNumber << " -->  ";
		}

	}


	void PrintAllTickets()
	{
		cout << "\n\n\t\t\t\t\t\t  ---Tickets---";
		cout << "\n\t\t\t\t\t__________________________________\n\n";
		queue <_clsTicket> TempQueue = _MyQueue;
		_clsTicket TempTicket;
		while (!TempQueue.empty())
		{
			TempTicket = TempQueue.front();
			TempQueue.pop();
			_PrintTicket(TempTicket);
			cout << "\n\t\t\t\t\t__________________________________\n\n";
			cout << "\n\t\t\t\t\t__________________________________\n\n";
		}

	}


	void ServeNextClient()
	{
		_ServedClients++;
		_MyQueue.pop();
	}

};

