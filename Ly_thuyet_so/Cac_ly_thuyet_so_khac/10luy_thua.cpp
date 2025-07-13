#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll power(int a, int b)
{
    if(b < 0)
    {
        return -1;
    }

    if(a == 0)
    {
        return 0;
    }

    if(b == 0)
    {
        return 1;
    }

    ll result = a;

    while(b > 1)
    {
        result *= result;

        if(b % 2 != 0)
        {
            result *= a;
        }

        b /= 2;
    }

    return result;
}

int main()
{
    int a, b;
    cin >> a >> b;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << power(a, b) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}