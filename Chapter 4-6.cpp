/* std::string - ���ڿ� �Ұ�*/
#include<iostream>
#include<string> // to use "string" this has to be mantioned.
using namespace std;

int main()
{
	const string my_hello = "Hello, world";// ����� �߰� �ڷ���--> ���� �󸶵��� ���� �� �� �� �ִ�.
	const char my_strs[] = "Hello world";
	string my_ID = "123"; // ""�� ������ ������ �����. string���� ����->������ �Ͻ��� �� ��ȯ ����� ���� ������ ""�� ����� ������ ���������� ����� ����ȯ�� ���� ������ ������ �����.

	cout << my_hello << endl;
	cout << my_strs << endl;

	// Giving an input.

	/*cout << "What is yout name" << endl;
	char ch;
	cin >> ch;*/

	cout << "What is yout name? : " << endl;
	string name;
	/*cin >> name;*/
	std::getline(std::cin, name); // it gives input until the enter.--> the "space bar" can be used.

	cout << "Your age? : " << endl;
	string age;
	/*cin >> age;*/
	std::getline(std::cin, age);
	cout << name << " " << age << " " << endl;
	
	std::cin.ignore(32767, '\n');// '\n'�� �ö����� 32767���� ���ڸ� �����ض� ��� ��
	/*���� 32767�̶�� magic number�� ���ְ� ������ ���� #include<limits>�� �����ϰ�
	std::cin.ignore(std::numberic_limits<srd::streamsize>::max(),'\n')�� �������ָ� �ȴ�.
	������ �ڵ尡 �������.--> �پ��� ����� ���� ���̸� �ȴ�. ����� �����ٴ���, ���̺귯���� �����Ѵٴ��� ������.
	*/

	// adding char??
	string a("Hello, ");
	string b("World ");
	string hw = a + b;// this is called 'append'
	hw += "I can do!";
	// the creator of string made "string" to fuction the char as to numbers --> the chars can be operate as numbers. haha
	cout << hw << endl;

	string c("Hello world");

	cout << a.length() << endl;// it shows the lengh of char.
	return 0;
}