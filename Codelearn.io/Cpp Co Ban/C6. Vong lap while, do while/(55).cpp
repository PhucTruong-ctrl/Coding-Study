/*Bạn hãy điền code vào dấu ... để màn hình hiển thị ra các số từ 1 tới 50.*/

#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i > 50)
        {
            break;
        }

        cout << i << " ";
    }
    return 0;
}
