/* Global Variavble(전역 변수) Static Variable(정적 변수) Internal Linkage(내부 연결) External Linkage(외부 연결)*/

/*Before the start the "Global Variable(전역 변수)" is the varible that it could be used in every develpoment situation. it
  may sound very comfortable, but it is not good to use.*/ 

#include<iostream>
using namespace std;

//int value = 123;
//
//int main()
//{
//	cout << value << endl;//123
// 
//	int value = 1; // it is called shadowing. which means covering up the piled names.
//
//	cout << ::value << endl;// :: gives the value of separate space. 123
//	cout << value << endl;//1
//
//	return 0;
//}

void doSomething()
{
	int a = 1; // by putting 'static' the value will keep increase.

	++a;
	cout << a << endl;
}// Static 이란 이 공간 안에서 메모리를 한 부분만 사용하고(int a = 1), 초기화를 1번 밖엔 안한다.
/* Static 변수를 사용하고 나면 이것을 재 선언을 하였을때, 이 변수를 한 번 사용했다는 기록이 어딘가에 남겨져 있어 처음 값인 1을 대입하는 것이 아닌 한번 초기화 한 값을(++a)를 대입하게 된다. 
  ==>  곧 Static 변수를 사용하려면 처음에 초기화를 해야 한다!! ==> 초기화를 하지 않으면 Static 변수를 사용 할 수 없다. (메모리의 관점에서 봐야 한다.nb)*/

int main()
{
	doSomething();
	doSomething(); // even operating more doSomethings the output never changes. --> because it has no static. 
	return 0;
}



/* Internal Linkage vs External Linkage

When you write an implementation file (.cpp, .cxx, etc) your compiler generates a translation unit. This is the object file from your implementation file plus all the headers you #included in it.

Internal linkage refers to everything only in scope of a translation unit.
External linkage refers to things that exist beyond a particular translation unit. In other words, accessible through the whole program, which is the combination of all translation units (or object files).


*/