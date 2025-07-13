#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool tat_ca_so_nguyen_to_binh_phuong(int n)
{
    if(n < 4)
    {
        return false;
    }

    int i = 2;
    int so_mu = 0;

    while(i * i <= n)
    {
        if(n % i == 0)
        {
            so_mu++;
            n /= i;

            if(n % i != 0)
            {
                // check lần n = (check lần 1) and (check lần 2) and ...
                // nên chỉ cần 1 lần false thì kết quả đều false
                if(so_mu < 2)
                {
                    return false;
                }

                so_mu = 0;
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

    if(n == i)
    {
        so_mu++;
    }
    else 
    {
        so_mu = 1;
    }

    // check lần n = (check lần 1) and (check lần 2) and ...
    // nên chỉ cần 1 lần false thì kết quả đều false
    if(so_mu < 2)
    {
        return false;
    }

    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    if(a < 1 || b < 1 || a > b)
    {
        cout << "INVALID." << endl;
        return 0;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    while(a <= b)
    {
        if(tat_ca_so_nguyen_to_binh_phuong(a))
        {
            cout << a << " ";
        }

        if(a == b)
        {
            break;
        }

        a++;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}