#include<bits/stdc++.h>
using namespace std ;
void adjacency_matrix(){
    int n ; cin >> n ;
    int edges ; cin >> edges ;

    vector<vector<int>> adjmatrix(n + 1 , vector<int> (n+1 ,0)) ;

    // undirected graphs
    for(int i = 0 ; i < edges ; i++ ){
        int u , v , w; cin >> u >> v >> w ;
        adjmatrix[u][v] = w ;
        adjmatrix[v][u] = w ; // if directed then no v to u path , this line would not be there 
        adjmatrix[u][u] = 1 ;
        adjmatrix[v][v] = 1 ;

    }
    for(int i = 0 ; i < n+1 ; i ++){
        for(int j = 0 ; j < n+1 ; j++){
            cout << adjmatrix[i][j] << " " ;
        }
        cout << endl ;
    }
}
void adjacency_list(){
    int n ; cin >> n ;
    int edges ; cin >> edges ;
    int weight ; cin >> weight ;
    //vector<int> adj[n+1] ;
    vector<pair<int,int>> adj[n+1] ; // if weighted graph
    for(int i = 1 ; i < n + 1 ; i++){
        int u , v; cin >> u >> v ;

        // adj[u].push_back(v) ;
        // adj[v].push_back(u) ; // if directed then no v to u path , this line would not be there 

        // weighted and directed
        adj[u].push_back({v,weight}) ;
        // adj[v].push_back({u,weight}) ; / /weighted and undirected


    }

    
}
int main(){
    return 0 ;
}