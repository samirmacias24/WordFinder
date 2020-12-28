#ifndef LLIST_H
#define LLIST_H
#include "Word.h"
class LList
{
private:
	struct Node
	{
		Node* next;
		Word val;
	};
	Node* head;
public:
	LList(); // constructor
	void putItem(Word value); // appends it to the end of list
	void deleteItem(Word value); // deletes a specifc word
	bool searchItem(Word value); // returns true/false whether it was found or not
	void displayList(); // displays entire list
	int getLength(); // returns length of LList
};

#endif // !LLIST_H
#pragma once
