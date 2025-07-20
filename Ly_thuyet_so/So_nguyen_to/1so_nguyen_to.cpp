#include <bits/stdc++.h>

#define ll long long

using namespace std;

// long long prime: 9223372036854775783

bool so_nguyen_to_1(ll n)
{
    if (n <= 1)
    {
        return false;
    }

    if (n == 2)
    {
        return true;
    }

    if (n % 2 == 0)
    {
        return false;
    }

    ll i = 3;

    // i * i <= n sẽ bị tràn số vì i * i bằng một số rất lớn, vượt xa long long nếu n là số cận của max long long
    while (i <= n / i)
    {
        if (n % i == 0)
        {
            return false;
        }

        i += 2;
    }

    return true;
}

bool so_nguyen_to_2(ll n)
{
    if(n <= 1)
    {
        return false;
    }

    if(n == 2 || n == 3)
    {
        return true;
    }

    // Loại trừ các số chia hết cho 2 và 3

    if(n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    // Các số nguyên tố được tạo bởi dãy 6k - 1 và (6k - 1) + 2
    // VD: 5 = 6*1 - 1
    //     7 = (6*1 - 1) + 2
    //     11 = 6*2 - 1
    //     13 = (6*2 - 1) + 2
    // Ở đây chúng ta tăng mỗi lần 6 số, không cần tăng giữa chúng 2 số.
    // Bởi vì đang xét số lượng ước là căn bậc hai, tăng 6 nhanh hơn tăng 2.

    // Một vài số cũng tạo ra bởi chúng nhưng nó không là số nguyên tố do chia hết cho chính dãy đó
    // VD: 25 = (6*4 - 1) + 2 chia hết cho 5 = 6*1 - 1
    //     49 = (6*8 - 1) + 2 chia hết cho 7 = (6*1 - 1) + 2

    ll i = 5;

    while(i <= n / i)
    {
        if(n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }

        i += 6;
    }

    return true;
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if (so_nguyen_to_2(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}