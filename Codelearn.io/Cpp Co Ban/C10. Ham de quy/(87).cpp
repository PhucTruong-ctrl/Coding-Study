/*Cho số nguyên dương n được nhập từ bàn phím, bạn hãy viết hàm đệ quy trả về n! (n giai thừa).
Ví dụ: nếu bạn nhập n = 5 thì chương trình sẽ hiển thị lên màn hình 120.*/

#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
