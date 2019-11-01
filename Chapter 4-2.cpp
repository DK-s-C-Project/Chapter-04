/* Global Variavble(���� ����) Static Variable(���� ����) Internal Linkage(���� ����) External Linkage(�ܺ� ����)*/

/*Before the start the "Global Variable(���� ����)" is the varible that it could be used in every develpoment situation. it
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
}// Static �̶� �� ���� �ȿ��� �޸𸮸� �� �κи� ����ϰ�(int a = 1), �ʱ�ȭ�� 1�� �ۿ� ���Ѵ�.
/* Static ������ ����ϰ� ���� �̰��� �� ������ �Ͽ�����, �� ������ �� �� ����ߴٴ� ����� ��򰡿� ������ �־� ó�� ���� 1�� �����ϴ� ���� �ƴ� �ѹ� �ʱ�ȭ �� ����(++a)�� �����ϰ� �ȴ�. 
  ==>  �� Static ������ ����Ϸ��� ó���� �ʱ�ȭ�� �ؾ� �Ѵ�!! ==> �ʱ�ȭ�� ���� ������ Static ������ ��� �� �� ����. (�޸��� �������� ���� �Ѵ�.nb)*/

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