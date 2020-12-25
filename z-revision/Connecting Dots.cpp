#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
int dirn [8][2] = {{ -1, 0}, {1, 0}, {0, -1}, {0, 1} };

bool valid(int x , int y , int n , int m)
{
    return ( x >= 0 && x < n && y >= 0 && y < m);
}
bool check(vector<vector<char>> &board, vector<vector<bool>>& visited, int si, int sj, int ci , int cj, int n, int m  , char color, int ring)
{

    //  cout << endl;// cout << i << " " << j << endl;
    visited[ci][cj] = true;
    for (int k = 0 ; k < 4; k++ )
    {
        int x = ci + dirn[k][0];
        int y = cj + dirn[k][1];
        if (x == si && y == sj && ring > 4)return true;
        if ( valid(x, y, n, m) && !visited[x][y] && board[x][y] == color)
        {   //  cout << x << " " << y << endl;
            if (check(board , visited , si, sj, x, y, n, m, color, ++ring)) return true;
        }

    }
    visited[ci][cj] = false;
    return false;

}
bool hasCycle(vector<vector<char>> &board, int n, int m) {
    // Write your code here.
    vector<vector<bool>> visited (n , vector<bool>(m , false));


    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
            if (!visited[i][j])
            {
                char c = board[i][j];
                //cout << c << endl;
                if (check(board, visited , i , j , i, j, n, m, c, 1))
                    return true;
            }
        }
    }
    return false;

}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }

    cout << (hasCycle(board, n, m) ? "true" : "false");
}
