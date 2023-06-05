/*Viết chương trình nhập từ bàn phím 3 số nguyên a, b, c.
Sau đó hãy kiểm tra xem a, b, c có tạo thành một dãy số tăng dần hoặc giảm dần hay không.

Nếu a ≤ b và b ≤ c thì chỉ hiển thị:

increasing
Nếu a ≥ b và b ≥ c thì hiển thị:

decreasing
Ngược lại, nếu không vào 1 trong hai trường hợp trên thì hiển thị:

neither increasing nor decreasing order*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= b && b <= c)
    {
        cout << "increasing";
    }
    else if (a >= b && b >= c)
    {
        cout << "decreasing";
    }
    else
    {
        cout << "neither increasing nor decreasing order";
    }
    return 0;
}
