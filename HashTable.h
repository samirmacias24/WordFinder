#ifndef HASHTABLE_H
#define HASHTABLE_H
#include "LList.h"
class HashTable
{
private:
	int size;
	LList* head;
public:
	// Constructor - sets the size of the array/allocates memory for array
	HashTable(int a);
	// takes string value converts it into a unique key,
	// thus giving us a specfic index location to store the value
	int Hash(std::string a);
	// searches for specific string value (return true - found / false - not found)
	bool retrieveItem(std::string val); 
	//places item into HashTable using hash funtion to find location
	void insertItem(std::string val); 
	// displays every word contained in each element
	void displayHash(); 
	//displays the number of nodes in LList of each element in HashTable
	void length(); 

};
#endif // !HASHTABLE_H

