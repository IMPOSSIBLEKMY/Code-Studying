#include <bits/stdc++.h>

#define ll long long

using namespace std;

// Cho mảng A[] gồm N phần tử, 1 <= N <= 1000. 1 <= A[i] <= 10^9
// Nhiệm vụ của bạn là:
//     Đếm có bao nhiêu cặp số nguyên tố cùng nhau trong mảng. Cặp số nguyên tố là 2 số không có ước chung.

// VD: A[5] = 2 4 8 3 6
//     => 3 cặp (cặp 2-3, 3-4, 3-8)

int gcd(int a, int b)
{
	if(a == 0)
	{
		return b;
	}

	if(b == 0)
	{
		return a;
	}

	while(b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
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

	int count = 0;
	for(int i = 0; i <= n - 2; i++)
	{
		for(int j = i + 1; j <= n - 1; j++)
		{
			if(gcd(A[i], A[j]) == 1)
			{
				count++;
			}
		}
	}
	cout << count << endl;

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}