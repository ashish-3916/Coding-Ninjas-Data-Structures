int dirn [4][2] = {{ -1, 0}, {1, 0}, {0, -1}, {0, 1} };

bool valid(int x, int y, int n)
{
    return ( x>=0 && y>=0 && x<n && y<n);
}
int dfs(vector<vector<int>> &cake, vector<vector<bool>> &visited , int i,int j , int n)
{
    visited [i][j]=true;
    int cut=0;
    for(int k=0;k<4;k++)
    {
		int x = i + dirn[k][0];
        int y = j + dirn[k][1];
        if(valid(x,y,n) && !visited[x][y] && cake[x][y]==1)
        {
            cut +=dfs(cake , visited , x,y,n);
        }
    }
    return cut+1;
    
}
int getBiggestPieceSize(vector<vector<int>> &cake, int n) {
    // Write your code here
 vector<vector<bool>>visited(n, vector<bool> (n, false));
    int ans=0;
    for(int i=0;i<n ;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!visited[i][j] && cake[i][j])
            {
                int small = dfs(cake, visited , i ,j , n );
             //   cout<<small<<endl;
                if(small>ans)
                    ans=small;
            }
        }
    }
    return ans;
}
