#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng số nguyên A[] gồm N phần tử. 1 <= N <= 1000 phần tử, 0 <= A[i] <= 1000. 1 <= T <= 100.
// T là các testcase của các dãy A[]. 
// Nhiệm vụ của bạn là:
//     Liệt kê các dãy con có các phần tử liên tiếp tăng chặt có độ dài dài nhất. In ra độ dài, sau đó liệt kê các dãy đó.
//     Mỗi lần in ra phải kèm theo số thứ tự của testcase.

// VD: A[10] = {39, 48, 41, 18, 12, 35, 10, 29, 29, 45}
// => 39, 48. Độ dài là 2
//    12, 35
//    10, 29
//    29, 45
//     A[10] = {19, 37, 14, 24, 49, 45, 36, 25, 38, 16}
// => 14, 24, 49. Độ dài là 3

int main()
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        int n;
        cin >> n;

        int A[n];

        int N[1001] = {0};
        int temp_pos = 0, max_d = 0;

        for(int j = 0; j <= n - 1; j++)
        {
            cin >> A[j];

            if(j >= 1)
            {
                if(A[j - 1] < A[j])
                {
                    N[temp_pos]++;

                    if(N[temp_pos] > max_d)
                    {
                        max_d = N[temp_pos];
                    }
                }
                else 
                {
                    temp_pos = j;
                }
            }
        }

        cout << "TEST " << i << ": " << endl;
        cout << max_d + 1 << endl;

        int temp_val = -1;

        for(int j = 0; j <= n - 1; j++)
        {
            if(N[j] == max_d)
            {
                temp_val = N[j] + 1;
            }

            if(temp_val > 0)
            {
                cout << A[j] << " ";
                temp_val--;
            }
            
            if(temp_val == 0)
            {
                cout << endl;
                temp_val = -1;
            }
        }
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