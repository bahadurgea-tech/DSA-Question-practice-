// valid palindrome
#include <iostream>
using namespace std;
bool revers (char arr [],int n){
   int  str = 0;
   int end = n-1;
   while(str<=end ){
    if(arr[str++]!=arr[end--]){
         cout<<" not valid palindrome";
        return false;
   }
   } 
   cout<<"valid palindrome";
return true;
}
int main (){
char arr[]= "shubhiii";
revers(arr,strlen(arr));
return 0;
}