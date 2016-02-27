#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
#include <time.h>
#include <string>
#include <string.h>
#include <sstream>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

typedef long long ll;

int main(){
  int n;
  cin >> n;
  priority_queue<ll, vector<ll>, greater<ll> > pque;

  for(int i = 0; i < n; i++){
    ll l;
    cin >> l;
    pque.push(l);
  }

  ll cost = 0;

  while(pque.size() > 1){
    ll a = pque.top(); pque.pop();
    ll b = pque.top(); pque.pop();
    ll c = a + b;
    cost += c;
    pque.push(c);
  }

  cout << cost << endl;

  return 0;
}
