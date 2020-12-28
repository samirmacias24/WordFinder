#include<iostream>
#include<fstream>
#include<string>
#include<chrono>
#include "HashTable.h"

using namespace std;
using namespace std::chrono; // used to calculate time 

int main()
{
	HashTable obj(1000); // sets table size = 1000
	ifstream input("words.txt");
	
	//reading all the words from the text file into HashTable
	if (input.is_open())
	{
		cout << "Processing file..." << endl;
		string word;
		while (getline(input, word))
		{
			obj.insertItem(word); //inserting each word into HashTable
		}
		system("cls"); // clears screen
	}
	else
	{
		cout << "File could not be opened!" << endl;
		system("pause");
		return 0;
	}
	//can be used to print out length of every single LList
	//obj.length(); 

	// searching or a specfic word
	string word;
	bool found;
	cout << "Searching the HashTable for a specific word." << endl;
	cout << "Type 'exit' to quit." << endl;
	do{
		cout << "Enter a word: ";
		getline(cin, word);
		// finding time to retrieve/search
		auto start = high_resolution_clock::now();
		found = obj.retrieveItem(word);
		auto stop = high_resolution_clock::now();
		duration<double> time_span = stop - start;
		if (word == "exit")
		{
			break;
		}
		if (found)
		{
			cout << word << " was found!" << endl;
			cout << "Time: " << time_span.count() << "s\n"<< endl ;
		}
		else
		{
			cout << word << " was not found!\n" << endl;
		}
	} while(word != "exit");

	system("pause");
	return 0;
}