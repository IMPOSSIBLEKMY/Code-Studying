#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 1000 phần tử, 0 <= A[i] <= 1000
// Nhiệm vụ của bạn là:
//     In ra toàn bộ mảng sau khi xóa các số 28 trong mảng. Nếu mảng không còn phần tử nào thì in ra "EMPTY".

void Xoa_So_28(int n, int A[])
{
    bool flag = false;
    for(int i = 0; i <= n - 1; i++)
    {
        if(A[i] != 28)
        {
            flag = true;
            cout << A[i] << " ";
        }
    }

    if(flag == false)
    {
        cout << "EMPTY";
    }
    cout << endl;
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

    Xoa_So_28(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}