/* Scoped Enumerrations (Enum Class) - 영역 제한 열거형 클래스*/
#include<iostream>
using namespace std;

int main()

{
	enum Color
	{
		RED, // -> 0
		Yellow, // -> 1
	};

	enum Fruit
	{
		Apple, // -> 0
		Mango, // -> 1
	};

	Color color = Yellow;
	Fruit fruit = Mango;

	/* Color color = Color::Yellow;
	Fruit fruit = Fruit::Mango; --> in this case compairing two values are blocked */

	if (color == fruit)
		cout << "Color is Fruit? " << endl; // Both  Yellow and Mango is 1. so Both are same.

	Color color1 = Color::RED;
	Color color1 = Color::Yellow; // -> it is similar with "namespace"

	return 0;
}