/*Bạn hãy điền code vào dấu ... để màn hình hiển thị ra các số từ 1 tới 50.*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i == 51)
        {
            break;
        }
        printf("%d ", i);
    }
    return 0;
}