/*Cho 2 biến a và b kiểu số nguyen được nhập vào từ bàn phím,
bạn hãy viết chương trình hoán đổi giá trị của hai biến này sau đó hiển thị ra màn hình:
after swapping, a = {P1}, b = {P2}
Với {P1} và {P2} lần lượt là giá trị của a và b sau khi đã hoán đổi.*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c = a;
    a = b;
    b = c;
    cout << "after swapping, a = " << a << ", b = " << b;
    return 0;
}
