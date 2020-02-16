#include "solution.h"

void Solution::heapsort(vector<int>& v) { 

  //auto comp = [](int left, int right) { return left > right; };
  //priority_queue<int, vector<int>, decltype(comp)> q(comp);
  priority_queue<int, vector<int>, greater<int> > q;
  for(auto& i:v)
    q.push(i);
  v.clear();
  while(!q.empty())  
  {
    v.push_back(q.top());
    q.pop();
  }  
}

