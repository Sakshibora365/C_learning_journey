#include<stdio.h>
// linear search 
int main(){
    int n;// for taking elemnt 
    printf(" enter number of elements :");
    scanf("%d",&n);
    int arr[n];
    printf(" enter number of elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);// each time loop goes evey elemnt and stores each vlaue
    }int same;
    int found=0;
    printf(" enter number you want to compare :");
    scanf("%d",&same);
    for(int i=0;i<n;i++){
        if(same==arr[i])
    {printf(" that number exist and index number is %d\n",arr[i]);// now it will show the number compare too..
    found=1;
    break;}// here we use found that if number exist then show number one 
    }// we use break to stop  loop printing that same number again when its condtion found then it will show value  =1 thats mean it has elemnt which you are searching
    if(found==0){
        printf(" that number does not even exists ");
    }
}

//..................................................binary search.......................
//its faster way to find elemnts but here aray must be sorted thats imp here and idea of it 
//like go to mid element and if key is not same then key smaller than that go left and if is big then 
//go to right and it will happen until it found or array done 

//here 8 th day?????????
#include<stdio.h>
int main(){
  int n;
  printf(" enter number of elements:");
  scanf("%d",&n);
  int arr[n];
  printf(" enter elements:");
  for(int i=0;i<n;i++){ scanf("%d",&arr[i]);}
  int low=0;
  int high=n-1;
  int mid;
  int found=0;
  int key;
  printf((" number you want to check (key):"));
  scanf("%d",&key);
  while (low <=high){
  mid=(low+high)/2;
  if(key==arr[mid]){
    printf(" this number exist as middle term in array");
  found=1;
  break;
}
  else if(key<arr[mid]){
  high =  mid-1;}
  else {
  low=mid+1;}}
  if (found==0){
    printf(" that number does not even exist in array");
  } return 0;
}
//remeber that break is used inside loop and while condion when strt then they have 0 as strt so its sign is 
//lesser okky and use right use of bracketss..
