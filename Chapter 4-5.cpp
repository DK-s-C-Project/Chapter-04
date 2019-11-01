/* Implicit Type Conversion(암시적 형 변환) & Explicit Type Conversion(명시적 형 변환) */
// 암시적 형변환 --> 사용자가 형 변환을 하는 것이 아니라, 프로그렘이 강제적으로 형변환을 하는 경우이다.  float/double형의 소숫점뒷자리를 빼고 넣어야 한다.
// 명시적 형변환 --> static_cast::를 사용한다.
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
// 파일로 정리 해놓았으니 확인 해 볼 것.

// int -> unsigned int -> long -> unsigned long
// -> long long, unsugned long long -> float -> double -> long double