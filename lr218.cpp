//vectocs
#include<iostream>
#include<vector>
using namespace std;
int main (){
    int key = 17;
   
    vector<int> vic = {2,7,11,15};
int str = 0;
int end = vic.size()-1;
   while (str<end){
    if ((vic[str]+vic[end])==key){
        cout<<str<<end<<endl;
        break;
    }
    if ((vic[str]+vic[end])<key){
        str++;
    }
    if ((vic[str]+vic[end])>key){
        end--;
    }
   }
   
}