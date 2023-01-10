#include<iostream>
#include<stack>
using namespace std;
string InfixToPostfix(stack<char> s,string infix){
    string postfix;
    for(int i=0;i<infix.length();i++){
        if((infix[i]>='a' && infix[i]<='z')||(infix[i]>='A' && infix[i]<='Z')){
        postfix += infix[i];
         }
    else(infix[i]=='*');
    {
        while((s.top()!='*')&&(s.empty())){
          char temp = s.top();
          postfix+=temp;
          s.pop();
        }
    }
    

    }
    while(!s.empty()){
        postfix+=s.top();
        s.pop();
    }
    return postfix;
}
int main(){
    string infix_exp,postfix_exp;
    cout<<"Masukan Infix"<<endl;
    cin >> infix_exp;
    stack<char>s;
    cout<<"Infix:"<< infix_exp<<endl;
    postfix_exp=InfixToPostfix(s,infix_exp);
    cout<<"postfix  : "<< postfix_exp << endl;
    
}