#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int N, M;
        cin >> N >> M;

        int total = 0;

        while (N-- > 0) {
            int inp;
            cin >> inp;
            total += inp;
        }

        cout << "Case #" << i << ": " << total % M << endl;

        
    }
}