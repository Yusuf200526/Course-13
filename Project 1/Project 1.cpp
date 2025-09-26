#include<iostream>
#include"clsDblLinkedList.h"
using namespace std;
int main()
{
	clsDblLinkedList<int> MyDblLinkedList;

	MyDblLinkedList.InsertAtBeginning(5);
	MyDblLinkedList.InsertAtBeginning(4);
	MyDblLinkedList.InsertAtBeginning(3);
	MyDblLinkedList.InsertAtBeginning(2);
	MyDblLinkedList.InsertAtBeginning(1);

	MyDblLinkedList.PrintList();

	cout << "\n\n\n";

	cout<<"\nNumbers of Item in the linked list is "<<MyDblLinkedList.Size();

	if (MyDblLinkedList.IsEmpty())
	{
		cout << "\n\nYes List is Empty";
	}
	else
	{
		cout << "\n\nNo List is not Empty";
	}


	MyDblLinkedList.Clear();

	cout << "\n\n";

	MyDblLinkedList.PrintList();

	cout << "\nNumbers of Item in the linked list is " << MyDblLinkedList.Size();

	if (MyDblLinkedList.IsEmpty())
	{
		cout << "\n\nYes List is Empty";
	}
	else
	{
		cout << "\n\nNo List is not Empty";
	}
	

	

	system("pause>0");

	return 0;

}