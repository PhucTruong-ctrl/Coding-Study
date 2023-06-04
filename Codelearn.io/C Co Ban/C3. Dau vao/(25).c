/*Viết chương trình nhập vào bán kính r của một hình tròn và
hiển thị ra màn hình chu vi của hình tròn đó biết π = 3.14:
Circumference = {P}
Với {P} là chu vi của hình tròn có bán kính r.
Ví dụ nếu bạn nhập:
7.5
Thì chương trình sẽ in ra:
Circumference = 47.100000*/

#include <stdio.h>

int main()
{
    double r;
    scanf("%lf", &r);
    printf("Circumference = %f", 2 * r * 3.14);
    return 0;
}