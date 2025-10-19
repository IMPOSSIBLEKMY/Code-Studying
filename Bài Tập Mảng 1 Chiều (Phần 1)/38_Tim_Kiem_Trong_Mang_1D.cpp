#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 10^6 phần tử, 0 <= A[i], X <= 10^7
// Testcase T là những giá trị X khác biệt, 1 <= T <= 10^4
// Nhiệm vụ của bạn là:
//     In ra "YES" nếu tìm thấy X trong mảng A ở mỗi testcase. Ngược lại thì in ra "NO".

// VD: A[4] = {1, 2, 4, 3} 
//     T = 3: X = 1, X = 3, X = 5
// => YES 
//    YES 
//    NO

int N[10000001] = {0};

bool Tim_Kiem_Trong_Mang_1D(int X, int N[])
{
    if(N[X] >= 1)
    {
        return true;
    }

    return false;
}

int main()
{
    int n, X;
    cin >> n;

    int A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
        N[A[i]]++;
    }

    int T;
    cin >> T;

    while(T >= 1)
    {
        cin >> X;

        if(Tim_Kiem_Trong_Mang_1D(X, N) == true)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }

        T--;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}