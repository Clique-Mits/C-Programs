//Program to print the second largest number among a set of numbers

#include<stdio.h>

void sort(int arr[], int n) {
  int temp;
    for(int i=0;i<n-1;i++) {
      for(int j=0;j<n-1-i;j++) {
        if(arr[j]>arr[j+1]) {
           temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
        }
      }
    }
}

int main(void){
  int n;
  printf("\nEnter the number of elements in the set : ");
  scanf("%d",&n);
  int a[n];
  printf("\nEnter the elements in the set : ");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  sort(a,n);
  printf("\nSecond largest number : %d\n",a[n-2]);
}
  
