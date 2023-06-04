/*Cho một mảng 2 chiều các số nguyên n hàng m cột arr được nhập từ bàn phím.
Bạn hãy viết chương trình tính tổng các phần tử chia hết cho 5 trong arr.
Ví dụ nếu bạn nhập
n = 3, m = 4, arr = [[10, 4, 8, 2], [5, 6, 4, 9], [20, 3, 8, 1]] như bên dưới:
3 4
10 4 8 2
5 6 4 9
20 3 8 1
Thì màn hình sẽ hiển thị ra:
35
Giải thích: Tổng các phần tử chia hết cho 5 trong arr là 10 + 5 + 20 = 35*/

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 5 == 0)
            {
                s += a[i][j];
            }
        }
    }
    printf("%d", s);
    return 0;
}