// https://codeforces.com/problemset/problem/791/A
// 791 A. Bear and Big Brother
// 18-Oct-2020

#include <bits/stdc++.h>
using namespace std;

int count(int a, int b) {
  int i=0;
  for(i;a<=b;i++){
    b*=2;
    a*=3;
  }
  return i;
}

int main() {
  ios::sync_with_stdio(false);

  int a, b;
  cin>>a>>b;
  cout<<count(a, b);
}
