/*Bạn hãy viết chương trình nhập từ bàn phím một số nguyên n và hiển thị ra màn hình các ước của n với n > 0.

Ví dụ nếu nhập n = 12 thì chương trình sẽ hiển thị ra màn hình:

1 2 3 4 6 12*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
