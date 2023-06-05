/*Viết chương trình nhập từ bàn phím số nguyên a.
Bạn hãy kiểm tra xem a có nằm trong đoạn [10, 100] không, nếu có thì hiển thị ra màn hình:

{P} is in the range [10, 100]
Ngược lại hiển thị ra màn hình:

{P} is not in the range [10, 100]
Với {P} là giá trị của biến a.*/

#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a >= 10 && a <= 100)
    {
        cout << a << " is in the range [10, 100]";
    }
    else
    {
        cout << a << " is not in the range [10, 100]";
    }
    return 0;
}
