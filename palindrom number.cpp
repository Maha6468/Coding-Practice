#include <iostream>
using namespace  std;
int main(){
int n,rem,rev=0,temp;
cout<<"Enter a number:";
cin>>n;
temp=n;
if(n<0){
    cout<< "This is not  Palindrome number";
    return 0;
}
while(n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
if(temp==rev){
    cout<<"This is Palindrome number";
}else{
cout << "This is not Palindrome number";
}
return 0;
}

/*
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10 == 0 && x!=0)){
            return false;
        }
        int temp=x ;
        long long rev=0;
while(x!=0){
    rev = rev * 10 + x % 10;
    x=x/10;
}
return temp==rev;
}
};*/
