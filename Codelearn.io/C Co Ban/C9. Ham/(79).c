/*Cho mảng số nguyên n1 phần tử arr1 và mảng số nguyên n2 phần tử arr2 được nhập từ bàn phím.
Bạn hãy hoàn thiện hàm maxOfArray() để chương trình in ra số lớn nhất trong 2 mảng này.
Ví dụ nếu bạn nhập n1 = 5, arr1 = [1, 2, 3, 4, 5], n2 = 6, arr2 = [4, 2, 2, 6, 13, 1]
như bên dưới:
5
1 2 3 4 5
6
4 2 2 6 13 1
Thì màn hình sẽ hiển thị lên:
5 13
Giải thích: 5 và 13 lần lượt là số lớn nhất trong 2 mảng.*/
#include <stdio.h>

int maxOfArray(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n1, n2;
    int arr1[1000], arr2[1000];
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("%d %d", maxOfArray(arr1, n1), maxOfArray(arr2, n2));

    return 0;
}