#include "Word.h"

Word::Word()
{
	value = "";
}

Word::Word(std::string val)
{
	value = val;
}

void Word::setValue(std::string val)
{
	value = val;
}

std::string Word::getValue()
{
	return value;
}
