/*Cho mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết hàm trả về số phần tử lẻ trong mảng arr.
Ví dụ nếu bạn nhập n = 7, arr = [2, 5, 3, 6, 9, 4, 1] như bên dưới:
7
2 5 3 6 9 4 1
Thì chương trình sẽ hiển thị lên:
4
Giải thích: trong mảng arr có 4 số lẻ.*/

#include <iostream>

using namespace std;

int countOddNumberInArray(int arr[1000], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            count++;
        }
    }
    return count;
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
    cout << countOddNumberInArray(arr, n);
    return 0;
}
