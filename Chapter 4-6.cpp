/* std::string - 문자열 소개*/
#include<iostream>
#include<string> // to use "string" this has to be mantioned.
using namespace std;

int main()
{
	const string my_hello = "Hello, world";// 사용자 추가 자료형--> 내가 얼마든지 개발 해 낼 수 있다.
	const char my_strs[] = "Hello world";
	string my_ID = "123"; // ""가 없으면 오류가 생긴다. string에는 정수->문자형 암시적 형 변환 기능이 없기 때문에 ""를 사용해 정수를 문자형으로 명시적 형변환을 주지 않으면 오류가 생긴다.

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
	
	std::cin.ignore(32767, '\n');// '\n'이 올때까지 32767개의 문자를 무시해라 라는 뜻
	/*위의 32767이라는 magic number를 없애고 싶으면 위에 #include<limits>를 선언하고
	std::cin.ignore(std::numberic_limits<srd::streamsize>::max(),'\n')을 선언해주면 된다.
	하지만 코드가 길어진당.--> 다양한 방법을 통해 줄이면 된다. 헤더로 보낸다는지, 라이브러리를 생성한다는지 등으로.
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