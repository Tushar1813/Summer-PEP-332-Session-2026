#include<iostream>
using namespace std;

int findLinearSearch(int &arr,int x){
    int key=x;
    for(int i:arr){
        if(i==key && i>20){
            return 2*key;
        }
    }
    return (key/2);
}

int main(){
    int arr1={12,32,45,65,67};
    int key1=45;
    cout<< findLinearSearch(arr1,key1);
}

#include <iostream>
#include <vector> // Include the vector library
using namespace std;

// Pass the vector by constant reference
int findLinearSearch(const vector<int>& arr, int x){
    int key = x;
    for(int i : arr){
        if(i == key && i > 20){
            return 2 * key;
        }
    }
    return (key / 2);
}

int main(){
    // Declare as a vector instead of a raw array
    vector<int> arr1 = {12, 32, 45, 65, 67}; 
    int key1 = 45;
    
    cout << findLinearSearch(arr1, key1) << endl;
    
    return 0;
}