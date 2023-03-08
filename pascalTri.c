#include<stdio.h>
int main(){
int num;
printf("Enter the value of the number of rows you wnats\n");
scanf("%d",&num);
for(int i=0;i<=num;i++){
    for(int j=num-i;j>0;j--){
        printf(" ");
    }
    int x=1;
    int numerator=i;
    int denomenator=1;
    for(int k=0;k<=i;k++){
        printf("%d ",x);
        x*=numerator;
        x/=denomenator;
        numerator--;
        denomenator++;
    }
    printf("\n");
}
return 0;
}