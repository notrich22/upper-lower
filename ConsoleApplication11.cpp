#include <iostream>
#include <cctype>
using namespace std;
string word = "";
void upper() {
	for (int i = 0; i < word.length(); i++)
		word[i] = toupper(word[i]);
}
void lower() {
	for (int i = 0; i < word.length(); i++)
		word[i] = tolower(word[i]);
}
void lesenka() {
	for (int i = 0; i < word.length(); i++) {
		if (i == 0 || i % 2 == 0) {
			word[i] = toupper(word[i]);
		}
		else {
			word[i] = tolower(word[i]);
		}
	}
}
int main()
{
    
	int ch;
    cout << "Enter word: ";
    cin >> word;
	cout << "Choose:\n1. To upper case\n2. To lower case\n3. Lesenka)))";
	cin >> ch;
	switch (ch)
	{
	case 1: upper(); break;
	case 2: lower(); break;
	case 3: lesenka(); break;
	default:
		break;
	}
	cout << word;
}
