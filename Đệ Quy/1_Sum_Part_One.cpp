#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Đề bài:
// Viết một chương trình tính tổng các số nguyên từ 1 đến n (n ≥ 1) bằng phương pháp đệ quy.



int main()
{
    ll number;
    cin >> number;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);



    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}