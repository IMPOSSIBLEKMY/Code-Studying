#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool isSmith(ll n)
{
    ll n1 = n;
    int tong1 = 0;
    while(n1 > 0)
    {
        tong1 += int(n1 % 10);
        n1 /= 10;
    }
    
    ll i = 2;
    int tong2 = 0;
    bool isPrime = true;
    while(i*i <= n)
    {
        if(n % i == 0)
        {
            isPrime = false;
            n /= i;
            
            ll i1 = i;
            while(i1 > 0)
            {
                tong2 += int(i1 % 10);
                i1 /= 10;
            }
        }
        else 
        {
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
    
    if(isPrime)
    {
        return false;
    }

    while(n > 0)
    {
        tong2 += int(n % 10);
        n /= 10;
    }
    
    return (tong1 == tong2);

}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if(isSmith(n))
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