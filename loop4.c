// here  we wiill study about loop for today...
//for table of any number 
#include<stdio.h>
int main(){
  int number;
  printf(" enter number :");
  scanf("%d",&number);
int n;
for( int i=1;i<=10;i++){ n=number*i;   
printf("%d\n",n);  }
}//here we just print inside the loop so we get table 

//even number print 
#include<stdio.h>
int main(){
  for(int i=1;i<=20;i++){
    if(i%2==0){
      printf("%d",i);
    }
  }
}// loop print summ of odd numbers 
#include<stdio.h>
int main(){
  int n=0;
  for(int i=2;i<=5;i++){
    if(i%2!=0){
      n=n+i;}}
      printf("%d",n);}

 //     just for knowledge know while loop and do while 
 // while(condition){ do something }then update 
 //do {do soemthing}  while(condition)



 //....................nested loop..........
#include<stdio.h>
int main(){
for(int i=1;i<=3;i++){//loop outside for row creating 
    for(int i=1;i<=3;i++){//loop for column 
        printf("*");}
        printf("\n"); }
} //***
//***
//***             this type of structure is made with it..

//call as star rectangle 


//..................................now next topic is about function...................
//block of code that   perform particular task

//function prototype )))) tell function declare 
//function define)))))) function making 
//function callling )))) call to my function
//function are two types first is library and user defined....okay!!!~~~

//making a function
#include<stdio.h>
void hey();
int main(){
hey();
}
void hey(){
    printf(" Helllo~~~~~~");
    printf(" I AM SHINCHAN");
}
//here is passing argument .........................function take value and give some value 
//value ---->> parameter
//give some value----->>> return 

//................................argument ...value that are pased in function call(a)iss way mai...
//send value and also know as actual parameter 


//.......................paramter ....value that declare in function defintion 
//return value and also known as fomral parameter 

//if we do chnages in paramrer  they dont do cahnages in argumeent okkk)))


//........................................recursion................
//function calling itself
//calling your own function again to itself 
//it required base condtion to~~~~~`


//sum of n natural number 

#include<stdio.h>
int sum(int n);
int main(){
    printf(" sum is %d",sum(5));
}
//base condition  is to stop here thing
int sum(int n){
if (n==1){ return 1 ;}
int sum1=sum(n-1);//sum of 1to n
int sumn=sum1+n;
return sumn;

}
//factorial.....by recursion
//fibonacci series >>> next term will came by addition of last 2 terms 
#include<stdio.h>
//factoraial by recursion
int fact(int n);
int fib(int a);
int main(){
printf(" factorial of n is %d",fact(3));
printf(" fibonacci series is %d",fib(6));
}
int fact(int n){
if(n==0){ return 1;}
int fact1=fact(n-1);
int fact2=fact1*(n);//here we take n to mutliply by n-1
return fact2;}

int fib(int a){
    
        if(a==0){ return 0;}
        if(a==1){ return 1;}// base condtion 
        int fib1=fib(a-1);
        int fib2=fib(a-2);
        int Fib=fib1+fib2;
        //printf(" fib of %d",a,Fib);
    }

// here i am just revised some topics 
#include<stdio.h>
void printhello();// here are all user made function 
int  summa(int a, int b);
int neg( int a, int b);
float im( int a, int b);
int sd( int a, int b);
int dd( int a, int b);
//recurssion 
int arr( int n);

// now main here goes what i am giving result and on 5 th day i just revise some function topic and made some function

int main(){
printhello();
int a,b; 
printf(" enter number:");
scanf( "%d%d",&a,&b);
int s= summa (a,b);
printf(" sum is %d\n",s);
int p=neg( a,b);
printf(" subtraction is %d\n",p);
      int g= im( a,b);
printf(" multiply is %f\n", g);
 int d= sd( a,b);
 printf("  modulus is %d\n",sd);
 printf(" average of two number is %d",dd(a,b));
 
return 0;
}



// function definiton
void printhello() {
    printf(" hello cutie \n");
    printf(" are you happy?\n");
    
}

int summa(int a,int b){
    
 return a+b ;  
     
}

int neg( int a ,int b){
     return a-b;
}

float  im(int a,int b){
   return  a*b;
}

int sd( int a, int b){
    return  a%b;
}

 int dd( int a, int b){
    return (a+b)/2;
 }


 
