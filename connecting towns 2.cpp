#include <bits/stdc++.h>
using namespace std;
 
int main() {
   
    int T;
    cin >> T;
     
    while(T--) {
        int n, res = 1, val;
        cin >> n;
         
        n -= 1;
         
        for(int i = 0; i < n; i++) {
            cin >> val;
            res = res * val;
            res = res % 1234567;
        }
         
        cout << res << endl;
         
    }
    return 0;
}
