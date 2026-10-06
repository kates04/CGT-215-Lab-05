// CGT-215-Lab-05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	// setting up vector cypher table
	vector<char> code = 
	{'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };
	
	//text input	
	string text;
	//getline for string
	cout << "Input: ";
	getline(cin, text);
	cout << "Output: ";

//make a loop to go through each char in the string text
	for (char c : text) //takes each char in the string text and puts it into the variable c
	{
	//if char is between 65 and 90 then it is a capital letter
		if (c >= 65 && c <= 90)
		{
		//return the char at slot char-65 in the vector code
			cout << code[c - 65];
		}

	//else if char is between 97 and 122 then it is a lowercase letter
		else if (c >= 97 && c <= 122)
		{
		//set uppercase char to char-32 (converts lowercase to uppercase)
			char uppercaseChar = c - 32;
		//set uppercase code to char at slot uppercase char-65 in the vector code (get uppercase code)
			char uppercaseCode = code[uppercaseChar - 65];
		//return uppercase code + 32 (converts uppercase code to lowercase code)
			cout << char(uppercaseCode + 32);
		}
	//else (is not a letter)
		else
		{
		//return char (returns the char as is)
			cout << c;
		}
		
	}
	cout << endl;

	return 0;
}
