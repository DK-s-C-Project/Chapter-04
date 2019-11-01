/* Struct - 구조체*/
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
	//me.print(); 필요한 parameter가 모두 void 안에 들어 있으므로 이렇게 표현이 가능하다.
	Person her;
	Person Her;

	cout << sizeof(Person) << endl;
	

	return 0;
}