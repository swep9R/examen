#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;
string file = "dox.txt";
string file1 = "encrypte.txt";
string file2 = "decrypte.txt";
ifstream fileIn;
ofstream fileOut1;
ofstream fileOut2;


string lib;
string MakeLib()
{
	for (int i = 65; i <= 90; i++) //upercace
	{
		lib += (char)i;
	}
	for (int i = 97; i <= 122; i++) //upercace
	{
		lib += (char)i;
	}
	for (int i = 48; i <= 57; i++) //upercace
	{
		lib += (char)i;
	}
	return lib;
}
string ShivrovanijaText(char key[], string text, int len)
{
	fileOut1.open(file1);
	string a;

	for (int i = 0; i < len; i++)
		a += char((int(text[i]) + int(key[i])) % 127);

	cout << "Shyfr: " << a << endl;
	fileOut1 << a;
	fileOut1.close();
	return a;
}
string deshifr(string a, int len, char key[])
{
	fileOut2.open(file2);
	string b;
	for (int i = 0; i < len; i++)
		b += char((int(a[i]) - int(key[i]) + 127) % 127);

	cout << "DeShyfr: " << b << endl;
	fileOut2 << b;
	fileOut2.close();
	return b;
}
int main()
{

	fileIn.open(file);
	if (fileIn.fail())
	{
		cout << "Error openig file \a";
		return 404;
	}
	string text;
	cout << "Vvedit text " << endl;
	while (!fileIn.eof())
	{
		string line;
		getline(fileIn, line);
		text += line + "\n";
	}
	cout << text;
	char key[100];
	cout << "Vvedit key" << endl;
	cin >> key;
	int len = text.length();
	int y = 0;

	for (int i = strlen(key); i < text.length(); i++)
	{
		key[i] = key[y];

		y++;

	}
	cout << "Length of a key: " << len << endl;

	deshifr(ShivrovanijaText(key, text, len), len, key);
	fileIn.close();
	return 0;

}