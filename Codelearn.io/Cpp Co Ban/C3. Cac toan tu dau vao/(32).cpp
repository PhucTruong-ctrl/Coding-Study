/*Bạn hãy viết chương trình nhập vào một ký tự từ bàn phím
và thực hiện hiển thị ký tự tiếp theo trong bảng bảng chữ cái của ký tự đó ra màn hình.*/

#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;
    c = c + 1;
    cout << c;
    return 0;
}
