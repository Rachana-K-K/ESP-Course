#include<stdio.h>
int main(){
    int count = 0,prime;
    for(int i=2;i<10;i++){
        prime = 1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime)
        count++;
    }
    printf("%d",count);
}