/* Auto Keyword & Type Inference (�ڷ��� �߷�) */
#include<iostream>
using namespace std;

int add(int x, int y)// in () the auto cannot be used. Beacuse 
{
	return x + y;
}
int main()
{
	int a = 123;
	auto b = 123; // �ڷ����� Type�� ������ �����ϰ� ���ִ� type.
	// auto a; --> worng sentence. because there are no number for decision.
	auto c = 1 + 2.0; // In this case the user have to notice the outputs integer.

	auto result = add(1, 2);

	cout << result << endl;

	return 0;
}