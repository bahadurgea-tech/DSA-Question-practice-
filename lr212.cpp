//revers char arr
#include <iostream>
using namespace std;
//function fow revers arr
void revers (char arr [],int n){
   int  str = 0;
   int end = n-1;
   while(str<=end ){
    swap(arr[str],arr[end] );
    str++;
    end--;
   }
}
int main (){
    char rt []= "shubhiii";
    revers(rt,strlen(rt));
    cout<<rt;
    //time complexity is o(n)

}