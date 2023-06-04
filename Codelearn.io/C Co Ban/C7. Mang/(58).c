/*Cho một mảng các số nguyên n phần tử arr.
Bạn hãy viết chương trình hiển thị những số lớn hơn hoặc bằng 0
và nhỏ hơn hoặc bằng 10 trong mảng arr.
Ví dụ nếu bạn nhập:
8
3 -7 2 5 9 -6 10 12
Thì màn hình hiển thị lên:
3 2 5 9 10*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0 && arr[i] <= 10)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}