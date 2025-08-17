#include <stdio.h>

int main(){
    
    int n, n1;
    int sum=0, sum1=0;
    
    printf("Enter first number: ");
    scanf("%d", &n);
    printf("Enter second number: ");
    scanf("%d", &n1);
    
    for(int i=1; i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    for(int j=1; j<=n1;j++){
        if(n1%j==0){
            sum1+=j;
        }
    }
    if(sum==sum1){
        printf("They are amicable numbers");
    }else{
        printf("They are not amicable numbers");
    }
}
