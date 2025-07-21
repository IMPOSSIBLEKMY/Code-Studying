#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll reverseNumber(ll n)
{
    ll reversedNumber = 0;

    while(n > 0)
    {
        reversedNumber = reversedNumber * 10 + n % 10;
        n /= 10;
    }

    return reversedNumber;
}

bool isUniquePalindromicNumber(ll number)
{
    if (number < 0)
    {
        return false;
    }

    number /= 10; //cut the beginning digit

    ll reverse_number_without_head_and_tail_digit = reverseNumber(number) / 10; //cut the last digit

    ll number_without_head_and_tail_digit = reverseNumber(reverse_number_without_head_and_tail_digit); 

    if(number_without_head_and_tail_digit == reverse_number_without_head_and_tail_digit)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    ll number;
    cin >> number;

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);

    if (isUniquePalindromicNumber(number))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}