#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 1000 phần tử, 0 <= A[i] <= 1000
// Nhiệm vụ của bạn là:
//     Tổng của các dãy con gồm các phần tử liên tiếp trong mảng A.
//     Nếu 2 dãy con có 2 phần tử, giả sử {1, 2} và {2, 1} thì chúng khác nhau. Giống nhau khi cùng vị trí trong mảng và cùng giá trị.

// VD: A[4] = {1, 2, 3, 4} 
// => Mảng A có {1}, {1, 2}, {1, 2, 3}, {1, 2, 3, 4}, {2}, {2, 3}, {2, 3, 4}, {3}, {3, 4}, {4}
// => Mảng A có tổng các phần tử trong từng dãy con lần lượt: 
//    1 3 6 10 2 5 9 3 7 4

void Tong_Cua_Moi_Day_Con(int n, int A[])
{
    for(int i = 0; i <= n - 1; i++)
    {
        int sum = 0;
        for(int j = i; j <= n - 1; j++)
        {
            sum += A[j];
            cout << sum << " ";
        }
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

    Tong_Cua_Moi_Day_Con(n, A);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}