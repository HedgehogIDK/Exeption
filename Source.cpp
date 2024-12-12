#include "OutOfRange.h"

int main() {
	setlocale(LC_ALL, "RUS");

	int number = 7, number2 = 1;

	try
	{
		if (number > number2) throw OutOfRange("LOL");
		printf("F{F{F{F{");
	}
	catch (const Exeption& e)
	{
		cout << e.what();
	}

	return 0;
}