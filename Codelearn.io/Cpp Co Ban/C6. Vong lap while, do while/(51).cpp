/*Bạn hãy viết chương trình nhập vào bàn phím số nguyên n và hiển thị ra các số chẵn từ n tới 100.

Ví dụ nếu nhập n = 90 thì chương trình sẽ hiển thị ra màn hình:

90 92 94 96 98 100*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n <= 100)
    {
        if (n % 2 == 0)
        {
            cout << n << " ";
        }
        n++;
    }

    return 0;
}
