/* Using ���� ��ȣ��(Ambiguity)*/
// Cpp���� �Լ��̸��� �����ϰ� �����ε�, �Ǵ� �������̵� �ϴ� ��찡 �ִµ� �̶� Cpp�� ��� ���� ��������� ���� �䱸�� ���� �ִ�. -->  �̶� using���� ����Ѵ�.
#include<iostream>
using namespace std; // ���⼭ ���� �־���;; �ѹ� �����ϸ� ������ �ʴ� �� ������ ��� �� ����� ����. 

namespace a
{
	int my_var(10);
}

namespace b
{
	int my_var(10);
	int your_var(20);
}

int main()
{

	using namespace a;
	using namespace b;

	cout << a::my_var << endl;// when the fuction has same name the error comes out. so it needs a section of a fuuctions namespace.
	cout << your_var << endl;

	//{
	//	using namespace a;
	//	cout << my_var << endl;
	//}

	//{
	//	using namespace b;
	//	cout << my_var << endl;
	//} --> or write it like this

	// ���� namespace�� ����� ������ ���������� �ʱ�ȭ�� �Ǳ� ������ ��û�� ������ �߻� �� �� �ִ�. �׷��� ���� ����� �ϰ� �ȴٸ� �����սô�.
	return 0;
}