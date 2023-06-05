/*Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n và thực hiện hiển thị các số từ n về -5.

Ví dụ nếu nhập n = 5 thì chương trình sẽ hiển thị ra màn hình:

5 4 3 2 1 0 -1 -2 -3 -4 -5*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= -5; i--)
    {
        cout << i << " ";
    }

    return 0;
}
