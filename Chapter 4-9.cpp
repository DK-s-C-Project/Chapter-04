/* Type aliases - 자료형에게 가명 붙여주기*/
#include<iostream>
#include<vector>
#include<cstdint> // 고정너비 정수
/*
고정된 너비 정수 (fixed-width integers)
C++은 정수 변수가 특정 최소 크기를 가질 것을 보장하고, 시스템에 따라서 크기가 더 커질 수 있다.
정수 변수의 크기가 고정되어 있지 않은 이유:
옛날, 성능이 가장 중요했던 C로 거슬러 올라가보자. 
그때 C는 컴파일러가 대상 컴퓨터 아키텍처에서 가장 잘 작동하는 int의 크기를 선택할 수 있도록 의도적으로 정수의 크기를 열어 두는 것을 선택했다. 
프로그래머로서, 대상 아키텍처에 따라 크기가 달라질 수 있는 변수를 다루는 것은 좀 터무니없는 일이다.
*/
using namespace std;

int main()
{
	typedef double distance_t; //_t -> the name of the type.
	
	// 고정 너비 정수
	int8_t i(97);

	double my_distance;

	distance_t home2work;// it means "in my program, i will use distance in double"

	vector<pair<string, int> > pairlist;// 이렇게 복잡한 자료형이 존재 할 수 도 있다.
	
	// vector<pair<string, int> > pairlist; <-- this can turn in to dottom statement. Beacame more simple!! , used common in Linux.
	typedef vector<pair<string, int> > pairlist_t;
	pairlist_t pairlist1;
	pairlist_t pairlist2;

	// also it could be written in "using"
	using pairlist_t = vector<pair<string, int> >;

	return 0;
}