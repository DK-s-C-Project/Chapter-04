/* Type aliases - �ڷ������� ���� �ٿ��ֱ�*/
#include<iostream>
#include<vector>
#include<cstdint> // �����ʺ� ����
/*
������ �ʺ� ���� (fixed-width integers)
C++�� ���� ������ Ư�� �ּ� ũ�⸦ ���� ���� �����ϰ�, �ý��ۿ� ���� ũ�Ⱑ �� Ŀ�� �� �ִ�.
���� ������ ũ�Ⱑ �����Ǿ� ���� ���� ����:
����, ������ ���� �߿��ߴ� C�� �Ž��� �ö󰡺���. 
�׶� C�� �����Ϸ��� ��� ��ǻ�� ��Ű��ó���� ���� �� �۵��ϴ� int�� ũ�⸦ ������ �� �ֵ��� �ǵ������� ������ ũ�⸦ ���� �δ� ���� �����ߴ�. 
���α׷��ӷμ�, ��� ��Ű��ó�� ���� ũ�Ⱑ �޶��� �� �ִ� ������ �ٷ�� ���� �� �͹��Ͼ��� ���̴�.
*/
using namespace std;

int main()
{
	typedef double distance_t; //_t -> the name of the type.
	
	// ���� �ʺ� ����
	int8_t i(97);

	double my_distance;

	distance_t home2work;// it means "in my program, i will use distance in double"

	vector<pair<string, int> > pairlist;// �̷��� ������ �ڷ����� ���� �� �� �� �ִ�.
	
	// vector<pair<string, int> > pairlist; <-- this can turn in to dottom statement. Beacame more simple!! , used common in Linux.
	typedef vector<pair<string, int> > pairlist_t;
	pairlist_t pairlist1;
	pairlist_t pairlist2;

	// also it could be written in "using"
	using pairlist_t = vector<pair<string, int> >;

	return 0;
}