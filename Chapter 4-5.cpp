/* Implicit Type Conversion(�Ͻ��� �� ��ȯ) & Explicit Type Conversion(����� �� ��ȯ) */
// �Ͻ��� ����ȯ --> ����ڰ� �� ��ȯ�� �ϴ� ���� �ƴ϶�, ���α׷��� ���������� ����ȯ�� �ϴ� ����̴�.  float/double���� �Ҽ������ڸ��� ���� �־�� �Ѵ�.
// ����� ����ȯ --> static_cast::�� ����Ѵ�.
#include<iostream>
#include<typeinfo>
#include<iomanip>
using namespace std;

int main()
{
	//int a = 123.0;
	//cout << typeid(a).name() << endl; // The Example of Implicit Type Conversion
	//cout << typeid(4.0).name() << endl; // This show the user, the type of the variable.
	//return 0;

	double e = 0.12345679;
	float f = e;

	cout << std::setprecision(12) << f << endl;
}  

/* signed vs unsigned*/
// ���Ϸ� ���� �س������� Ȯ�� �� �� ��.

// int -> unsigned int -> long -> unsigned long
// -> long long, unsugned long long -> float -> double -> long double