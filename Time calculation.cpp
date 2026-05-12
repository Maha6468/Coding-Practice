#include <iostream>
using namespace std;
int main (){
int totalSec;
cin>>totalSec;
int h=totalSec/3600;
cout<<"hour= "<<h;
int m=(totalSec%3600)/60;
cout<<"Minutes= "<<m;
int s=totalSec%60;
cout<<"Seconds= "<<s;
cout<<"\n"<<h<<": "<<m<<": "<<s;
}
