#include <bits/stdc++.h>
using namespace std;
vector<int> G[10000];
map<pair<int,int>,int> cost;
map<int,int> D;
map<int,int> Distance;
map<int,int> V;
void primsA(int s,int n){
	D[s] = -1;
	Distance[s] = 0;
	int total = 0;
	while(total!=n){
	int m = 10000,ns = -1;
	for(int i=0;i<G[s].size();i++){
		if(V[G[s][i]]==1){
			continue;
		}
		else{
			if(D[G[s][i]]==0||D[G[s][i]]>cost[{s,G[s][i]}]){
				D[G[s][i]] = cost[{s,G[s][i]}];
				if(m>cost[{s,G[s][i]}]){
						m = cost[{s,G[s][i]}];
						ns = G[s][i];
				}
			}
		}
	}
	if(ns!=-1){
		Distance[ns] = cost[{s,ns}] + Distance[s];
	}
	V[s] = 1;
	total += 1;
	s = ns;
	}
	cout << "Shortest path via prims with source is: \n";
	for(auto& it : Distance){
		cout << it.first << " " << it.second << "\n";
	}
	return;
}
int main(){
	//number of vertices
	int n;
	cin >> n;
	//number of edges
	int e;
	cin >> e;
	for(int i=0;i<e;i++){
		//starting and terminal vertex and weight
		int u,v,w;
		cin >> u >> v >> w;
		u--;
		v--;
		G[u].push_back(v);
		if(w<0){
			w = 10000;
		}
		cost[{u,v}] = w;
	}
	//primsalgorithm
	primsA(0,n);
	return 0;
}
