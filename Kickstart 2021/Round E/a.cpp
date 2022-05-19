#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main () {
    int T;
    cin >> T;

    for (int m = 0; m < T; m++) {
        string a;
        cin >> a;

        vector<char> characters;
        map<char,int> num;

        for (int i = 0; i < a.size(); i++) {
            num[a[i]]++;
            if (num[a[i]] > (a.size() / 2)) {
                cout << "Case #" << m + 1 << ": IMPOSSIBLE" << endl;
            } else if (num[a[i]] == 1)
                characters.push_back(a[i]);
        }

        //IMPLEMENT COUNTING SORT
        string result;

        for (int i = characters.size() - 1; characters.size() != 0;) {
            result += characters[i];
            num[characters[i]]--;

            if (num[characters[i]] == 0) {
                characters.pop_back();
                i--;
            }
        }
        cout << result;
        
    }
}
