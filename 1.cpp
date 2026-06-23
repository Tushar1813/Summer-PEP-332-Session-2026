#include <iostream>
using namespace std;

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
    for(int i=0; i<5; i++){
        cout<<"*";
        for(int j=0;j<3;j++){
            if(i==0 ||i==4){
                cout<<'*';
            }
            else
            {cout<<" ";}
        }
        cout<<"*"<<endl;
    }
}