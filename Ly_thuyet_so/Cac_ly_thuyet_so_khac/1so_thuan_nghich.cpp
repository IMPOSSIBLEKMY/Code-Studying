#include <bits/stdc++.h>
using namespace std;

//# Long long có giới hạn từ -9223372036854775808 -> 9223372036854775807
#define ll long long

//! Số thuận nghịch
//& Định nghĩa  : Số có đơn vị đọc từ trái qua phải hay phải qua trái đều giống nhau
//& Ví dụ       : 0, 1331, 1234321, 3, 9223372036302733229
//& Độ phức tạp : O(k) (k là số đơn vị của một số bất kì)

bool isPalindromicNumber(ll number)
{
    if (number < 0)
    {
        return false;
    }

    ll originalNumber = number;

    ll reversednumber = 0;
    while (number > 0)
    {
        reversednumber = reversednumber * 10 + number % 10;
        number /= 10;
    }

    return (reversednumber == originalNumber);
}

int main()
{
    ll number;
    cin >> number;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if (isPalindromicNumber(number))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}