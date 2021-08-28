// You are given an array of length k,having k different digit.We have to create all possible string
// using these digits.

#include<stdio.h>
// #include<stdlib.h>
char arr[1000];
void K_arrayStringGenerator(int n,int k){ 
    // int i,j; 
    if(n==0){
        printf("%s\n",arr);
        return;
    }
    for(int i=0;i<k;i++){
        arr[n-1]='0'+i;
        // printf("%d\n",i);
        K_arrayStringGenerator(n-1,k);
    }
}
int main(){
    int n,k;
    printf("Enter length of string 'n' and number of digits 'k'\n");
    scanf("%d %d",&n,&k);
    K_arrayStringGenerator(n,k);
    return 0;
}