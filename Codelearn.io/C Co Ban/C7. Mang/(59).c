/*Cho một mảng các số nguyên n phần tử arr.
Bạn hãy viết chương trình sắp xếp các phần tử của mảng theo thứ tự tăng dần
và hiển thị ra màn hình mảng sau khi đã sắp xếp.
Ví dụ nếu bạn nhập n = 6, arr = [5,3,2,6,7,7] như bên dưới:
6
5 3 2 6 7 7
Thì màn hình hiển thị lên:
2 3 5 6 7 7*/
#include <stdio.h>

int main()
{
    int n;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                // Nếu arr[i] > arr[j] thì hoán đổi giá trị của arr[i] và arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}