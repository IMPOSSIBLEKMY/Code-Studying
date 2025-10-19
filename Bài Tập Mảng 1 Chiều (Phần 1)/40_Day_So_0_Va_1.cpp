#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 10000 phần tử, 0 <= A[i] <= 1
// Mảng A[] chỉ gồm những số 0 và 1.
// Nhiệm vụ của bạn là:
//     Ra kết quả về độ dài của các dãy con gồm các sô 0 hoặc 1 liên tiếp.

// VD: A[10] = {1, 1, 1, 0, 1, 1, 0, 0, 1, 1} 
// => Dãy con 1: 3 2 2
//    Dãy con 0: 1 2

void Day_So_0_Va_1(int n, int A[], int X)
{
    int count = 0;
    for(int i = 0; i <= n-1; i++)
    {
        if(A[i] == X)
        {
            count++;
            if(i == n - 1)
            {
                cout << count << " ";
                count = 0;
            }
        }
        else 
        {
            if(count != 0)
            {           
                cout << count << " ";
                count = 0;
            }
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

    Day_So_0_Va_1(n, A, 1);
    Day_So_0_Va_1(n, A, 0);

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}