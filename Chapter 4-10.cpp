/* Struct - ����ü*/
#include<iostream>
#include<string>
using namespace std;

struct Person // 4+4+8+28+(2) = 48, --> serch for (2) <-- it is called padding. "Data structure" 
{
	double height; // 8byte
	float weight; //  4byte
	int age;      //4byte  
	string name; //28byte

	/*void Print()
	{
		cout << height << " " <<weight << " " << age << " " << name;  -->  " void Printperson" can bbe changed in this way.
		cout << endl;
	}*/
};


void PrintPerson(Person Human)
{
	cout << Human.height << " " << Human.weight<<" " << Human.age << " " << Human.name;
	cout << endl;
}

int main()
{
	Person me{2.0,100.0,20};
	PrintPerson(me);// - I thought using "cout" But it use PrintPerson.
	//me.print(); �ʿ��� parameter�� ��� void �ȿ� ��� �����Ƿ� �̷��� ǥ���� �����ϴ�.
	Person her;
	Person Her;

	cout << sizeof(Person) << endl;
	

	return 0;
}