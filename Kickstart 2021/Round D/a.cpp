#include <iostream>
#include <vector>
#include <map>

using namespace std;

int findMid(int a, int b);

int main () {
    int T;
    cin >> T;

    for (int m = 0; m < T; m++) {
        int arr[3][3];

        for (int j = 0; j < 3; j++) {
            for (int g = 0; g < 3; g++) {
                if (g == 1 && j == 1)
                    arr[j][g] = 0;
                else 
                    cin >> arr[j][g];
            }
        }

        int count = 0;

        for (int i = 0; i < 3; i += 2) {
            int a = arr[i][1] - arr[i][0], b = arr[i][2] - arr[i][1];
            if (a == b)
                count++;
            
            a = arr[1][i] - arr[0][i], b = arr[2][i] - arr[1][i];
            if (a == b)
                count++;
        }

        
        map<int, int> a;
        vector<int> b;

        //Checks mid column
        int temp = findMid(arr[0][1], arr[2][1]);
        a[temp]++;
        if(a[temp] == 1)
            b.push_back(temp);

        //Checks mid row
        temp = findMid(arr[1][0], arr[1][2]);
        a[temp]++;
        if(a[temp] == 1)
            b.push_back(temp);

        //Checks diagonals
        temp = findMid(arr[0][0], arr[2][2]);
        a[temp]++;
        if(a[temp] == 1)
            b.push_back(temp);

        //Checks diagonals
        temp = findMid(arr[0][2], arr[2][0]);
        a[temp]++;
        if(a[temp] == 1)
            b.push_back(temp);
        
        int longest = 0, longestSize = 0;
        for (int i = 0; i < b.size(); i++) {
            if (a[b[i]] > longestSize) {
                longest = b[i];
                longestSize = a[b[i]];
            }
        }

        cout << "Case #" << m + 1 << ": " << longest << endl;
    }
}

int findMid(int a, int b) {
    if ((a - b) % 2 == 0) {

    } else 
}