/*Bạn hãy điền code vào dấu ... để màn hình hiển thị ra:
Value of a: 20*/

#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int *p;
	p = &a;
	*p = 20;
	cout << "Value of a: " << a;
	return 0;
}