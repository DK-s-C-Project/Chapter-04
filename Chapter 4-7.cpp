/* Enumerated Types ������ - ����� �ɼ��� �پ��ϰ� ǥ���ϱ� ���� ����Ѵ�.*/
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
	COLOR_BLACK,// ������ ���� ���鼭 ���� ���������� ����Ѵ�.
	COLOR_RED,// 1
	COLOR_YELLO,// 2
	COLOR_BLUE,// 3
	COLOR_SILVER,// 4
};// whithout ";" it makes error. + also It cannot have a samename. whithout {}. --> ������ ��� ���� �̸��� ��ġ�� �ȵȴ�.



int main()
{
	Color paint = COLOR_BLACK; // �ʱ�ȭ�� �ϰ� �ִ�. �ٸ� Ÿ�԰� �����ϴ�.
	Color house = COLOR_BLUE;
	cout << paint << endl;

	int color_id = COLOR_SILVER; // ������ �־ ��� �� �� �� �ִ�. 

	cout << color_id << endl;

	Color my_color =3;//casting�� ���� ������ �����ؼ� �ִ� ���� �ȵȴ�.
	cin >> my_color;// cin ��� �Ұ���
	
	//���� �Է��� �ϰ� �ʹٸ� if���� ����� ��ȸ �ϴ� ����� �ִ�.
	int in_number;
	cin >> in_number;

	if (in_number == 0)my_color = COLOR_SILVER;
	{

	}
	// string�� ����� �� �� �ִ�.
	return 0;
}