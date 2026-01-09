// before pointers we will learn about array and strings 
//..................................................................................array
//collection of same data type in contigous memoory location and it is useful beacuse you can take all rest of variable
//by just using a single array variable okkay:))

//scanf("%d"&ar[2]); by here & for address thiis all used for taking inputs in array
//for accesssing we will do this printf(" %d",arr[0]);// here value inside array will tell the position in array ok
// here index is started   by 0 okkay 
//if we will try to acess big value than the given value in array then compiler can't tell mistakes 

#include<stdio.h>
//array declare 
int main(){
    int value[3];//tell size 
    printf(" enter value for 2 numbers");//output shown but here it will take value to input
    scanf("  %d",&value[0]);//here the input value will be stores
    scanf("  %d",&value[1]);//here 2 nd  value is stores
    printf("summ of value is %d",value[0]+value[1]*0.18);
}
//it is useful because we did not need to take different variable for storing diff value here we save 
//same typw of varaible in a same array then we can access itt too.. just by array but remembe about its
//indexing which is from 0 thats it !!!

//we can also intialize those array in that same variable
//thats how we can make 1 d array


//now its time for 2 d arrayy
int arr[0][0];//that how can accesee 2 d its like matrix 
//we can declare it tooo 

//::::::::::if you know this all data about array you need to  solve some question related to it.. so 
// now i am going to do it !!


#include<stdio.h>
//largest element in array????????????????????????????????????????????????
int main(){
int n;// tell how many elements we will take 
printf("enter number of elements :");
scanf("%d",&n);
int arr[n];// here we will put all those elements in array 
printf(" enter elements whose you have to check which is largest in whole subset:");
for(int i=0;i<n;i++)//now go trhough looop of all elemnts in array it is easier becuse it is alrdy in aray
scanf("%d",&arr[i]);//storing those value 
int max=arr[0];// first index value also pointer 
for(int i=1;i<n;i++){//here again loop so we will check all value again and compare them so we can get largest value 
  if (arr[i]>max){// so her if conditon and then updating it too..
    max=arr[i];}}//updated value 
printf(" largest element in array is %d\n ",max);}// here we will get largest value in array of us by using loop..


//................smalllest vlaue in arrray?????????
#include<stdio.h>
int main(){
int arr[4]={23,34,32,43};
int min=arr[0];
for(int i=1;i<5;i++){
  if(min<i){
    min= i;
  }
}printf(" smallest elements in array is%d",min);

} ///?????????????????????its for add and averg by array and its fun and easy kinda thinggg....

#include<stdio.h>
int main(){
int arr[3]={32,43,43};
int sum=0;//intializing 
for(int i=0;i<4;i++){
  sum=sum+arr[i];
  printf("elements which will come in is here after every loop %d\n",sum);
}printf(" sum of array is %d",sum);
int av=sum/3;
printf(" average of its %d",av);


}// arr[i ]is used so every time loop will go from 0 .1.2.3. like that then it will go every loop later on 
// adding them okkay

