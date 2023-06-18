/**/

#include <iostream>

using namespace std;

int main()
{
	int a = 7;
	*(&a) += 1;
	cout << a;
	return 0;
}