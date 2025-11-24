#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho vector gồm N phần tử, 1 <= N <= 1000. Các phần tử trong vector là số int.

// Nhiệm vụ của bạn là:
//    In ra vector sau khi lật ngược.
//    Tự code hàm lật ngược 1 vector theo khuôn mẫu hàm main như sau:
//    void rev(vector<int> &v)
//    {  
//    }
//
//    int main()
//    {  
//         vector<int> v;  
//         nhap(v); 
//         rev(v);  
//         in(v); 
//    }

//  VD:
//  15
//  16 7 1 8 14 5 6 17 11 17 12 6 5 2 14 

//  =>   14 2 5 6 12 17 11 17 6 5 14 8 1 7 16 

int main()
{
    int n;
    cin >> n;

    int A[n];
    int N[2] = {0};
    for(int i = 0; i <= n - 1; i++)
    {
        cin >> A[i];

        A[i] %= 2;

        N[A[i]]++;
    }

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    cout << (long long)(N[0] * (N[0] - 1)) / 2 + (long long)(N[1] * (N[1] - 1)) / 2 << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}