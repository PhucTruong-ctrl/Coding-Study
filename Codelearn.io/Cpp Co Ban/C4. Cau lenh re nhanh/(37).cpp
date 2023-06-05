/*Viết chương trình nhập từ bàn phím 2 số nguyên a, b.
Bạn hãy kiểm tra xem giá trị của cả a và b có khác 0 không. Nếu có hiển thị:

a is not equal to 0 and b is not equal to 0
Ngược lại nếu a hoặc b có giá trị bằng 0 thì hiển thị:

a is equal to 0 or b is equal to 0*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a != 0 && b != 0)
    {
        cout << "a is not equal to 0 and b is not equal to 0";
    }
    else
    {
        cout << "a is equal to 0 or b is equal to 0";
    }
    return 0;
}
