#include<iostream>
using namespace std;

class myQueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    myQueue(int size){
        this->size=size;
        arr=new int(size);
        front=-1;
        rear=-1;
    }

    void enqueue(int val){
        if(rear==size-1){
            cout<<"Queue Overflow"<<endl;
        }
        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear]=val;
    }

    void dequeue(){
        if(front==-1 || front>rear){
            cout<<"Queue underflow"<<endl;
        }
        front++;
    }

    void frontelementInQueue(){
        if(front==-1 || front>rear){
            cout<<"Queue is empty"<<endl;
        }
        cout<<arr[front]<<endl;
    }
};
