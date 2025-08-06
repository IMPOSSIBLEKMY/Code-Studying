#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Tính tổng S(n) = -1 + 2 - 3 + ... + ((-1)^n) * n bằng đệ quy

int tong_4(int n)
{
    if(n == 0)
    {
        return 0;
    }

    if(n % 2 == 0)
    {
        return n + tong_4(n-1);
    }
    else 
    {
        return -n + tong_4(n-1);
    }

}

int main()
{
    int n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << tong_4(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}