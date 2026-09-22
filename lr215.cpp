//string function
#include<iostream>
#include<string>
using namespace std;
int main (){
    string srt ="hello";
     cout<<srt<<endl;
srt = "shubhiii";
 cout<<srt;
// //input 
// cin>>srt;
// cout<<srt;
// getline(cin,srt);
// cout<<srt;
// member function;
cout<<srt.length()<<endl;
cout<<srt.at(2)<<endl;
cout<<srt.substr(1,3)<<endl;
cout<<srt.find("iii")<<endl;
}