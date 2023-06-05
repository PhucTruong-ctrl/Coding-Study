/*Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n.
Sau đó kiểm tra xem nếu n là số chẵn thì hiển thị ra:
n is an even number
Ngược lại, nếu n là số lẻ thì hiển thị ra:
n is an odd number*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "n is an even number";
    }
    else
    {
        cout << "n is an odd number";
    }
    return 0;
}
