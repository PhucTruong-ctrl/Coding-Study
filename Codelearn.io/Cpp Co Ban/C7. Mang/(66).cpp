/*Cho một mảng các số nguyên n phần tử arr.
Bạn hãy viết chương trình sắp xếp các phần tử của mảng theo thứ tự tăng dần và
hiển thị ra màn hình mảng sau khi đã sắp xếp.
Ví dụ nếu bạn nhập n = 6, arr = [5,3,2,6,7,7] như bên dưới:
6
5 3 2 6 7 7
Thì màn hình hiển thị lên:
2 3 5 6 7 7*/

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
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
