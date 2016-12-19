#include <iostream>
#include <string>
#include <type_traits>

using namespace std;

int foo() { return 42; }
string bar() { return "hello"; }

template <typename FunctionType>
void ex1(FunctionType f) {
	typedef typename result_of<FunctionType()>::type result_type;
	result_type a = f();
	cout << a << endl;
}

int main()
{
	ex1(foo);
	ex1(bar);

	return 0;
}
