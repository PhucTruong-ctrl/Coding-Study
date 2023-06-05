/*Viết chương trình nhập từ bàn phím điểm của một học sinh.
Biết điểm hợp lệ là điểm nằm trong đoạn từ 0 đến 10,
bạn hãy kiểm tra xem điểm vừa nhập có hợp lệ không, nếu có thì hiển thị ra màn hình:

The score is valid
Ngược lại nếu điểm không hợp lệ thì hiển thị:

The score is not valid*/

#include <iostream>

using namespace std;

int main()
{
    int score;
    cin >> score;
    if (score < 0 || score > 10)
    {
        cout << "The score is not valid";
    }
    else
    {
        cout << "The score is valid";
    }
    return 0;
}
