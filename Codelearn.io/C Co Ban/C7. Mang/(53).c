/*Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình hiển thị ra phần tử lớn nhất trong mảng.
Ví dụ nếu bạn nhập n = 5, arr = [2, 7, 6, 8, 9] như bên dưới:
5
2 7 6 8 9
Thì màn hình sẽ hiển thị:
9
Giải thích: mảng này có 5 phần tử và 9 là phần tử lớn nhất trong mảng.*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int maxVal = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxVal)
        {
            maxVal = a[i];
        }
    }
    printf("%d", maxVal);
    return 0;
}