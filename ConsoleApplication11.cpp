#include <iostream>
#include <string.h>
using namespace std;
string word = "";
void upper() {

}
void lower() {

}
void lesenka() {

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
	case 1: upper();
	case 2: lower();
	case 3: lesenka();
	default:
		main();
	}
}
