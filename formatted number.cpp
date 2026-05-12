
#include <bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
string s=to_string(n);
int len=s.length();
      for(int i=0;i<len;i++){
        cout<<s[i];
          if((len-1-i)%3==0 && i!=len-1 ){
            cout<<",";
        }
}
}

