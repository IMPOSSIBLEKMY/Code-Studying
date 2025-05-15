#include <bits/stdc++.h>
#define ll long long //? -9223372036854775808 <= x <= 9223372036854775807

using namespace std;

ll uoc_chung_lon_nhat_1(ll a, ll b)
//! Slow greatest common divisor
//! Thời gian giải thuật: O(min(a,b))
//! 1. Chọn số nhỏ nhất giữa a và b, đặt i với số nhỏ nhất
//! 2. Tiếp tục chia lần lượt a và b cho i giảm dần cho đến khi ra kết quả cuối cùng.
{
    if (a < 0 || b < 0)
    {
        return 0;
    }

    if (a < b)
    {
        ll temp = a;
        a = b;
        b = temp;
    }

    if (b == 0)
    {
        return a;
    }

    ll i = b;

    while (i != 1)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }

        i--;
    }

    return i;
}

ll uoc_chung_lon_nhat_2(ll a, ll b)
//! Fast greatest common divisor
//! Thời gian giải thuật: O(log(min(a,b)))
//! Chọn số nhỏ nhất giữa a và b, lấy số đó chia dư cho số lớn hơn và làm theo giải thuật Euclidean
//! Euclidean Algorithm: https://www.freecodecamp.org/news/euclidian-gcd-algorithm-greatest-common-divisor/
{
    if (a < 0 || b < 0)
    {
        return 0;
    }

    if (a < b)
    {
        ll temp = a;
        a = b;
        b = temp;
    }

    if (b == 0)
    {
        return a;
    }

    while (b != 0)
    {
        ll temp = a;
        a = b;
        b = temp % b;
    }

    return a;
}

int main()
{
    ll a, b;
    cin >> a >> b;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << uoc_chung_lon_nhat_2(a, b) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}