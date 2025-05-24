#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool isSphenic(ll n)
{
    ll i = 2;
    int dem = 0;
    while(i*i <= n)
    {
        if(n % i == 0)
        {
            n /= i;
            dem++;
            if(dem >= 3)
            {
                return false;
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
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}