/*Viết chương trình nhập từ bàn phím 3 số nguyên a, b, c.
Sau đó hãy kiểm tra xem a, b, c có tạo thành một dãy số tăng dần hoặc giảm dần hay không.
Nếu a ≤ b và b ≤ c thì chỉ hiển thị:
increasing
Nếu a ≥ b và b ≥ c thì hiển thị:
decreasing
Ngược lại, nếu không vào 1 trong hai trường hợp trên thì hiển thị:
neither increasing nor decreasing order*/

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a <= b && b <= c)
    {
        printf("increasing");
    }
    else if (a >= b && b >= c)
    {
        printf("decreasing");
    }
    else
    {
        printf("neither increasing nor decreasing order");
    }
    return 0;
}