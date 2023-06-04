/*Cho một mảng các số nguyên n phần tử arr.
Bạn hãy viết chương trình tính tổng các số lẻ lớn hơn 0 trong mảng.
Ví dụ nếu bạn nhập:
8
3 -7 2 5 9 -6 10 12
Thì màn hình hiển thị lên:
17
Giải thích: 3 + 5 + 9 = 17.*/

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0 && arr[i] > 0)
        {
            sum += arr[i];
        }
    }
    printf("%d", sum);
    return 0;
}