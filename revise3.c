//today i will revise some concepts 
//%d is our format specifier and &elemnt here & is the address for it ..
//same line mai value assign and use sath mai nhi ho sakta and declare variable befor using it 
//c is case sensitive 
//modulus is useful for giving remainder and it only work for integer not for decimal 
//here are some header file like stdio ,math etc 


// doing some question....
#include<stdio.h>
int main (){
// we are doing even or not 
int x;
printf(" enter value for x :");//for output 
scanf("%d",&x);//for input 
if(x%2==0){
    printf(" yes this number is even !");}
else{printf(" no, it is not a even number ");}
}



//                                       using ternary way..../
// for voting 

#include<stdio.h>
int main(){
  int x;
  printf(" enter age  for x:");
  scanf("%d",&x);
  x>=18?printf(" yes\n "):printf(" no ");
}



//                                  case way..... switch ( conditonal statment )

//for lucky charm       from myyyy side 
#include<stdio.h>
int main(){
  int x;
  printf(" click x(1 or 2)\n check your luck :");
scanf(" %d",&x);
switch(x){
  case 1: printf(" you will achieve everything in your life\n ");
  break;// here we use break so condtion will stop if this case has to be written here okk
  case 2: printf(" life is kindda hard for you\n i hope your life get better ");
  break;
}}


// calculate cube of a nmber 
#include<stdio.h>
int main(){
    int x;
    printf(" enter number x (find cube )");
    scanf("%d",&x);
    printf(" cube is %d",x*x*x);
}


//...........................now loop time to revise .....................
//its useful for  repeating some part of program 
//( here are 3 types)----->>>>for,while,do while 
//                            question time


//loop until the number given (number)=======>>>.( easy level)
#include<stdio.h>
int main(){
  int number;
  printf(" enter number :");
  scanf("%d",&number);
  for(int i=1;i<=number;i++){
    printf(" %d\n",i); }
}

//i++ used then  increase 
//++i increase then use 

//looop for sum first n   natural number 
#include<stdio.h>
int main(){
  int number;
  printf(" enter number :");
  scanf("%d",&number);
  //jab tk number equal nhi hota tb tk sare number  add krge then use print krlge like
  //using variable to add all number every time loop strt and after loop end we can print 
  int sum=0;
  for(int i=1;i<=number;i++){
    sum=sum+i;//here every time loop sum value is chngess by next ones.. so why use sum variable outside loop
  }printf("sum  of n ( natural number is )%d",sum);
  
}// thats the logic for loop i think firstly it intlize then check condition and go inside loop and 
//did their work and and then came back to loop and update it and then did the same thing until loop  is doen with condtion 
//and end loops..
//0....>>>>> for initalize (sum)
//1.....>>>> for initalize (multiply)

// ..........................factorial ................
#include<stdio.h>
int main(){
  int number;
  printf(" enter number :");
  scanf("%d",&number);
int sum=1;
for(int i=1;i<=number;i++){
  sum=sum*i;
}printf("factorial is %d",sum);}
// we prefe do while when we had to take input for conditon ..