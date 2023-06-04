/*Cho một mảng các số nguyên n phần tử arr và số nguyên k được nhập từ bàn phím.
Bạn hãy viết chương trình hiển thị ra màn hình số phần tử có giá trị bằng k trong mảng arr.
Ví dụ nếu bạn nhập n = 6, arr = [3, 8, 7, 8, 3, 3], k = 3 như bên dưới:
6
3 8 7 8 3 3
3
Thì màn hình hiển thị lên:
3
Giải thích: trong mảng có 3 phần tử có giá trị bằng 3.*/

#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count;
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            count++;
        }
    }
    printf("%d", count);
}