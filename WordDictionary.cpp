#include "WordDictionary.h"




// Adds a word into the data structure.
void WordDictionary::addWord(string word) {
	for (auto const& string : StoredSrings)
	{
		if (word == string)
		{
			cout << "The word to add has already existed" << endl;
			break;
		}
		else
		{
			StoredSrings.resize(StoredSrings.capacity() + 1, word);
			cout << "Word adding succeeded" << endl;
		}
	}
}

// Returns if the word is in the data structure. A word could
// contain the dot character '.' to represent any one letter.
bool WordDictionary::search(string word) {
	if (!StoredSrings.empty())
	{
		auto length = word.capacity();

		for (auto const& string : StoredSrings)
		{
			if (word == string)
			{
				cout << "Found perfectly matched word" << endl;
				return true;
			}
			else
			{
				auto Clength = word.capacity();
				for (unsigned k = 0; k < Clength; k++)
				{
					if (word[k] != '.')
					{
						if (word[k] == string[k])
						{
							continue;
						}
						else
							break;
					}
					else 
						continue;
					if (k == Clength - 1)
					{
						cout << "Found related words" << string << endl;
						return true;
					}
				}
				cout << "Not found related or matched word" << endl;
				return false;
			}
		}
	}
	else
		cout << "No word is stored ,you should first add some words" << endl;
	return false;
}


