#include <iostream>
#include <stack>
using namespace std;
int prefix(string expression){
stack <int> mystack;
for(int i=expression.size()-1 ; i>=0; i--){
    if(isdigit(expression[i]))
        mystack.push(expression[i]-'0');
    else{
    int op1=mystack.top();
    mystack.pop();
    int op2=mystack.top();
    mystack.pop();
     if (expression[i]=='+'){
       mystack.push(op1+op2);
       }
       
    else if (expression[i]=='-'){
       mystack.push(op1-op2);
       }
   else if (expression[i]=='*'){
       mystack.push(op1*op2);
       }
  else  if (expression[i]=='/'){
       mystack.push(op1/op2);
       }
       
       }
       }
       return mystack.top();
       }
int postfix(string expression){
stack <int> mystack;
for(int i=0 ; i<=expression.size()-1; i++){
    if(isdigit(expression[i]))
        mystack.push(expression[i]-'0');
    else{
    int op1=mystack.top();
    mystack.pop();
    int op2=mystack.top();
    mystack.pop();
    if (expression[i]=='+'){
       mystack.push(op1+op2);
       }
       
    if (expression[i]=='-'){
       mystack.push(op1-op2);
       }
    if (expression[i]=='*'){
       mystack.push(op1*op2);
       }
    if (expression[i]=='/'){
       mystack.push(op1/op2);
       }
       
       }
       }
       return mystack.top();
       }
int main(){
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"\nEVALUATING POSTFIX AND PREFIX EXPRESSION \n"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
int result,choice;
string expression;
cout<<"Enter the expression for evaluation"<<endl;
cin>>expression;
cout<<"****************Menu*****************\n\n";
cout<<"1.Postfix Evaluation "<<endl;
cout<<"2.Prefix Evaluation "<<endl;
cout<<"3.Quit "<<endl;
cout<<"*********************************\n\n";
cin>>choice;
switch(choice){
case 1:
result=postfix(expression);
cout<<"The Value of Post fix expression is "<<result<<endl;
break;
case 2:
result=prefix(expression);
cout<<"The Value of Pre fix expression is "<<result<<endl;
break;
case 3:

cout<<"Program ends"<<endl;
exit(0);
break;

default:
cout<<"INVALID CHOICE "<<endl;
}
return 0;
}