#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ifstream myfile ("test.txt");
    string line;

    if (myfile.is_open()) {
        while (getline(myfile,line)) {
            cout << line << endl;
        }
        myfile.close();
    } else {
        cout << "Unable to open file" << endl;;
    }
    return 0;
}