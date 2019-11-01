/* Using 문과 모호성(Ambiguity)*/
// Cpp에서 함수이름을 동일하게 오버로딩, 또는 오버라이딩 하는 경우가 있는데 이때 Cpp는 어느 것을 사용할지에 대해 요구할 때가 있다. -->  이때 using문을 사용한다.
#include<iostream>
using namespace std; // 여기서 쓰고 있었네;; 한번 선언하면 지우지 않는 한 선언을 취소 할 방법이 없다. 

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

	// 만약 namespace를 헤더에 넣으면 전역적으로 초기화가 되기 때문에 엄청난 오류가 발생 할 수 있다. 그러니 만약 사용을 하게 된다면 조심합시다.
	return 0;
}