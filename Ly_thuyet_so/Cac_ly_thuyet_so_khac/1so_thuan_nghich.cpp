#include <bits/stdc++.h>
using namespace std;

// @ Long long có giới hạn từ -9223372036854775808 -> 9223372036854775807
#define ll long long

bool isPalindromicNumber(ll number)
{
    if (number < 0)
    {
        return false;
    }

    ll copyNumber = number;

    ll reversednumber = 0;
    while (number > 0)
    {
        reversednumber = reversednumber * 10 + number % 10;
        number /= 10;
    }

    return (reversednumber == copyNumber);
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