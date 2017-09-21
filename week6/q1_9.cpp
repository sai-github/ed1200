#include<stdio.h>

int main(){
  int a[10];
  printf("Enter n : ");
  int n;
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    printf("Enter a[%d] : ",i);
    scanf("%d", &a[i]);
  }

  //2 display max min
  int max,min;
  max=a[0];
  min=a[0];
  for(int i=1;i<n;i++){
    if(max<a[i]) max=a[i];
    if(min>a[i]) min=a[i];
  }
  printf("Max : %d, Min : %d \n",max,min);

  //3odd and even indexed
  for(int i=0;i<n;i++){
    if(i%2==0) printf("odd indexed : %d \n", a[i]);
    else printf("even indexed : %d \n", a[i]);
  }

  //6 count +ve, -ve, 0 numbers
  int p_count=0,n_count=0,z_count=0;
  for(int i=0;i<n;i++){
    if(a[i]>0) p_count++;
    else if (a[i]<0) n_count++;
    else z_count++;
  }
  printf("Positives : %d, Negatives : %d, Zeros : %d \n",p_count,n_count,z_count);

  //7 Swap adjacent elements of an array
  for(int i=0;i<n-1;i+=2){
    int t=a[i+1];
    a[i+1]=a[i];
    a[i]=t;
  }

  printf("Elements in array after adjacent swap :\n");
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");

  //9 Reverse the array
  for(int i=0;i<=n/2-1;i++){
    int t=a[n-i-1];
    a[n-i-1]=a[i];
    a[i]=t;
  }
  printf("Reveresed Array : \n");
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");

  //10 perform a linear search
  int target;
  int pos=-1;
  printf("Enter taget to search : ");
  scanf("%d",&target);
  for(int i=0;i<n;i++){
    if(target==a[i]){
      printf("%d",i);
      pos=i;
      break;
    }
  }
  if(pos==-1) printf("Not in array\n");
  else printf("Found %d at position %d\n",target,pos);

  return 0;
}
