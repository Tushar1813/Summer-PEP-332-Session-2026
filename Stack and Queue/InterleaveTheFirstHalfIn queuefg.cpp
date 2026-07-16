class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        //11 12 13 14 15 16 17 18 19 20
        stack<int> st;
        int halfSize=q.size()/2;
        //push the first half in the stack
        //queue 16 17 18 19 20 stack 15 14 13 12 11
        for(int i=0;i<halfSize;i++){
            st.push(q.front());
            q.pop();
            
        }
        
        //enque back the sack elements
        //queue 16 17 18 19 20 15 14 13 12 11
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        //queue 15 14 13 12 11 16 17 18 19 20
        //deque the firsthalf and then enque back in queu
        for(int i=0;i<halfSize;i++){
            q.push(q.front());
            q.pop();
        }
        
        //push firsthalf in stack of queue
        //queue 16 17 18 19 20
        //stack 11 12 13 14 15
        for(int i=0;i<halfSize;i++){
            st.push(q.front());
            q.pop();
            
        }
        
        //Interleav the elments of queue and stack
        // queue 11 16 12 17 13 18 14 19 15 20
        while(!st.empty()){
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
    
    }
}; 

stack<int> st;
int halfSize=q.size()/2;

//quue 1 2 3 4 5 6 7 8
//result 1 5 2 6 3 7 4 8

for(int i=0;i<halfSize;i++){
    st.push(q.front());
    q.pop();
}

//5 6 7 8 que
// 4 3 2 1 stack

while(!st.empty()){
    q.push(st.top());
    st.pop();
}

//queue 5 6 7 8 4 3 2 1
for(int i=0;i<halfSize;i++){
    q.push(q.front());
    q.pop();
}

//queue 4 3 2 1 5 6 7 8
for(int i=0;i<halfSize;i++){
    st.push(q.front());
    q.pop();
}

//stack 1 2 3 4 
//queue 5 6 7 8
while(!st.empty()){
    q.push(st.top());
    st.pop();
    q.push(q.front());
    q.pop();
}