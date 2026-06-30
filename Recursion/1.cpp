#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1)return 1;
    return n*factorial(n-1);
}

int fibonacci(int n){
    if(n==0 || n==1) return n;

    return fibonacci(n-1)+fibonacci(n-2);
}

int tribonacci(int n){
    if(n==0) return 0;
    if(n==1 || n==2) return 1;

    return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
}

bool FindinLineartargetKey(int arr[],int size,int key){
    while(size>0){
        if(arr[0]==key)return true;
        FindinLineartargetKey(arr+1,size-1,key);
    }
    return false;

}

bool FindinBinarytargetKey(int arr[],int start,int end,int key){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid==key){
            return true;
        }
        else if(mid > key){
            return FindinBinarytargetKey(arr,start,mid-1,key);
        }
        else{
            return FindinBinarytargetKey(arr,mid+1,end,key);
        }

    }

    return false;

}







int main(){
    int x=6;
    int arr1[x]={1,2,3,4,5,6};
    cout<<factorial(x)<<endl;
    cout<<fibonacci(x)<<endl;
    cout<<tribonacci(x)<<endl;
    FindtargetKey(arr1,x,5);
} 

