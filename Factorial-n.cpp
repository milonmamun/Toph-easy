#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    unsigned long long ans = 1;
    for (int i = 1; i <= N; ++i) {
        ans *= i;
    }

    string str = to_string(ans);
    int len = str.length();
    int p = len >= 4 ? len - 4 : 0;  // to avoid negative index

    for (int i = p; i < len; ++i) {
        cout << str[i];
    }

    cout << endl;
    return 0;
}
