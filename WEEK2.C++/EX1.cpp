#include<iostream>
using namespace std ;
int add1( int a , int b){
    return a+b;
}
float add2(float a ,float b){
    return a+b;
}
int subtract( int a ,int b){
    return a-b;
}
int multiply (int a ,int b){
    return a*b;
}
double divide ( int a ,int b =1 ){
   
    return a/b ; 
    
}
int main(){

int result1 = add1(5,3);
float result2 = add2(2.5,4.2);
int result3 = subtract(10,4);
int result4 = multiply (7,6);
int result5 = divide(20,4);
int result6 = divide(9);
cout<<"add ="<<result1<<endl;
cout<<"add ="<<result2<<endl;
cout<<"substract ="<<result3<<endl;
cout<<"multiply ="<<result4<<endl;
cout<<"DIVIDE ="<<result5<<endl;
cout<<"DIVIDE ="<<result6<<endl;



    return 0;
}
