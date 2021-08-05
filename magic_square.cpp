#include<iostream>
#include<stdlib.h>
using namespace std;
bool ismagicsquare(int array[][100],int m,int n){
int sum_d=0,sum_d2=0,sum_rows=0,sum_col=0;
for(int i=0;i<m;i++)
sum_d=sum_d+array[i][i];
for(int j=0;j<m;j++)
sum_d2=sum_d2+array[j][n-1-j];

if(sum_d!=sum_d2)
return false;

for(int i=0;i<m;i++){
sum_rows=0;
for(int j=0;j<n;j++){
sum_rows=sum_rows+array[i][j];
}
if(sum_rows!=sum_d)
return false;
}

for(int i=0;i<m;i++){
sum_col=0;
for(int j=0;j<n;j++)
sum_col=sum_col+array[j][i];
if(sum_col!=sum_d)
return  false;
}
return true;
}
int main(){
int m,n;
cout<<"Enter the number of rows:";
cin>>m;
cout<<"Enter the number of columns:";
cin>>n;
if(m!=n){
cout<<"The matrix can never be magic square";
exit(0);}
int array[100][100];
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
cout<<"Enter the "<<j+1<<" entry of row "<<i+1<<" of matrix:";
cin>>array[i][j];
}
}
bool y;
y=ismagicsquare(array,m,n);
if(y==1)
cout<<"The matrix is magic square";
else
cout<<"The matrix is not magic square";
}
