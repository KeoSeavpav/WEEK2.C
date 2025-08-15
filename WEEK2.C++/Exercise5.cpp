#include <iostream>
using namespace std;

int main() {
 int A[2][3] = {{1,2,3 } ,{4,5,6}};
 int B[3][2] = { {7,8} ,{9,10},{10,11}};
 cout<<"Matrix A"<<endl;
 for(int i =0 ;i<2 ;i++){
     for(int j =0 ;j<3 ; j++){
         cout<<A[i][j]<<" ";
     }
     cout<<endl;
 }
 cout<<"Matrix B"<<endl;
 for(int i =0 ;i<3 ;i++){
     for(int j =0 ;j<2 ; j++){
         cout<<B[i][j]<<" ";
     }
     cout<<endl;
 }
  cout<<"Maltiply matrix"<<endl;
  int sum =0 ;
 for(int i =0 ;i<2 ;i++){
     for(int j =0 ;j<2 ; j++){
       for(int k =0 ;k<3 ;k++){
           sum=sum+A[i][k]*B[k][j];
       } 
       cout<<sum<<" ";
       sum=0;
    
     }
     cout<<endl;
 }
 
    return 0;
}