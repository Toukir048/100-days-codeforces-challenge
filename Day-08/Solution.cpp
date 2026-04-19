#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool allUpper = true;
    for (char c : s) {
        if (!isupper(c)) {
            allUpper = false;
            break;
        }
    }

    bool firstLowerRestUpper = islower(s[0]);
    for (int i = 1; i < s.size(); i++) {
        if (!isupper(s[i])) {
            firstLowerRestUpper = false;
            break;
        }
    }

    if (allUpper || firstLowerRestUpper) {
        for (char &c : s) {
            if (islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }

    cout << s << endl;
    return 0;
}