/*Cho hình tròn có bán kính r được nhập từ bàn phím,
bạn hãy viết hàm trả về chu vi của hình tròn này biết π = 3.14.
Ví dụ nếu bạn nhập:
3.5
Thì chương trình sẽ hiển thị ra:
21.98*/
#include <stdio.h>

double circumference(double r)
{
    return 2 * r * 3.14;
}

int main()
{
    double r;
    scanf("%lf", &r);
    printf("%f", circumference(r));
    return 0;
}