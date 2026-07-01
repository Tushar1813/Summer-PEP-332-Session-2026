#include<iostream>
using namespace std;

bool search(int arr[][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

void sumOfRow(int arr[][3],int row,int col){
    int maxSum=0;
    int x=0;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>=maxSum){
            maxSum=sum;
            x++;
        }
    }
    cout<<"Max Sum : "<<maxSum<<" Index at Row : "<<x<<endl;


}


void ZigZag(int arr[][4],int row,int col){     //Down then up wave
    
    for(int j=0;j<col;j++){
        if(j%2==0){
                for(int i=0;i<row;i++){
                    cout<<arr[i][j]<<" ";
                    }
        }
        else{
            for(int i=row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
                }

        }
        cout<<endl;
        
        
    }
    


}

void SpiralMatrix(int arr[][4],int row,int col){  
    int topRow=0;
    int bottomRow=row-1;
    int leftColumn=0;
    int rightColumn=col-1;
    
    while(topRow<=bottomRow && leftColumn<=rightColumn){
        for(int j=leftColumn;j<=rightColumn;j++){
            cout<<arr[topRow][j]<<" ";
        }
        topRow++;

        for(int i=topRow;i<=bottomRow;i++){
            cout<<arr[i][rightColumn]<<" ";
        }
        rightColumn--;

        for(int j=rightColumn;j>=leftColumn;j--){
            cout<<arr[bottomRow][j]<<" ";
        }
        bottomRow--;

        for(int i=bottomRow;i>=topRow;i--){
            cout<<arr[i][leftColumn]<<" ";
        }
        leftColumn++;
 
    }
        
        
    
    


}


//value of max sum and which index? and if multiple rows have same max sum return the index of last row

int main(){
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[4][4]=
    {{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}};
    // cout<<search(arr1,3,3,6)<<endl;
    // sumOfRow(arr1,3,3);
    // ZigZag(arr2,4,4);
    SpiralMatrix(arr2,4,4);
}