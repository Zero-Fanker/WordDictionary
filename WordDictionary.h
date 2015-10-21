#pragma once
#include<string>
#include<vector>
#include<iostream>

using namespace std;

class WordDictionary 
{
	public:
		WordDictionary::WordDictionary()
		{
		}

		void addWord(string word);
		bool search(string word);

		WordDictionary::~WordDictionary()
		{
		}

		std::vector<string> StoredSrings;
};

