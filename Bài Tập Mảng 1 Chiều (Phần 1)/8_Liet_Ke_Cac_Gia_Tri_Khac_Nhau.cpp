#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm 1 <= N <= 1000 phần tử, 0 <= A[i] <= 10^3 
// Nhiệm vụ của bạn là:
//      Liệt kê các giá trị khác nhau trong mảng theo thứ tự của mảng. Mỗi số chỉ liệt kê 1 lần

// VD: A[8] = {1, 3, 2, 4, 1, 2, 3, 5}
// => 1 3 2 4 5

// Cách 1:
void liet_ke_cac_gia_tri_khac_nhau_1(int n, int A[])
{
    bool flag = false;

    for(int i = 0; i <= n - 1; i++)
    {
        for(int j = 0; j <= i - 1; j++)
        {
            if(A[i] == A[j])
            {
                flag = true;
                break;
            }
        }

        if(flag == false)
        {
            cout << A[i] << " ";
        }

        flag = false;
    }

    cout << endl;
}

// Cách 2:
void liet_ke_cac_gia_tri_khac_nhau_2(int n, int A[])
{
    for(int i = 0; i <= n - 1; i++)
    {
        if(A[i] < 0)
        {
            continue;
        }

        for(int j = i + 1; j <= n - 1; j++)
        {
            if(A[j] == A[i])
            {
                A[j] = -1;
            }
        }

        cout << A[i] << " ";
    }

    cout << endl;
}

// Cách 3 (dùng mảng đánh dấu):
void liet_ke_cac_gia_tri_khac_nhau_3(int n, int A[], int N[])
{
    for(int i = 0; i <= n - 1; i++)
    {
        if(N[A[i]] >= 1)
        {
            cout << A[i] << " ";
            N[A[i]] = -1;
        }
    }

    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int A[n], N[10001];
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];

        N[A[i]]++;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    liet_ke_cac_gia_tri_khac_nhau_3(n, A, N);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}