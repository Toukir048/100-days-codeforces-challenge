#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isTPrime(long long n)
{
    if (n < 4)
        return false;

    long long sq = sqrt(n);
    if (sq * sq != n)
        return false;

    if (sq < 2)
        return false;

    for (long long i = 2; i * i <= sq; i++)
    {
        if (sq % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    while (n)
    {
        long long num;
        cin >> num;

        if (isTPrime(num))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        n--;
    }
}