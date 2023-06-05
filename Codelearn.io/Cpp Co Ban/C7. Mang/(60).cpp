/*Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình hiển thị ra phần tử lớn nhất trong mảng.
Ví dụ nếu bạn nhập n = 5, arr = [2, 7, 6, 8, 9] như bên dưới:

5
2 7 6 8 9
Thì màn hình sẽ hiển thị:

9
Giải thích: mảng này có 5 phần tử và 9 là phần tử lớn nhất trong mảng.*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << max << " ";
    return 0;
}
