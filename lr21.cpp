//char converter 
#include <iostream>
using namespace std;
//function for capital liter
void srtc (char rt [],int n){
    for (int i =0;i<n;i++){
        char ch =rt[i];
        if(ch>='A'&&ch <='Z'){
continue;
        }else{
            rt[i]=ch - 'a'+'A';
        }
    }
//function for smolle leter 
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
    //smalle letter
    srts(word,strlen(word));
    cout<<word;
    cout<<endl;
    //capitel letter
     srtc(word,strlen(word));
    cout<<word;
    return 0;

}