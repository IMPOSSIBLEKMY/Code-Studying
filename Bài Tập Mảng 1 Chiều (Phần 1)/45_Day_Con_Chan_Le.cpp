#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 1000 phần tử, 0 <= A[i] <= 1000
// Nhiệm vụ của bạn là:
//     Đếm có bao nhiêu dãy con gồm các phần tử liên tiếp trong mảng A thỏa điều kiện số lượng số chẵn và số lẻ bẳng nhau.
//     Nếu 2 dãy con có 2 phần tử, giả sử {1, 2} và {2, 1} thì chúng khác nhau. Giống nhau khi cùng vị trí và cùng giá trị.
//     Số 0 là số chẵn.

int so_cac_phan_tu_nho_nhat(int n, int A[])
{
    int count = 0;
    
    for(int i = 0; i <= n - 1; i++)
    {
        int chan = 0;
        int le = 0;

        for(int j = i; j <= n - 1; j++)
        {
            if(A[j] % 2 == 0)
            {
                chan++;
            }
            else 
            {
                le++;
            }

            if(chan == le)
            {
                count++;
            }
        }
    }

    return count;
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

    cout << so_cac_phan_tu_nho_nhat(n, A) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}