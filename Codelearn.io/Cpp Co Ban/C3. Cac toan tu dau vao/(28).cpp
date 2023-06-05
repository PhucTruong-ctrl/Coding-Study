/*Cho 2 biến a và b kiểu số nguyên được nhập vào từ bàn phím,
bạn hãy viết chương trình hiển thị ra màn hình các phép toán
trên 2 biến này giống như sau:
a + b = {P1}
a - b = {P2}
a * b = {P3}
a / b = {P4}
a % b = {P5}
Trong đó:
{P1} là tổng của a và b.
{P2} là hiệu của a và b.
{P3} là tích của a và b.
{P4} là thương của a và b.
{P5} là phần dư của phép chia a/b*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b;
    return 0;
}
