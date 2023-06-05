/*Viết chương trình nhập từ bàn phím 3 số nguyên.
Sau đó hiển thị lên màn hình số lớn nhất trong 3 số này.*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        cout << a;
    }
    else if (b >= c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }

    return 0;
}
