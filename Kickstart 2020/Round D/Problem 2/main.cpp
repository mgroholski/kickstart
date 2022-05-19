//Link: https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff08/0000000000387174

#include <vector>
#include <iostream>

using namespace std;

int calculateBreaks(vector<int> notes);

int main() {
    int cases;
    cin >> cases;

    for (int i = 0; i < cases; i++) {
        int numNotes;
        cin >> numNotes;

        vector<int> notes;

        for (int j = 0; j < numNotes; j++) {
            int a;
            cin >> a;
            notes.push_back(a);
        }

        cout << "Case #" << i + 1 << ": " << calculateBreaks(notes);
    }
}

int calculateBreaks(vector<int> notes) {
    
}