#include <iostream>
#include <list>
#include <stack>
#include<conio.h>
using namespace std;
class Graph
{
	public:
        int V;
        list<int>*adj;
        void DFSUtil(int v, bool visited[]);
    
    Graph(int V)
    {
        this->V = V;
        adj = new list<int>[V];
    }
    ~Graph()
    {
        delete [] adj;
    }
    void addEdge(int v, int w);
    bool isConnected();
    Graph getTranspose();
};


void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}


Graph Graph::getTranspose()
{
    Graph g(V);
    for (int v = 0; v < V; v++)
    {
        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            g.adj[*i].push_back(v);
        }
    }
    return g;
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

bool Graph::isConnected()
{
    bool visited[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    DFSUtil(0, visited);
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
             return false;

    Graph gr = getTranspose();
    for(int i = 0; i < V; i++)
        visited[i] = false;

    gr.DFSUtil(0, visited);
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
             return false;
    return true;
}

int main()
{
    Graph g1(5);
  
    if (g1.isConnected())
        cout<<"The Graph is Conneted"<<endl;
    else
        cout<<"The Graph is not Connected"<<endl;

    Graph g2(4);

    if (g2.isConnected())
        cout<<"The Graph is Connected"<<endl;
    else
        cout<<"The Graph is not Connected"<<endl;
    getch();
    return 0;
}
