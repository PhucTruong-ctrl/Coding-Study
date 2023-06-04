/*Bạn hãy điền code vào dấu ... để màn hình hiển thị ra các số lẻ từ 1 tới 100.*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}