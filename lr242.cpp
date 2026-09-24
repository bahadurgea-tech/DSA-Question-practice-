//2D dynamic array
#include<iostream>
using namespace std;
int main (){
    int row = 3;
    int col = 4;
    int ** matrx = new int * [row];
    for (int i =0;i<row;i++){
        matrx[i] = new int [col];
    }
//store a element 
int x = 1 ;
for (int i =0; i<row;i++){
    for (int j = 0 ; j<col;j++){
        matrx[i][j]=x++;
        cout<<matrx[i][j]<<" ";
    }
    cout<<endl;
}    
}