#include <iostream>
using namespace std;

void strcccat(char *to, const char *from)
{
	int lento = 0;
	int lenfrom = 0;
	while (to[lento])
		lento++;
	while (from[lenfrom])
		lenfrom++;
	int l = 0;
	for (int a = lento, l = 0; a < lento + lenfrom + 1; a++, l++)
		to[a] = from[l];
}


void main()
{
	char to[10];
	char from[10];
	cin >> to;
	cin >> from;
	strcccat(to, from);
	cout << to;
	system("pause");
}