#include<stdio.h>

int main(){
  
  int n=10;
  for(int i=1;i<=n;i++){
    int p=i;
    for(int j=1;j<=n-i;j++){
      printf(" ");
    } 
    for(int j=1;j<=i-1;j++){
      printf("%d",p%n);
      p++;
    }
    printf("%d",(2*i-1)%n);
    p--;
    while(p>=i){
      printf("%d",p%n);
      p--;
    }
    printf("\n");
  }
  return 0;
}
