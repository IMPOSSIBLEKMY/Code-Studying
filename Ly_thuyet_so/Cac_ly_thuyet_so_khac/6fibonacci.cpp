#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool isFibonacci(ll value)
{
    if (value < 0)
    {
        return false;
    }

    if (value == 0)
    {
        return true;
    }

    if (value == 1)
    {
        return true;
    }

    int i = 3;
    
    ll a = 0, b = 1, c;

    while (i <= 93)
    {
        c = a + b;
        a = b;
        b = c;

        if (c == value)
        {
            return true;
        }

        if (c > value)
        {
            return false;
        }

        i++;
    }

    return 0;
}

ll findNthFibonacci(int n)
{
    ll a = 0, b = 1, c;

    if (n <= 0)
    {
        cout << "OUT OF LIMIT" << endl;
        return -1;
    }

    if (n > 93)
    {
        cout << "OUT OF LIMIT" << endl;
        return -1;
    }

    if (n == 1)
    {
        return a;
    }

    if (n == 2)
    {
        return b;
    }

    int i = 3;

    while (i <= n)
    {
        c = a + b;
        a = b;
        b = c;

        i++;
    }

    return c;
}

ll closestFibonacciNumber(ll value)
{
    ll a = 0, b = 1, c;

    if(value == 0)
    {
        return 0;
    }

    int i = 3;

    while(i <= 93)
    {
        c = a + b;

        if(value <= c && value >= b)
        {
            if(value - b >= value - c)
            {
                return c;
            }
            else 
            {
                return b;
            }
        }

        a = b;
        b = c;

        i++;
    }
    
    return c;
}

void printNumbersOfFibonacci(int n)
{
    ll a = 0, b = 1, c;

    if (n <= 0)
    {
        cout << "OUT OF LIMIT" << endl;
        return;
    }

    if (n > 93)
    {
        cout << "OUT OF LIMIT" << endl;
        return;
    }

    if (n == 1)
    {
        cout << a << endl;
        return;
    }

    if (n == 2)
    {
        cout << a << endl;
        cout << b << endl;
        return;
    }

    if (n >= 3)
    {
        cout << a << endl;
        cout << b << endl;
        int i = 3;

        while (i <= n)
        {
            c = a + b;
            a = b;
            b = c;
            cout << c << endl;
            i++;
        }
    }
}

int main()
{
    ll n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << closestFibonacciNumber(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}