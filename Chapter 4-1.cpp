/* ���� ������ ������ ���� �Ⱓ / ���(���չ�), ��Ī ����, �̸� �浹, �̸� ����� ��*/
#include<iostream>
using namespace std;

namespace work1
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}
}
// In version 2017 we can use namespace in namesoace.
int main()
{
	int apple = 5;// By define apple, we can use apple savings.
	
	cout << apple << endl;// --> stage 1

	

	{ 
		// int apple = 1; in this case, the 'int apple' stays in this block. So when the program gets out the 'int apple' will dissapear.
		apple = 1;
		cout << apple << endl; // --> stage 2 

	}

	cout << apple << endl;// the output is 1. Beacuse apple has changed in to 1 in stage 2. so it goes on.

	// :: is sope resoution operation ���� ���� ������.

	 
	work1::a;
	work1::doSomething();

	work2::a;
	work2::doSomething();

	return 0;
}