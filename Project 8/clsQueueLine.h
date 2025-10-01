#pragma once
#include<iostream>
#include<queue>
#include<stack>
#include<string>
#include"/Users/YUSUF/My Repos/LIbraries/clsDate.h"
using namespace std;
class clsQueueLine 
{
private:

	int _TotalTickets;
	short _AverageTimeToServe;
	string _Prefix;

	class _clsTicket
	{
	private:
		short _Number; // 
		string _Prefix;//
		int _WaitingClients;  // 
		string _TicketTime;  // 
		short _AverageTimeToServe; // 
	public:

		_clsTicket(string Prefix, short Number, int WaitingClients, short AverageTimeToServe)
		{
			_TicketTime = clsDate::GetSystemDateTimeString();
			_Prefix = Prefix;
			_Number = Number;
			_WaitingClients = WaitingClients;
			_AverageTimeToServe = AverageTimeToServe;
		}

		string TicketTime()
		{
			return _TicketTime;
		}

		string FullNumber()// 
		{
			return _Prefix + to_string(_Number);
		}

		short ExpectedTimeToServe()// 
		{
			return _AverageTimeToServe * _WaitingClients; 
		}


		int WaitingClients()
		{
			return _WaitingClients;
		}

		void Print()
		{
			cout << "\n\t\t\t  _______________________\n";
			cout << "\n\t\t\t\t    " << FullNumber();
			cout << "\n\n\t\t\t    " << TicketTime();
			cout << "\n\t\t\t    Wating Clients = " << WaitingClients();
			cout << "\n\t\t\t      Serve Time In";
			cout << "\n\t\t\t       " << ExpectedTimeToServe() << " Minutes.";
			cout << "\n\t\t\t  _______________________\n";

		}
	};

	queue <_clsTicket> _MyQueueLine;

public:

	

	clsQueueLine(string Prefix, int AverageTimeToServe)
	{
		_Prefix = Prefix;
		_AverageTimeToServe = AverageTimeToServe;
		_TotalTickets = 0;
	}

	void IssueTicket()
	{
		_TotalTickets++;
		_clsTicket Ticket(_Prefix, _TotalTickets, WaitingClients(), _AverageTimeToServe);
		_MyQueueLine.push(Ticket);
	}


	string WhoIsNext()
	{
		if (_MyQueueLine.empty())
			return  "No Clients Left.";
		else
			return _MyQueueLine.front().FullNumber();
	}

	bool ServeNextClient()
	{
		if (_MyQueueLine.empty())
			return false;

		_MyQueueLine.pop();
		return true;
	}

	int ServedClients()
	{
		return _TotalTickets - WaitingClients();
	}

	void PrintInfo()
	{
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t\tQueue Info";
		cout << "\n\t\t\t _________________________\n";
		cout << "\n\t\t\t    Prefix   = " << _Prefix;
		cout << "\n\t\t\t    Total Tickets   = " << _TotalTickets;
		cout << "\n\t\t\t    Served Clients  = " << ServedClients();
		cout << "\n\t\t\t    Wating Clients  = " << WaitingClients(); ;
		cout << "\n\t\t\t _________________________\n";
		cout << "\n";
	}

	void PrintTicketsLineRTL()
	{
		if(_MyQueueLine.empty())
			cout << "\n\t\tTickets: No Tickets.";
		
		queue<_clsTicket> TempQueueLine = _MyQueueLine;
		while (!TempQueueLine.empty())
		{
			_clsTicket TempTicket = TempQueueLine.front();
			cout << " " << TempTicket.FullNumber() << " <-- ";
			TempQueueLine.pop();
		}
	}

	void PrintTicketsLineLTR()
	{
		if (_MyQueueLine.empty())
			cout << "\n\t\tTickets: No Tickets.";

		queue<_clsTicket> TempQueueLine = _MyQueueLine;
		stack <_clsTicket> TempStack;
		while (!TempQueueLine.empty())
		{
			TempStack.push(TempQueueLine.front());
			TempQueueLine.pop();
		}

		while (!TempStack.empty())
		{
			_clsTicket TempTicket = TempStack.top();
			cout << " " << TempTicket.FullNumber() << " --> ";
			TempStack.pop();
		}

	}

	void PrintAllTickets()
	{
		cout << "\n\n\t\t\t       ---Tickets---";

		if (_MyQueueLine.empty())
			cout << "\n\n\t\t\t     ---No Tickets---\n";

		//we copy the queue in order not to lose the original
		queue <_clsTicket> TempQueueLine = _MyQueueLine;


		while (!TempQueueLine.empty())
		{
			TempQueueLine.front().Print();
			TempQueueLine.pop();
		}

	}

	int WaitingClients()
	{
		return _MyQueueLine.size();
	}


};

