#include<iostream>
#include<string>
using namespace std;
bool srt (string str1, string str2){
    if (str1.length()!=str2.length()){
        cout << "not valid anogram";
        return false;
    }
    int count [26] = {0};
    for (int i = 0; i<str1.length(); i++){
        int indx = str1[i] -'a';
        count[indx]++;

    }
    for (int i =0;i<str2.length(); i++){
        int indx = str2[i]-'a';
        if (count[indx]==0){
            cout<<"not a valid anogram";
            return false;
        }
        count[indx]--;
    }
    cout<<"is valid anagram";
    return true;
}
int main (){
    string str1 = "hello";
    string str2 = "elloh";
    srt(str1,str2);
    return 0;

}