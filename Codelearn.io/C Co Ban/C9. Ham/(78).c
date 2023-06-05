/*Cho mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết hàm trả về tổng các phần tử trong mảng arr.
Ví dụ nếu bạn nhập n = 5, arr = [7, 2, 8, 4, 9] như bên dưới:
5
7 2 8 4 9
Thì chương trình sẽ hiển thị lên:
30
Giải thích: 7 + 2 + 8 + 4 + 9 = 30*/
#include <stdio.h>

int sumOfArray(int arr[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
    }
    return s;
}

int main()
{
    int n;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", sumOfArray(arr, n));
    return 0;
}
