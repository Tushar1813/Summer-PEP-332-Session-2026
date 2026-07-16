class myCircularQueue{
    vector<int> data;
    int front;
    int rear;
    int size;
    int count;
    myCircularQueue(int k){
        front=0;
        rear=-1;
        count=0;
        size=k;
    }

    bool enQueue(int val){
        if(isFull()){
            return false;
        }
        rear=(rear+1)%size;
        data[rear]=val;
        count++;
        return true;
    }

    bool dequeue(){
        if(isEmpty()){
            return false;
        }
        front=(front+1)%size;
        count--;
        return true;
    }

    int Front(){
        if(isEmpty()){
            return -1;
        }
        return data[front];
    }

    int Rear(){
        if(isEmpty()){
            return -1;
        }
        return data[rear];
    }

    bool isEmpty(){
        return (count==0);
    }
    bool isFull(){
        return (count==size);
    }
};