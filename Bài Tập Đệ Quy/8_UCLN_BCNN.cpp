#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Tính UCLN, BCNN bằng đệ quy

// UCLN tính bằng công thức Euclid UCLN(a, b) = UCLN(b, a % b)

long long UCLN(ll a, ll b)
{
    if(b == 0)
    {
        return a;
    }

    return UCLN(b, a%b);
}

long long BCNN(ll a, ll b)
{
    return (a / UCLN(a, b)) * b;
}

int main()
{
    ll a, b;
    cin >> a >> b;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << UCLN(a, b) << endl;

    cout << BCNN(a, b) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}