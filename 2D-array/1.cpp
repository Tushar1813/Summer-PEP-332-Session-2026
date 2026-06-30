#include<iostream>
using namespace std;


void evenColumn(int arr[][4],int row,int column){  //Row major operation in memory due to which it needs to know how many jumps to make its memory efficient
    for(int i=0;i<row;i++){
        for(int j=1;j<column;j+=2){
            cout<< arr[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int arr1[3][4];
    int arr2[4][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    evenColumn(arr1,3,4);

}