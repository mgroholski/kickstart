#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (long long i = 0; i < T; i++)
    {
        long long dist = 0;
        long long n;
        cin >> n;
        string houses;
        cin >> houses;

        for (int i = 0; i < houses.length(); i++)
        {
            if (houses[i] != '1')
            {
                long long end = -1;
                for (long long j = i; j < houses.length(); j++)
                {
                    if (houses[i] == '1')
                    {
                        end = j - 1;
                        break;
                    }
                }
                if (end != -1 && i != 0)
                {
                    long long size = end - i;
                    long long factor = 0;
                    for (long long j = 0; j < size; j++)
                    {
                        if (j % 2 == 0 && j != 0)
                        {
                            factor++;
                        }
                        dist += factor;
                    }
                    cout << dist << endl;
                    i += size - 1;
                } else if (i == 0) {
                    long long size = end - i;
                    long long factor = size;
                    for (int j = size; j >= 1; j--) dist += j;
                    i+= size;
                } else {
                    long long factor = 0;
                    for (int j = 0; j < houses.length() - i - 1; j++) dist += j;
                    cout << dist << endl;
                    i = houses.length();
                }
            }
        }
        cout << "Case #" << i + 1 << ": " << dist << endl;
    }
}
