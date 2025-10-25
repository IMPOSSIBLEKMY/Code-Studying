#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho vector gồm N phần tử, 1 <= N <= 1000. Các phần tử trong vector là số int.

// Nhiệm vụ của bạn là:
//    Viết hàm trả về 1 vector chứa các số nguyên tố trong dãy số đó.
//    Bạn phải code tuân theo khuôn mẫu sau:
//    vector<int> prime_list(vector<int> v)
//    {  
//         // tạo 1 vector mới sau đó duyệt v, tìm số nguyên tố và pushback vào 
//         // trả về vector mới tạo
//    }
//
//    int main()
//    {  
//         vector<int> v;  
//         nhap(v); // Hàm nhập viết ntn?  
//         vector<int> res =  prime_list(v);  
//         in(v); 
//    }

//  VD:
//  15
//  9 6 10 15 4 9 4 3 17 4 11 0 4 2 18

//  =>  3 17 11 2

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