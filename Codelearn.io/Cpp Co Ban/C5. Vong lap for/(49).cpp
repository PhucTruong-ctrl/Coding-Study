/*Bạn hãy viết chương trình nhập từ bàn phím số nguyên n và hiển thị ra màn hình n! (n giai thừa).

Ví dụ nếu nhập n = 5 thì chương trình sẽ hiển thị ra màn hình:

120
Giải thích: 1 * 2 * 3 * 4 * 5 = 120.*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << factorial;
    return 0;
}
