#include <iostream>
#include <iomanip>
using namespace std;
int main(){

string name;
double salary,sales;
cin>>name;
cin>>salary>>sales;
double total=(sales*15/100+salary);
cout<<fixed<<setprecision(2);
cout<<"TOTAL = R$ "<<total<<endl;

}
