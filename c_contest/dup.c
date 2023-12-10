#include "stdio.h"
int main(){
   int arr[] = {1,2,2,3,3,4,5,6,2,7,7};
   int arr_2[100] = {};
   int l = sizeof(arr)/sizeof(int);
   int st=0;
   for(int i = 0;i<l;i++){
    int count = 0;
      for(int j = i+1;j<l;j++){
          if(arr[i] == arr[j]){
                  count++;
          }

      }
      if(count==0){
           arr_2[st++]=arr[i];
      }
   }
  for(int i =0;i<st;i++){
       arr[i] = arr_2[i]; 
  }

 for(int i=0;i<st;i++){
    printf("%d",arr[i]);
 }


}