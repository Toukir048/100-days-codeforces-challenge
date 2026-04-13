#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> mp;

    while (n--) {
        string username;
        cin >> username;

        if (mp[username] == 0) {
            cout << "OK" << endl;
        } else {
            cout << username << mp[username] << endl;
        }

        mp[username]++;
    }

    return 0;
}