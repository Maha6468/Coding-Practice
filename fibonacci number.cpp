#include <bits/stdc++.h>
using namespace std;
int main() {
    int a = 1, b = 1, n;
    cin >> n;
    for (int i = 3; i <= n; i++) {
            cout<<a<<" ";  //1,1,2,3,5,8,13
        int c = a + b; //2,3,5,
        a = b;  //a=1,2,3
        b = c;  //b=2,3,5
    }
    cout <<"\n"<< b;
    return 0;
}
