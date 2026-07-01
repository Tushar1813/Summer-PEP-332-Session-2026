#include<iostream>
using namespace std;


string reverse(string s){
    int n=s.length();
    int i=0;
    int j=n-1;
    while(i<j){
        swap(s[i++],s[j--]);
    }
    return s;
}

int main(){
    string str1="Hello";
    string str2="hello";
    // if(str1==str2){
    //     return true;
    // }
    // else{
    //     return false;
    // }

    str1=reverse(str1);
    cout<< str1<<endl;
    

}