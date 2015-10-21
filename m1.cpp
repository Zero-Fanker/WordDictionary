#include<iostream>
#include "WordDictionary.h"
using namespace std;




// Your WordDictionary object will be instantiated and called as such:
// WordDictionary wordDictionary;
// wordDictionary.addWord("word");
// wordDictionary.search("pattern");


void main()
{
	cout << "Welcome to use" << endl;
	WordDictionary Alphabet;
ReOperate:
	cout << "0 - Add a new word to the dictionary\n"
		<< "1 - Search word in the dictionary\n"
		<< endl;
	int OperateID;
	char MyOP_in[1];
	cin >> MyOP_in;
	if (*MyOP_in < '0' || *MyOP_in > '1')
		OperateID = -2;
	else
		OperateID = atoi(MyOP_in);
	if (OperateID <= -2 || OperateID > 6)
		OperateID = -2;
	string NewString;
	bool CanAdd;
	switch (OperateID)
	{
	case 0:
		cout << "Please type the words you want to add,then enter to continue" << endl;
		cin >> NewString;
		Alphabet.addWord(NewString);
		cout << endl;
		goto ReOperate;
	case 1:
		cout << "Please type the words you want to search,then enter to continue" << endl;
		cin >> NewString;
		CanAdd = Alphabet.search(NewString);
		cout << endl;
		goto ReOperate;
	case -2:
	default:
		cout << "Operate number invalid,please try again\n" << endl;
		goto ReOperate;
	}
}