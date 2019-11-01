/* Auto Keyword & Type Inference (자료형 추론) */
#include<iostream>
using namespace std;

int add(int x, int y)// in () the auto cannot be used. Beacuse 
{
	return x + y;
}
int main()
{
	int a = 123;
	auto b = 123; // 자료형의 Type을 스스로 결정하게 해주는 type.
	// auto a; --> worng sentence. because there are no number for decision.
	auto c = 1 + 2.0; // In this case the user have to notice the outputs integer.

	auto result = add(1, 2);

	cout << result << endl;

	return 0;
}