#include "stdio.h"
int sum(int num){
       int digit = num%10;
       if(!num){
        return 0;
       }
       return digit+sum(num/10);

}
int main(){

  int digit  = 111231;

printf("%d",sum(digit));
}

