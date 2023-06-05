/*Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình hiển thị ra tổng của phần tử đầu tiên và cuối cùng
trong mảng arr. Ví dụ nếu bạn nhập n = 5, arr = [2, 7, 6, 8, 9] như bên dưới:

5
2 7 6 8 9
Thì màn hình sẽ hiển thị:

11*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << arr[0] + arr[n - 1];
    return 0;
}
