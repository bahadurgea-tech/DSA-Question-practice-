#include <iostream>
using namespace std;
void srtc (char rt [],int n){
    for (int i =0;i<n;i++){
        char ch =rt[i];
        if(ch>='A'&&ch <='Z'){
continue;
        }else{
            rt[i]=ch - 'a'+'A';
        }
    }

}void srts (char rt [],int n){
    for (int i =0;i<n;i++){
        char ch =rt[i];
        if(ch>='a'&&ch <='z'){
continue;
        }else{
            rt[i]=ch - 'A'+'a';
        }
    }

}
int main (){
    char word []= "ShuBhiI";
    srts(word,strlen(word));
    cout<<word;
    cout<<endl;
     srtc(word,strlen(word));
    cout<<word;

}