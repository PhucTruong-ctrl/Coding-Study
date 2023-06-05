/*Cho biến name kiểu string được nhập từ bàn phím, bạn hãy viết hàm hiển thị ra màn hình thông tin sau:
Hello {P}
Với {P} là giá trị của biến name*/

#include <iostream>

using namespace std;

void show(string name)
{
    cout << "Hello " << name;
}

int main()
{
    string name;
    cin >> name;
    show(name);
    return 0;
}
