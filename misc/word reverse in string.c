#include<stdio.h>

int length(char* s){
  int count=0;
  while(s[count]!='\0'){
    count++;
  }
  return count;
}

void show(char* s){
  int i=0;
  while(s[i]!='\0'){
    printf("%c",s[i]);
    i++;
  }
  printf("\n");
}

int main(){
  char a[20]="asas wqq ds";
  int len_a=length(a);
  
  char b[len_a+1];
  int i=0; //count letters in a word
  int j=0; //index for b
  
  for(int k=0;k<=len_a;k++,i++){
    if(a[k]==' ' || k==(len_a)){
      for(int l=0;l<i;l++){
        b[j]=a[k-l-1];
        j++;
      }
      i=-1;
      b[j]=' ';
      j++;      
    }
  }
  b[len_a]='\0';
  
  printf("Original : ");
  show(a);
  printf("Modified : ");
  show(b);
  
  return 0;
}