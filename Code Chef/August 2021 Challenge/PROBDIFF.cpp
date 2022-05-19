#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        vector<int> a, b;
        int sets = 0;

        for (int i = 0; i < 4; i++) {
            int inp;
            cin >> inp;

            if (a.size() == 0) {
                a.push_back(inp);
            } else if (a.size() < 2 && a[0] != inp) {
                a.push_back(inp);
                sets++;
            } else if (b.size() == 0)
                b.push_back(inp);
            else if (b.size() < 2 && b[0] != inp) {
                b.push_back(inp);
                sets++;
            }
        }

        cout << sets << endl;
    }
}

