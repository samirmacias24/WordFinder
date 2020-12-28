#include "LList.h"
#include<iostream>

LList::LList()
{
	head = nullptr;
}

void LList::putItem(Word value)
{
	Node*ptr;
	ptr = head;
	// new Node will be placed at the end of the list
	Node* newNode = new Node;
	newNode->val = value;
	newNode->next = nullptr;

	if (ptr == NULL)
	{
		head = newNode;
	}
	else
	{
		// pre will point to last element
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = newNode;
	}
}

void LList::deleteItem(Word value)
{
	Node* ptr;
	Node* pre = nullptr;
	ptr = head;

	if (ptr == NULL)
	{
		return;
	}
	// if its the first value
	if (ptr->val.getValue() == value.getValue())
	{
		head = head->next;
		delete ptr;
	}
	else
	{
		ptr = head;
		while (ptr != NULL && ptr->val.getValue() != value.getValue())
		{
			pre = ptr;
			ptr = ptr->next;
		}
		// if traversed list and value wasnt found
		if (ptr != NULL) 
		{
			pre->next = ptr->next;
			delete ptr;
		}
	}
}

bool LList::searchItem(Word value)
{
	bool found = false;
	Node* ptr;
	ptr = head;
	if (ptr == NULL)
	{
		return found;
	}
	else
	{
		while (ptr != NULL && ptr->val.getValue() != value.getValue())
		{
			ptr = ptr->next;
		}
		if (ptr != NULL)
		{
			found = true;
			return found;
		}
		return found;
	}
}

void LList::displayList()
{
	Node* ptr;
	ptr = head;
	if (ptr == NULL)
	{
		return;
	}
	else {
		while (ptr != nullptr)
		{
			std::cout << ptr->val.getValue() << " ";
			ptr = ptr->next;
		}
		std::cout << std::endl;
	}
}

int LList::getLength()
{
	Node* ptr;
	ptr = head;
	int count = 0;
	if (ptr == NULL)
	{
		return 0;
	}
	else
	{
		while (ptr)
		{
			count++;
			ptr = ptr->next;
		}
		return count;
	}
}

