#include<iostream>
#include<stack>
using namespace std;


void reverseString(string str){
    stack<string> st;
    for(int i=0;i<str.length();i++){
        string ans="";
        while(str[i] != ' ' && i<str.length()){
            ans+=str[i];
            i++;
        }
        st.push(ans);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){
    // stack<int> s1;
    // s1.push(1);
    // s1.push(2);
    // s1.push(3);
    // cout<<"top element: "<<s1.top()<<endl;
    // s1.pop();
    // cout<<"top element: "<<s1.top()<<endl;

    // while(!s1.empty()){
    //     cout<<s1.top()<<endl;
    //     s1.pop();
    // }
    string s="Hello World!";
    reverseString(s);
    cout<<s<<endl;

}