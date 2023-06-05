/*Bạn hãy viết chương trình tạo ra 2 biến a, b kiểu số thực.
Sau đó gán giá trị cho a = 10.5, b = 7 và thực hiện hiển thị ra màn hình:
a / b = {P}
Với {P} là thương của a và b ({P} là kết quả của phép chia: a / b).*/

#include <iostream>

using namespace std;

int main()
{
    double a = 10.5;
    double b = 7;
    cout << "a / b = " << a / (int)b;
    return 0;
}
