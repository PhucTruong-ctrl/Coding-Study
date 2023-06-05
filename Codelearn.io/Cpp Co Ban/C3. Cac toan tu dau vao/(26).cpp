/*Bạn hãy viết chương trình nhập từ bàn phím
chiều dài và chiều rộng của một hình chữ nhật
(chiều dài và chiều rộng của hình chữ nhật này là một số nguyên)
sau đó hiển thị ra màn hình:
Area = {P}
Với {P} là diện tích của hình chữ nhật.*/

#include <iostream>

using namespace std;

int main()
{
    int length, width;
    cin >> length >> width;
    cout << "Area = " << length * width;
    return 0;
}
