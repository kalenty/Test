//my first program code in vim.
//version1.0
#include <iostream>
#include <functional>
using namespace std;

int check(int a, int b)
{
	return a > b ? 1 : 0;
}
int main()
{
	cout << "Hello world!" << endl;
	//intend to say hello world and test in git.
	auto check4 = bind(check, _1, _2);
	reutrn 0;
}
