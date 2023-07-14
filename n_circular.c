#include <stdio.h>
int main(){
  innt c = 122;
  int n;

  printf("Enter the  digit: ");
  scanf("%d", &n);

  for(int i =0; i<n; i++){
    printf("%c", c);
    c--;
    if(c == 96){
      c = 122;
    }
  }
  return 0;
}
