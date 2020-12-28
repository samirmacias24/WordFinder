#ifndef WORD_H
#define WORD_H

#include<string>
class Word
{
private:
	std::string value;
public:
	Word(); // constructor initializes 'value'
	Word(std::string val); // sets 'value' equal to the arguemnt being passed when object created
	void setValue(std::string val);// sets 'value' equal to the arguemnt being passed
	std::string getValue();// returns value
};
#endif // !WORD_H