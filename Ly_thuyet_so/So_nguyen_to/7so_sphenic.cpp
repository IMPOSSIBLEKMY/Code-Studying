#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool isSphenic(ll n)
{
    ll i = 2;
    int so_mu = 0;
    int so_dem = 0;

    while(i * i <= n)
    {
        if(n % i == 0)
        {
            n /= i;
            so_mu++;

            if(so_mu == 1)
            {
                so_dem++;
            }
            else 
            {
                return false;
            }
        }
        else 
        {
            so_mu = 0;

            if(i == 2)
            {
                i++;
            }
            else 
            {
                i += 2;
            }
        }
    }

    if(n == i)
    {
        so_mu++;
    }
    else 
    {
        so_mu = 1;
    }

    if(so_mu == 1)
    {
        so_dem++;
    }
    else
    {
        return false;
    }

    if(so_dem >= 4)
    {
        return false;
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

    if(isSphenic(n))
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