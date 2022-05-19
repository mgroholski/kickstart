//LINK:https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff47/00000000003bf4ed#problem

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int findLongest(vector<int> a) {
    vector<int> values;
    map<int, int> times;

    for (int i = 0; i < a.size() - 1; i++) {
        int difference = a[i+1] - a[i];
        times[difference]++;
        if (times[difference] == 1)
            values.push_back(difference);
    }

    int max = 0;

    for (int i = 0; i < values.size(); i++) {
        cout << values[i] << " " << times[values[i]] << endl;

        if (times[values[i]] > max)
            max = times[values[i]];
    }

    return max + 1;
}

int main () {
    int T;
    cin >> T;

    for (int c = 0; c < T; c++) {
        int n;
        vector<int> a;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int inp;
            cin >> inp;
            a.push_back(inp);
        }

        int highest = findLongest(a);

        cout << "Case #" << c + 1 << ": " <<  highest << endl;
    }
}