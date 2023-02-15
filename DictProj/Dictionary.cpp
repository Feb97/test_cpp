#include <string>
#include <map>
#include <iostream>
#include <vector>
#include "Dictionary.h"

using namespace std;

void Dictionary::addDefinition(string word, string definition)
{
	auto it = dictionary.find(word);
	if (it != dictionary.end())
	{
		// already in the dictionary
		it->second = definition;
	}
	else
	{
		dictionary[word] = definition;
	}
}

string Dictionary::getDefinition(string word)
{
	auto it = dictionary.find(word);
	string result = "";
	if (it != dictionary.end())
	{
		result = it->second;
	}
	else
	{
		result = "NOT FOUND!!";
	}

	return result;
}

void Dictionary::printAll()
{
	for (auto& pair : dictionary)
	{
		cout << pair.first << ";" << pair.second << endl;
	}

	vector<int> myVec;
	myVec.push_back(5);

	for (auto& index : myVec)
	{
		cout << index << endl;
	}
}