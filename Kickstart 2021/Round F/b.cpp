#include <iostream>
#include <vector>

using namespace std;

void mergeSort(long long s, long long e, vector<long long> a);
void merge(long long s,long long m, long long e, vector<long long> a);

int main ()  {
    int T;
    cin >> T;

    for (int m = 0; m < T; m++) {
        long long d, n, k;

        cin >> d >> n >> k;

        vector< vector<long long> > rides;

        for (long long i = 0; i < d; i++) {
            vector<long long> a;
            rides.push_back(a);
        }

        for (long long i = 0; i < n; i++) {
            long long h, s, e;
            cin >> h >> s >> e;

            for (long long j = s; j < e + 1; j++) {
                rides[j].push_back(h);
            }
        }
        
        for (long long i = 0; i < rides.size(); i++) {
            mergeSort(0, rides[i].size() - 1, rides[i]);
        }

        long long hap = 0, day = -1;

        for (long long i = 0; i < rides.size(); i++) {
            long long tempH = 0;
            for (int j = 0; j < k; j++) {
                tempH += rides[i][j];
            }

            if (tempH > hap) {
                hap = tempH;
                day = i;
            }
        }

        cout << "Case #" << m + 1 << ": " << hap << endl;
    }
}


void mergeSort(long long s, long long e, vector<long long> a) {
    if (e - s <= 1)
        return;

    long long midpoint = (int) (e - s)/2;

    mergeSort(s, midpoint, a);
    mergeSort(midpoint + 1, e, a);

    merge(s, midpoint, e, a);
    return;
}

void merge(long long s,long long m, long long e, vector<long long> a) {
    long long r = s, l = m + 1;
    vector<long long> temp;

    while (r < m + 1 && l < e) {
        if (a[l] > a[r]) {
            temp.push_back(a[l]);
            l++;
        } else {
            temp.push_back(a[r]);
            r++;
        }
    }


    while (r < m + 1) {
            temp.push_back(a[r]);
            r++;
    }

    while (l < a.size()) {
            temp.push_back(a[l]);
            l++;
    }


    for (int i = 0, j = s; i < temp.size(); i++, j++) a[j] = temp[i];
}