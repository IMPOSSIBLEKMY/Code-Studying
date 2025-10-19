#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, -10^3 <= A[i] <= 10^3 
// Nhiệm vụ của bạn là:
//      In ra các phần tử chẵn ở vị trí chẵn trong dãy. Nếu không có thì in "NONE".

void in_cac_so_chan(int n, int A[])
{
    bool ton_tai_so_chan = false;

    for(int i = 0; i <= n - 1; i++)
    {
        if(A[i] % 2 == 0 && i % 2 == 0)
        {
            cout << A[i] << " ";
            ton_tai_so_chan = true;
        }
    }

    if(ton_tai_so_chan == false)
    {
        cout << "NONE";
    }

    cout << endl;

    return;

}

int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    in_cac_so_chan(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}