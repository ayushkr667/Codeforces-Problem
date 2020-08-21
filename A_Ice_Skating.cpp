#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>

using namespace std;

struct pt {
    int x, y;
};

int n;
pt p[101];
int ans;

bool path[101][101];
bool used[101];

void dfs(int v) {
    used[v] = true;
    for (int i = 0; i < n; i++)
        if (!used[i] && path[v][i])
            dfs(i);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i].x >> p[i].y;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (p[i].x == p[j].x || p[i].y == p[j].y)
                path[i][j] = 1;
            else
                path[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++)
        if (!used[i])
            dfs(i), ans++;

    cout << ans - 1;
    return 0;
}


