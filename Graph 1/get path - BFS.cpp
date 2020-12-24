Given an undirected graph G(V, E) and two vertices v1 and v2(as integers), find and print the path from v1 to v2 (if exists). Print nothing if there is no path between v1 and v2.
Find the path using BFS and print the shortest path available.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
Print the path in reverse order. That is, print v2 first, then intermediate vertices and v1 at last.


#include <iostream>
#include <vector>
#include<unordered_map>
#include <queue> 
using namespace std;

void BFS(vector<vector<int> > &graph , vector<bool> & visited ,int v, int sv , int ev , vector<int>& path)
{ 
    if( sv == ev)
    { path.push_back(sv); return ;}


    queue<int> pn;
    unordered_map<int, int> m;
    pn.push(sv);
    visited[sv]=1;


    while(!pn.empty())
    {
        int s= pn.front ();
        pn.pop();

        if(graph[s][ev])
        {
            path.push_back(ev);
            while(s!=sv)
            {
                path.push_back(s);
                s=m[s];
                
            }
            path.push_back(sv); 
            return;

        }

        for(int i=0 ; i< v ; i++)
        {
            if(!visited[i]&& graph[s][i])
            {
                m[i]=s,pn.push(i), visited[i]=1;
            }
        }
    }

}

void getPath(int **edges, int n, bool *visited, int v1, int v2)
{
    if(v1 == v2)
    {
        cout << v1 << " ";
        return;
    }
    
    unordered_map <int,int> map;
    
    queue <int> q;
    q.push(v1);
    visited[v1] = true;
    
    while(!q.empty())
    {
        int currentIndex = q.front();
        q.pop();
        
        for(int i=0; i<n; i++)
        {
            if(edges[currentIndex][i] == 1 && !visited[i])
            {
                if(i == v2)
                {
                    cout << v2 << " ";
                    map[v2] = currentIndex;
                    
                    int j = v2;
                    while(j != v1)
                    {
                        cout << map[j] << " ";
                        j = map[j];
                    }
                    return;
                }
                
                else
                {
                    q.push(i);
                    visited[i] = true;
                    map[i] = currentIndex;
                }
            }
        }
    }
}

 

vector<int> * getpath( int ** graph , int v , int s ,int e , bool * visited)
{
    queue<int> pn;
    unordered_map<int ,int> m;
    pn.push(s);
    visited[s]=true;

    while(!pn.empty())
    {
        int t= pn.front();
        
        pn.pop();
       

        for(int i=0 ; i<v ;i++)
        {
            if(graph[t][i]==1 && !visited[i])
            { 
                pn.push(i);
                m[i]=t;
                
                visited[i]=true;
                if(i==e)
                {
                    vector<int> * ans = new vector<int>();
                    
                    ans->push_back(e);
                    int x =e;
                    while(m[x]!=s)
                    {
                        ans->push_back(m[x]);
                        x=m[x];
                    }
                    ans->push_back(s);
                    
                    return ans;
                }
            }
        }
        
       
}
     return NULL;
}


int main()
{
  int V, E;
  cin >> V >> E;
 
    int** graph = new int * [V];
    for( int i=0 ;i<V ;i++)
    {
        graph[i]= new int[V];
        for( int j=0 ;j<V ;j++)
            graph[i][j]=0;

    }
    for (int i=0 ;i<E ;i++)
    {
		int x ,y ;
        cin>>x>>y ;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    bool * visited = new bool[V];
    for ( int i=0 ;i<V ;i++)
        visited[i]=false;
 
    int s ,e ;
    cin>>s>>e;
  
    vector<int> * ans = getpath(graph , V,s,e,visited);
    if(ans)
    {
    for(int i=0 ;i< ans->size(); i++)
        cout<< ans->at(i) << " ";
    }
    
    delete ans;
    
for(int i=0 ;i<V ;i++)
{
    delete [] graph[i];
}
    delete [] graph;
    
    delete [] visited;
    
  return 0;
}
