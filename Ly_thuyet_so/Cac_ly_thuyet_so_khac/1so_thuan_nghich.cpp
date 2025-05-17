#include <bits/stdc++.h>
using namespace std;

// @ Long long có giới hạn từ -9223372036854775808 -> 9223372036854775807
#define ll long long

// ! Kiểm tra số thuận nghịch - đúng hay sai

// # ĐN         : Số đọc từ trái sang phải hay từ phải sang trái đều giống nhau
// # VD         : 0, 3, 121, 1331, 9223372036302733229
// # Độ phức tạp: O(log10(n))

// $ 1. Không xét số âm
// $ 2. Ý tưởng đảo ngược số:
// $        VD: 357 => 0*10 + 7  = 7
// $                => 7*10 + 5  = 75
// $                => 75*10 + 3 = 753

bool isPalindromicNumber(ll num)
{
    if (num < 0)
    {
        return false;
    }

    ll copyNum = num;

    ll reversedNum = 0;
    while (num > 0)
    {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    return (reversedNum == copyNum);
}

int main()
{
    ll num;
    cin >> num;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if (isPalindromicNumber(num))
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