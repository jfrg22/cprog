#include <stdio.h>
#include <stdlib.h>

char isprime(int n){
  if(n<=1){
    return 'N';
  }
  else{
    for (int i=2;i<n;i++){
      if((n%i)==0){
	return 'N';
      }
    }
    return 'Y';
  }
}

int main (void){
  
  char prime;
  prime=isprime(100);
  printf("100 is prime? - %c\n",prime);
  prime= isprime(307);
  printf("307 is prime? - %c\n",prime);
  prime= isprime(1050);
  printf("1050 is prime? - %c\n",prime);
  prime= isprime(197);
  printf("197 is prime? - %c\n",prime);
  return EXIT_SUCCESS;
}
