#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Tính n! bằng đệ quy

int giai_thua(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    else 
    {
        return n*giai_thua(n-1);
    }

}

int main()
{
    int n;
    cin >> n;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << giai_thua(n) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}