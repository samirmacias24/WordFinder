#include "HashTable.h"
#include<iostream>
#include<tgmath.h>

HashTable::HashTable(int a)
{
	size = a;
	head = new LList[size];
}

int HashTable::Hash(std::string a)
{
	int value = 0;	
	for (int i = 0; i < a.length(); i++)
	{
		value += a[i] * pow(i,3);
	}
	return value%size;
}

bool HashTable::retrieveItem(std::string val)
{
	bool found = false;
	Word word(val);
	int index = Hash(val);
	found = head[index].searchItem(word);
	return found;
}

void HashTable::insertItem(std::string val)
{
	int value = Hash(val);
	Word wow(val);
	head[value].putItem(wow);
}

void HashTable::displayHash()
{
	//traversing thru each element in array
	for (int i = 0; i < size; i++)
	{
		std::cout << i + 1 << ".) " << std::endl;
		head[i].displayList(); // prints out each node of that specific LList	
	}
}

void HashTable::length()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << i+1 << ".) "<<head[i].getLength() << std::endl;
	}
}
