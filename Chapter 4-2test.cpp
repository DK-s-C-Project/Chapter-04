/* The test of linkage */
#include<iostream>
using namespace std;

// Forward declaration
extern void doSomething();// calles testfor4-2
// extern int a; --> in this case the code gives error. because testfor4-2 has no int a.
extern int a;
// extern int a = 123; --> eventhough there were no "int a" in testfor4-2, this makes code run. why??

int main()
{


	doSomething();
	cout << a << endl;
	return 0;
}