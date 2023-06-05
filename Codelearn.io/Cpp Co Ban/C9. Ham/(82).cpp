/*Cho mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết hàm trả về tổng các phần tử trong mảng arr.
Ví dụ nếu bạn nhập n = 5, arr = [7, 2, 8, 4, 9] như bên dưới:
5
7 2 8 4 9
Thì chương trình sẽ hiển thị lên:
30
Giải thích: 7 + 2 + 8 + 4 + 9 = 30*/

#include <iostream>

using namespace std;

int sumOfArray(int arr[1000], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sumOfArray(arr, n);
    return 0;
}
