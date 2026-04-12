#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int allenCashCount(int note)
{
    int ncnt = 0;
    while (note)
    {
        if (note >= 100)
        {
            note -= 100;
            ncnt++;
        }
        else if(note >= 20)
        {
            note -= 20;
            ncnt++;
        }
        else if(note >= 10)
        {
            note -= 10;
            ncnt++;
        }
        else if(note >= 5)
        {
            note -= 5;
            ncnt++;
        }
        else
        {
            note -= 1;
            ncnt++;
        }
    }
    return ncnt;
}

int main()
{
    int note;
    cin >> note;
    cout << allenCashCount(note) <<endl;
    return 0;
}