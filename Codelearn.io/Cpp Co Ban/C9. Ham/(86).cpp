/*Cho hình tròn có bán kính r được nhập từ bàn phím,
bạn hãy viết hàm trả về chu vi của hình tròn này biết π = 3.14.
Ví dụ nếu bạn nhập:
3.5
Thì chương trình sẽ hiển thị ra:
21.98*/

#include <iostream>

using namespace std;

double circumference(double r)
{
    return 2 * r * 3.14;
}

int main()
{
    double r;
    cin >> r;
    cout << circumference(r);
    return 0;
}
