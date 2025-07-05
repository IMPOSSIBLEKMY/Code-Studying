#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll findGreatestCommonDivisorEuclid(ll a, ll b)
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

    ll r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

void printCoPrimeInRange(ll a, ll b)
{
    if (a > b)
    {
        ll temp = a;
        a = b;
        b = temp;
    }
    
    if(b <= 0)
    {
        return;
    }
    
    if(a <= 0)
    {
        a = 1;
    }

    while(a <= b)
    {
        ll b1 = a;
        while(b1 <= b)
        {
            if(findGreatestCommonDivisorEuclid(a, b1) == 1)
            {
                cout << "(" << a << ", " << b1 << ")" << endl;
            }
            
            b1++;
        }
        
        a++;
    }
}

int main()
{
    ll a, b;
    cin >> a >> b;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    printCoPrimeInRange(a, b);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}