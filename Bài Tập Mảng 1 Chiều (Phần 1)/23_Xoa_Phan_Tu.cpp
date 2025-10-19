#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, -10^3 <= A[i], X <= 10^3
// Nhiệm vụ của bạn là:
//     Tìm kiếm giá trị phần tử trong mảng sao cho giống giá trị X và xóa vị trí đầu tiên của phần tử đó. In ra các số còn lại.
//     Nếu không có thì in "NOT FOUND".

// VD: A[5] = {3, 5, 2, 2, 0}   X = 2
// => 3 5 2 0

void Xoa_Phan_Tu(int n, int A[], int X)
{
    int pos = -1;

    for(int i = 0; i <= n - 1; i++)
    {
        if(A[i] == X)
        {
            pos = i;
            break;
        }
    }

    if(pos == -1)
    {
        cout << "NOT FOUND" << endl;
        return;
    }

    for(int i = 0; i <= n - 1; i++)
    {
        if(i == pos)
        {
            continue;
        }

        cout << A[i] << " ";
    }

    cout << endl;
}

int main()
{
    int n, X;
    cin >> n >> X;

    int A[n];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    Xoa_Phan_Tu(n, A, X);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}