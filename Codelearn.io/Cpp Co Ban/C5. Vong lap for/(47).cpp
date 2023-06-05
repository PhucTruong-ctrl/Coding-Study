/*Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n và thực hiện hiển thị ra tổng các số lẻ từ 0 tới n.

Ví dụ nếu nhập n = 7 thì chương trình sẽ hiển thị ra màn hình:

16
Giải thích: 1 + 3 + 5 + 7 = 16*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
