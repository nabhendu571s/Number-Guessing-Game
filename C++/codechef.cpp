// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int minOperations(string& s) {
//     int n = s.size();
//     vector<int> count(26, 0); // Count of occurrences for each character
//     int segments = 0;
    
//     for (char c : s) {
//         if (count[c - 'a'] == 0) {
//             segments++; // Count the number of segments
//         }
//         count[c - 'a']++;
//     }
    
//     int maxCount = *max_element(count.begin(), count.end());
    
//     return n - maxCount * segments; // Minimum operations required
// }

// int main() {
//     int T;
//     cin >> T;
//     cin.ignore(); // Ignore newline after reading T

//     while (T--) {
//         string s;
//         getline(cin, s);
//         cout << minOperations(s) << endl;
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int display(int a,int b,int x,int y){
  if(a<=x&&b<=y){
cout<<"POSSIBLE\n";
  }else{
    cout<<"IMPOSSIBLE\n";
  }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        display(a,b,x,y);
    }
}