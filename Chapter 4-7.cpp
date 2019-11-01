/* Enumerated Types 열거형 - 비슷한 옵션을 다양하게 표연하기 위해 사용한다.*/
#include<iostream>
#include<typeinfo>
using namespace std;

//int computeDamge(int weapon_id)
//{
//	if (weapon_id == 0)
//	{
//		return 1;
//	}
//
//	if (weapon_id == 1)
//	{
//		return 2;
//	}
//
//	if (weapon_id == 2)
//	{
//		return 3;
//	}
//} --> too complicated.

enum Color
{
	COLOR_BLACK,// 밑으로 내려 가면서 값이 순차적으로 상승한다.
	COLOR_RED,// 1
	COLOR_YELLO,// 2
	COLOR_BLUE,// 3
	COLOR_SILVER,// 4
};// whithout ";" it makes error. + also It cannot have a samename. whithout {}. --> 범위에 상관 없이 이름이 겹치면 안된다.



int main()
{
	Color paint = COLOR_BLACK; // 초기화를 하고 있다. 다른 타입과 동일하다.
	Color house = COLOR_BLUE;
	cout << paint << endl;

	int color_id = COLOR_SILVER; // 변수에 넣어서 사용 할 수 도 있다. 

	cout << color_id << endl;

	Color my_color =3;//casting은 가능 하지만 강제해서 넣는 것은 안된다.
	cin >> my_color;// cin 사용 불가능
	
	//굳이 입력을 하고 싶다면 if문을 사용해 우회 하는 방법이 있다.
	int in_number;
	cin >> in_number;

	if (in_number == 0)my_color = COLOR_SILVER;
	{

	}
	// string을 사용할 수 도 있다.
	return 0;
}