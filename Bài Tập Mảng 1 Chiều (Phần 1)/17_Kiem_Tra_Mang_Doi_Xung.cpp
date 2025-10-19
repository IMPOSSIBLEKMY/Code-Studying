#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 10^6 phần tử, 0 <= A[i] <= 10^6
// Nhiệm vụ của bạn là:
//      Kiểm tra xem mảng có đối xứng hay không.

bool Kiem_Tra_Mang_Doi_Xung(int n, int A[])
{
    for(int i = 0; i <= n/2 - 1; i++)
    {
        if(A[i] != A[n - (i + 1)])
        {
            return false;
        }
    }

    return true;
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

    if(Kiem_Tra_Mang_Doi_Xung(n, A) == true)
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