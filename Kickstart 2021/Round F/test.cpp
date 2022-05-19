#include <iostream>

using namespace std;

int main()
{
    char a[] = "Hello";
    char *p = a, *q;

    q = &&a[0];
}