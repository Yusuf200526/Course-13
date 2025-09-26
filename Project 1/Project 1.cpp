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

	


	

	

	system("pause>0");

	return 0;

}