#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 2 <= N <= 10^6, 1 <= A[i] <= 10^9
// Nhiệm vụ của bạn là:
//     In ra các số trong mảng thỏa điều kiện nó lớn hơn các số đứng ở trước nó. Cho rằng số đầu tiên thỏa điều kiện.

// VD: A[6] = 2 6 1 3 9 9
//     => 2 6 9   

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

	int max = -1;
	for(int i = 0; i <= n - 1; i++)
	{
		if(max < A[i])
		{
			max = A[i];
			cout << max << " ";
		}
	}
	cout << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}