#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int alloc[10][10], maxm[10][10], need[10][10], avail[10];
    int finish[10] = {0}, safe[10], k = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> alloc[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> maxm[i][j];

    for(int j = 0; j < m; j++)
        cin >> avail[j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            need[i][j] = maxm[i][j] - alloc[i][j];

    while(k < n) {
        bool found = false;

        for(int i = 0; i < n; i++) {
            if(!finish[i]) {
                bool possible = true;

                for(int j = 0; j < m; j++)
                    if(need[i][j] > avail[j])
                        possible = false;

                if(possible) {
                    for(int j = 0; j < m; j++)
                        avail[j] += alloc[i][j];

                    safe[k++] = i;
                    finish[i] = 1;
                    found = true;
                }
            }
        }

        if(!found) break;
    }

    if(k == n) {
        cout << "Safe State\nSafe Sequence: ";
        for(int i = 0; i < n; i++)
            cout << "P" << safe[i] << " ";
    } else {
        cout << "Unsafe State";
    }

    return 0;
}