#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ofstream myFile;

    myFile.open("test.cpp");
    myFile << "#include <iostream>\n using namespace std;\n int main() {\n cout << \"Hello, world!\";\n }\n";
    myFile.close();
    return 0;
}