#include <stdio.h>
int main(){

    int n;
    printf("Enter odd number of rows :");    //no. of rows = no. of columns
    scanf("%d",&n);
    
    for(int i=1 ;i<=n ;i++ ){
        for(int j=1; j<=n ;j++ ){ 
            int a = n/2+1;
            if(i == a || j == a){
             printf("*");
            }
            else printf(" ");
        }
       
        printf("\n");
    }
   return 0;
}
