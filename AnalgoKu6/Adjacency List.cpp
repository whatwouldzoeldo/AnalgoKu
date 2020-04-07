/*
Nama    : Muhammad Zulfikar Ali
NPM     : 140810180064
Kelas   : B
*/

#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void displayAdjList(list<int> adj_list[], int v) {
   for(int i = 1; i<v; i++) {
      cout << i << "--->";
      list<int> :: iterator it;
      for(it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
         cout << *it << " ";
      }
      cout << endl;
   }
}

void add_edge(list<int> adj_list[], int u, int v) {
   adj_list[u].push_back(v);
   adj_list[v].push_back(u);
}

main(int argc, char* argv[]) {
   int v = 9;
   list<int> adj_list[v];
   add_edge(adj_list, 1, 2);
   add_edge(adj_list, 1, 3);
   add_edge(adj_list, 2, 3);
   add_edge(adj_list, 2, 4);
   add_edge(adj_list, 2, 5);
   add_edge(adj_list, 3, 5);
   add_edge(adj_list, 3, 7);
   add_edge(adj_list, 3, 8);
   add_edge(adj_list, 4, 5);
   add_edge(adj_list, 5, 6);
   add_edge(adj_list, 7, 8);
   displayAdjList(adj_list, v);
}
