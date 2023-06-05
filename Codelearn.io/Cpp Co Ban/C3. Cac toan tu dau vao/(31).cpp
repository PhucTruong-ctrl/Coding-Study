/*Viết chương trình nhập vào bán kính r của một hình tròn
và hiển thị ra màn hình chu vi của hình tròn đó biết π = 3.14:
Circumference = {P}
Với {P} là chu vi của hình tròn có bán kính r.*/

#include <iostream>

using namespace std;

int main()
{
    double r;
    cin >> r;
    cout << "Circumference = " << 2 * r * 3.14;
    return 0;
}
