#include <iostream>
#include <string>

using namespace std;

char lower(char a) {
    if (a >= 'A' && a <= 'Z')
        a += 32;

    return a;
}

int main () {
    int T;
    cin >> T;

    for (int a = 1; a <= T; a++) {
        string cityName;
        cin >> cityName;

        string name;

        char finalLetter = lower(cityName[cityName.length() - 1]);

        if (finalLetter == 'y')
            name = "nobody";
        else if (finalLetter == 'a' || finalLetter == 'e' || finalLetter == 'i' || finalLetter == 'o' || finalLetter == 'u')
            name = "Alice";
        else
            name = "Bob";
    
        cout << "Case #" << a << ": " << cityName << " is ruled by " << name << "." << endl;
    }

}