/*#include <iostream>
using namespace std;
int main(){
int arr[5];
cout<<"Enter the five number :";
for(int i=0; i<5; i++){
    cin>>arr[i];
}

cout<< "Array elements are:";
for(int i=0;i<5;i++){
    cout<<arr[i]<<"  ";
}
}*/

/*#include <iostream>
using namespace std;
int main(){
int arr[5];
int sum=0;
cout<<"Enter 5 elements:";
for(int i=0; i<5;i++){
    cin>> arr[i];
}
cout<<"Elements of array:";
for(int i=0;i<5;i++){
    cout<<arr[i]<<"  \n";
    sum=sum+arr[i];


}
cout<<"Sum of array elements:"<<sum;
}*/

/*#include <iostream>
using namespace std;
int main(){
int arr[5];

cout<<"Enter 5 elements:";
for(int i=0; i<5;i++){
    cin>> arr[i];
}
int max=arr[0];
cout<<"Elements of array:";
for(int i=0;i<5;i++){
    cout<<arr[i]<<"  ";
    if(arr[i]>max){
        max=arr[i];
    }
}
cout<<"\nMax values is :"<<max;

}*/

#include <iostream>
using namespace std;
int main(){
    int n;
    int target;
    cout<<"Enter n number:";
cin>>n;
int arr[n];
cout<<"Enter the target:";
cin>>target;
for(int i=0; i<n;i++){
    cin>>arr[i];

}
cout<<"Array is : ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
}
cout<<"\nPair of index for target:";
for(int i=0; i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==target){
            cout<< "target is:"<< i<<"  "<<j;
        }
    }
}
}
//
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
   for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
        if(arr[i]+arr[j]==target){
            return {i,j};
        }
    }
   }
return {0,0};

    }
};
//



































