#include <iostream>
using namespace std;
#include <queue>
#include <stack>
#include <unordered_set>

const int V = 5;

bool matrix[V][V] = {
    {0, 1, 0, 1, 0}, // A
    {1, 0, 1, 0, 0}, // B
    {0, 1, 0, 0, 1}, // C
    {1, 0, 0, 0, 1}, // D
    {0, 0, 1, 1, 0}  // E

};

void BFS (int startV){
  bool discovered[V] = {false};
  queue<int> q;
  
  q.push(startV);
  discovered[startV] = true;

  cout << "BFS: ";

  while (!q.empty()){
    int v = q.front();
    q.pop();
    cout << char('A' + v) << " ";

    for (int i = 0; i < V; i++){
      if (matrix[v][i] && !discovered[i]){
        q.push(i);
        discovered[i] = true;
      }
    }
    cout << endl;
  }
}

void DFS (int startV){
  bool discovered[V] = {false};
  stack<int> s;
  
  s.push(startV);
  
  cout << "DFS: ";

  while (!s.empty()){
    int v = s.top();
    s.pop();
    if (!discovered[v]){
      cout << char('A' + v) << " ";
      discovered[v] = true;

      for (int i = 0; i < V; i++){
        if (matrix[v][i] && !discovered[i]){
          s.push(i);
        }
      }
    }
    cout << endl;
  }

  
}


int main() {

  int startV = 0;

  BFS(startV);
  DFS(startV);
  return 0;
}