#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    //Constructor
    Node(int val){
        data= val;
        next=NULL;
    }
};

void func1(int x){
        cout<<"Value of x:"<< x <<endl;
    }

//Pass by value used to not change the value just make a copy of original var
int func2(int y){
        int ans=2*y;
        return ans;
    }


//  Pass by reference  used to change the original var value
void doubleTheValue(int &num){
    num*=2;
    cout<<"Inside:"<<num<<endl;
}


int main(){
    // int age=10;
    // int 4 byte
    // long long 8byte
    // float 4 byte
    // double 8 byte
    // char 1 byte
    // bool 1 byte

    // if(student.marks > 50 && student.leaves < 10){
    //     cout<<"Passed"<<endl;
    // }
    // else{
    //     cout<<"failed!!"<<endl;
    // }


    //switch case
    // char grade='A';
    // switch(grade){
    //     case 'A':
    //     cout<<"Excellent"<<endl;
    //     break;
    //     case 'B':
    //     cout<<"good"<<endl;
    //     break;
    //     case "C":
    //     cout<<"Average"<<endl;
    //     break;
    //     default:
    //     cout<<"Invalid"<<endl;
    // }



    //ternary case
    // int x=2;
    // int y=3;
    // int result=(x>y)? x : y;
    // cout<<result<<endl;


    //Loops:

    // for loop
    // for(int i=0; i<5; i++){
    //     cout<<"*";
    //     for(int j=0;j<3;j++){
    //         if(i==0 ||i==4){
    //             cout<<'*';
    //         }
    //         else
    //         {cout<<" ";}
    //     }
    //     cout<<"*"<<endl;
    // }
    // func1(3);
    // cout<< func2(2) <<endl;
    // int ab=2;
    // cout<<&ab<<endl;
    // doubleTheValue(ab);

    // Pointers are same as variables ie container but contains only address of other variables
    // int a=10;
    // int *ptr=&a;  // we always use same datatype for pointer as of the address of whoever variable it is taking
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;// whenever we use *ptr after that initialization it will just Dereferences itslf ie ptr  and fetch the value of place inside integer it is referencing to
    // cout<<*(ptr+1)<<endl;//garbage value taking from after the place where  var a points 
    // cout<<*ptr + 1<<endl; 
    
    //Constructor Method
    // it is the method which is of same name as class and it will have no return type and as sooon as the object is created the construcror will be called
    // Node *head= new Node(2);// Runtime  variable created  Dynamic memory allocation(Heap)

    // Array
    // int arr[5]= {1,2,3,4,5};
    // for(int i: arr){
    //     cout<< i <<endl;
    // }

    // Vectors:

    vector<int> vec1={1,2,3,4,5};
    cout<<vec1[4]<<endl;
    cout<<vec1.at(4)<<endl;
    cout<<"while Pushing_back 7 in vec1:"<<endl;
    vec1.push_back(7);
    
    for(int i:vec1){
        cout << i<< endl;
    }
    cout<<"while Pop_back vec1:"<<endl;

    vec1.pop_back();
    for(int i:vec1){
        cout << i<< endl;
    }


    cout<<"After using clear() vec1 :"<<endl;
    vec1.clear();
    for(int i:vec1){
        cout << i<< endl;
    }
}