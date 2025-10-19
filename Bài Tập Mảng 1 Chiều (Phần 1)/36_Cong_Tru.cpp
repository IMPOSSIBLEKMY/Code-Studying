#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 1000 phần tử, 0 <= A[i] <= 100
// Cho mảng số nguyên B[] gồm N-1 phần tử. Trong đó, các phần tử chỉ có số 1 và 2. 1 tương ứng phép cộng, 2 tương ứng phép
// trừ giữa 2 phần tử liên tiếp trong mảng A.
// Nhiệm vụ của bạn là:
//     Tính giá trị mà cả 2 mảng cho ra được. 

// VD: A[4] = {1, 2, 4, 3} 
//     B[3] = {1, 2, 2}
// => -4    (do 1 + 2 - 4 - 3 = -4)

int Cong_Tru(int n, int A[], int B[])
{
    int res = A[0];
    
    for(int i = 0; i <= n - 2; i++)
    {
        if(B[i] == 1)
        {
            res += A[i+1];
        }
        else 
        {
            res -= A[i+1];
        }
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    int A[n], B[n-1];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i <= n - 2; i++)
    {
        cin >> B[i];
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << Cong_Tru(n, A, B) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}