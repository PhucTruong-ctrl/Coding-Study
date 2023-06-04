/*Cho một mảng 2 chiều các số nguyên n hàng m cột arr được nhập từ bàn phím.
Bạn hãy viết chương trình tính tổng các phần tử trong mảng arr.
Ví dụ nếu bạn nhập n = 2, m = 3, arr = [[5, 7, 3], [1, 2, 4]] như bên dưới:
2 3
5 7 3
1 2 4
Thì màn hình sẽ hiển thị ra:
22*/

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}