/*Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n và hiển thị ra màn hình:

Nếu n là số nguyên dương thì hiển thị ra:

n is a positive number
Nếu n là số nguyên âm thì hiển thị ra:

n is a negative number
Nếu n = 0 thì hiển thị ra:

n is equal to 0*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << "n is a positive number";
    }
    else if (n < 0)
    {
        cout << "n is a negative number";
    }
    else
    {
        cout << "n is equal to 0";
    }

    return 0;
}
