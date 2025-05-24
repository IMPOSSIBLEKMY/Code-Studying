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

    while (b != 0)
    {
        ll temp = a;
        a = b;
        b = temp % b;
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
        ll i = a;
        while(i <= b)
        {
            if(findGreatestCommonDivisorEuclid(a, i) == 1)
            {
                cout << "(" << a << ", " << i << ")" << endl;
            }
            
            i++;
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
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}