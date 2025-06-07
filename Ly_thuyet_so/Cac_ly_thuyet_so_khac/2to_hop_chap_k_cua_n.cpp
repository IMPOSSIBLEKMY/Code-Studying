#include <bits/stdc++.h>

// @ Long long có giới hạn từ -9223372036854775808 -> 9223372036854775807
#define ll long long

using namespace std;

ll calculateCombination(int n, int k)
{
    if (n < 0 || k < 0)
    {
        return 0;
    }

    if (k > n)
    {
        return 0;
    }

    if (k == 0 || k == n)
    {
        return 1;
    }

    if (k == 1 || k == n - 1)
    {
        return n;
    }

    ll numerator = 1;
    ll denominator = 1;
    for (int i = 1; i <= k; i++)
    {
        numerator *= n;
        denominator *= i;
        n--;
    }

    return (numerator / denominator);
}

int main()
{
    int n, k;
    cin >> n >> k;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << calculateCombination(n, k) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed  << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}