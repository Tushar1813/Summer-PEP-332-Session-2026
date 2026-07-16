#include<iostream>
#include <stack>
using namespace std;

int prefixEval(string s){
    //create a stack
    //traverse string from right to left
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--){
     // If operand
        if (s[i] >= '0' && s[i] <= '9') {
            st.push(s[i] - '0');   // Convert char to int
        }
        // If operator
        else {
            int op1 = st.top();
            st.pop();

            int op2 = st.top();
            st.pop();

            switch (s[i]) {
                case '+':
                    st.push(op1 + op2);
                    break;
                case '-':
                    st.push(op1 - op2);
                    break;
                case '*':
                    st.push(op1 * op2);
                    break;
                case '/':
                    st.push(op1 / op2);
                    break;
            }
        }
    }

    return st.top();
}
    //if s[i] -> operand : push to stack
    //else if operator -> create two variables to store the value of top two elements from stack
    //pop them and evealuate with operator ,then push the resultant back in stack
    //return the last remainning element from stack



int main(){
    string s1="-+7+45+20";
    cout << "Result = " << prefixEval(s1);

    return 0;
}

// #include <iostream>
// #include <stack>
// using namespace std;

// int prefixEval(string s) {
//     stack<int> st;

//     // Traverse from right to left
//     for (int i = s.length() - 1; i >= 0; i--) {

//         // If operand
//         if (s[i] >= '0' && s[i] <= '9') {
//             st.push(s[i] - '0');   // Convert char to int
//         }
//         // If operator
//         else {
//             int op1 = st.top();
//             st.pop();

//             int op2 = st.top();
//             st.pop();

//             switch (s[i]) {
//                 case '+':
//                     st.push(op1 + op2);
//                     break;
//                 case '-':
//                     st.push(op1 - op2);
//                     break;
//                 case '*':
//                     st.push(op1 * op2);
//                     break;
//                 case '/':
//                     st.push(op1 / op2);
//                     break;
//             }
//         }
//     }

//     return st.top();
// }

// int main() {
//     string s1 = "-+7+45+20";

//     cout << "Result = " << prefixEval(s1);

//     return 0;
// }