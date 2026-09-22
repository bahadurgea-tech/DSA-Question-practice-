#include<iostream>
#include<string>
using namespace std;
void srt (string str ){
    // ous 1
   int  count = 0;
    for (int i =0; i<str.length();i++){
        if(str[i]>='a'==str[i]<='z'){
            count++;
        }
    }
    cout<<count<<endl;
    //ous 2

    
}
int main (){
    string str = "heLLo";
    srt (str);

}