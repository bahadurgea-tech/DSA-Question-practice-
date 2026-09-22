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
    cout<<count<<endl;}
    //ous 2
    void sro (string str1 , string str2){
        int sh;
        int sh2;
        int count [26]={0};
        for (int i =0; i<str1.length(); i++){
            int indx = str1[i] - 'a';
           
            count[indx]++;}
            for (int i =0;i<26;i++){
                cout<<count[i]<<",";
            }cout<<endl;
        for (int i =0; i<str2.length(); i++){
            int indx = str2[i]-'a';
            count[indx]--;}
             for (int i =0;i<26;i++){
                cout<<count[i]<<",";
            }cout<<endl;
        
            for (int i=0;i<26;i++){
               
                if (count[i]!=0){
                sh = i;
                break;
                }
            }
            for (int i=0;i<26;i++){
                if (count[i]!=0&&count[i]!=sh){
                    sh2=i;
                
                break;
                }
            }
           
         

    
}
int main (){
    string str1 = "hello";
    string str2 = "elloa";
    cout<<"qus1"<<"=";
    srt(str1);
    cout<<"qus2"<<"="<<endl;
    sro (str1,str2);

}