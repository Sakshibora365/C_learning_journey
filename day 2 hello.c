//making swap function 
#include<stdio.h>
int swap( int a,int b);
int main(){
swap(4,6);
}
int swap(int a,int b){
    int temp;
  //a ki value hamm 2 assign krh hai its for(a=b)
  a=temp;
  b=a;
  temp=b;
  printf(" swapping of a=%d and b=%d",&a,&b);  
}
