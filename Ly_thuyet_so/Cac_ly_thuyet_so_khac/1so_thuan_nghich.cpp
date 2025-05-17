#include <bits/stdc++.h>
using namespace std;

// @ Long long có giới hạn từ -9223372036854775808 -> 9223372036854775807
#define ll long long

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