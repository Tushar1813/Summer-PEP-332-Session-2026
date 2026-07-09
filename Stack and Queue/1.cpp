#include<iostream>
using namespace std;

class myStack{
    public:
    int *arr;
    int top;
    int size;

    myStack(int size){
        this->size = size;
        arr=new int[size];
        top=-1;
    }

    void push(int val){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }

        top++;
        arr[top]=val;
    }

    void pop(){
        if(top==-1){
            cout<<"Empty stack"<<endl;
            return;
        }
        top--;
    }

    int peakValue(){
        if(top==-1){
            return -1;
        }
        else{
            return arr[top];
        }
    }

    bool checkStackEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    myStack s1(5)
}