#ifndef  FUNKTION_H
#define FUNKTION_H
using namespace std;
struct Spicok
{
	string title;
	int priority;
	string description;
	int day;
	int manth;
	int year;


};
void outputSpicok(Spicok* date, int size, int index1, int index2, int index3, int index4);
void deletSpicok(Spicok* mas, int size, int index);
void addSpicok(Spicok& d);
void editSpicok(Spicok* mas, int size, int index);
int findSpicok(Spicok* mas, int size, int prior, string name, string ops, int day, int manth, int yaer);
#endif
