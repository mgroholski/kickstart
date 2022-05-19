#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> a);

int main () {
    vector<int> a;

    a.push_back(1);
    a.push_back(2);
    print(a);
    a.pop_back();
    print(a);
}

void print(vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}