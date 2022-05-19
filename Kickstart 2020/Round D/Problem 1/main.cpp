#include <iostream>
#include <vector>

using namespace std;

int recordBreaker(vector<int> days);

int main() {
    int cases; 
    cin >> cases;

    for (int i = 0; i < cases; i++) {
        int numDays;
        cin >> numDays;

        vector<int> days;

        for (int j = 0; j < numDays; j++) {
            int count;
            cin >> count;
            days.push_back(count);
        }

        cout << "Case #" << i + 1 << ": " << recordBreaker(days) << endl; 
    }
}

int recordBreaker(vector<int> days) {
    int count = 0;
    int previousRecord = 0;

    for (int i = 0; i < days.size(); i++) {
        bool a = i == 0 || days[i] > previousRecord;
        bool b = i == days.size() - 1 || days[i] > days[i + 1];
        if (a && b) {
            count++;
        }
        previousRecord = max(previousRecord, days[i]);
    }
    return count;
} 