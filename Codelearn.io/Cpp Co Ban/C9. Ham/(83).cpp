/*Cho mảng các số nguyên n1 phần tử arr1 và mảng các số nguyên n2 phần tử arr2 được nhập từ bàn phím.
Bạn hãy hoàn thiện hàm maxOfArray() để chương trình hiển thị ra số lớn nhất trong 2 mảng này.
Ví dụ nếu bạn nhập n1 = 5, arr1 = [1, 2, 3, 4, 5], n2 = 6, arr2 = [4, 2, 2, 6, 13, 1] như bên dưới:
5
1 2 3 4 5
6
4 2 2 6 13 1
Thì màn hình sẽ hiển thị lên:
5 13
Giải thích: 5 và 13 lần lượt là số lớn nhất trong 2 mảng.*/

#include <iostream>

using namespace std;

int maxOfArray(int arr[1000], int n)
{
    int maxValue = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

int main()
{
    int n1, n2;
    int arr1[1000], arr2[1000];
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << maxOfArray(arr1, n1) << " " << maxOfArray(arr2, n2);

    return 0;
}
