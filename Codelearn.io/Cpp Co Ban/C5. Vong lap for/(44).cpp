/*Bạn hãy viết chương trình nhập từ bàn phím số nguyên a và b. Sau đó hiển thị ra các số từ a tới b:

Ví dụ nếu nhập a = 5, b = 9 thì chương trình sẽ hiển thị ra màn hình:

5 6 7 8 9 */

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        cout << i << " ";
    }
    return 0;
}
