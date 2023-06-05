/*Cho số nguyên n được nhập từ bàn phím,
bạn hãy viết hàm đệ quy trả về tổng các số từ 1 tới n.
Ví dụ nếu bạn nhập n = 5 thì chương trình sẽ hiển thị lên màn hình
15 (do 1 + 2 + 3 + 4 + 5 = 15).*/
#include <stdio.h>

int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}