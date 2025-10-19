#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 1000 phần tử, 0 <= A[i] <= 1000
// Nhiệm vụ của bạn là:
//     Đếm có bao nhiêu dãy con gồm các phần tử liên tiếp trong mảng A thỏa điều kiện tổng các phần tử của nó là số nguyên tố.
//     Nếu 2 dãy con có 2 phần tử, giả sử {1, 2} và {2, 1} thì chúng khác nhau. Giống nhau khi cùng vị trí và cùng giá trị.

bool so_nguyen_to(int n)
{
    if(n <= 1)
    {
        return false;
    }

    if(n == 2 || n == 3)
    {
        return true;
    }

    if(n % 2 == 0)
    {
        return false;
    }

    if(n % 3 == 0)
    {
        return false;
    }

    for(int i = 5; i <= n / i; i += 6)
    {
        if(n % i == 0 || n % (i+2) == 0)
        {
            return false;
        }
    }

    return true;
}

int Day_Con_Nguyen_To(int n, int A[])
{
    int count = 0;
    for(int i = 0; i <= n - 1; i++)
    {
        int sum = 0;
        for(int j = 0; j <= n - 1; j++)
        {
            sum += A[j];
            if(so_nguyen_to(sum) == true)
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

    cout << Day_Con_Nguyen_To(n, A) << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}