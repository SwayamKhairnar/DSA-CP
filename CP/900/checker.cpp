#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream a("out1.txt"), b("out2.txt");

    string s1, s2;
    int line = 1;
    bool ok = true;

    while (true) {
        bool e1 = !getline(a, s1);
        bool e2 = !getline(b, s2);

        if (e1 && e2) break;

        if (e1 || e2 || s1 != s2) {
            cout << "Mismatch at line " << line << "\n";
            cout << "Expected: " << (e1 ? "<EOF>" : s1) << "\n";
            cout << "Got     : " << (e2 ? "<EOF>" : s2) << "\n\n";
            ok = false;
        }
        line++;
    }

    if (ok) cout << "All lines match\n";
}
