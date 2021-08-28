/* Genrate all possbile binary string having length N.
*/
#include<stdio.h>
#include<string.h>
char binaryStr[1000];
void binaryStringGenerator(int n){
    if(n==0){
        printf("%s\n",binaryStr);
        return ;
    }
    binaryStr[n-1]='1';
    binaryStringGenerator(n-1);
    binaryStr[n-1]='0';
    binaryStringGenerator(n-1);

}
int main(){
    int n;
    scanf("%d",&n);
    binaryStringGenerator(n);
    return 0;
}