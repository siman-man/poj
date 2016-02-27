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

struct station {
  int dist;
  int fuel;

  station(int dist, int fuel){
    this->dist = dist;
    this->fuel = fuel;
  }

  bool operator <(const station &e) const{
    return dist > e.dist;
  }    
};

int main(){
  int n;
  cin >> n;
  vector<station> station_list;
  priority_queue< int, vector<int> > pque;

  for(int i = 0; i < n; i++){
    int fuel;
    int dist;
    cin >> dist >> fuel;
    station_list.push_back(station(dist, fuel));
  }

  int goal, p;
  cin >> goal >> p;
  int c = p;
  int i = 0;

  int stop_cnt = 0;
  sort(station_list.begin(), station_list.end());

  while(c < goal){
    for(;i < n; i++){
      if(goal - station_list[i].dist <= c){
        station st = station_list[i];
        pque.push(st.fuel);
      }else{
        break;
      }
    }

    if(!pque.empty()){
      c += pque.top(); pque.pop();
      stop_cnt++;
    }else{
      break;
    }
  }

  if(c < goal){
    cout << -1 << endl;
  }else{
    cout << stop_cnt << endl;
  }

  return 0;
}
