#include<stdio.h>

int towerOfHanoi(int n, char source, char aux, char target){
    if(n==1){
        printf("%c to %c\n",source,target);
        return 0;
    }
    towerOfHanoi(n-1,source,target,aux);// moving n-1 disk source to aux column
    printf("%c to %c\n",source, target);
    towerOfHanoi(n-1,aux,source,target);//moving n-1 disk aux to target column3
}
int main(){
    int disk;
    printf("Enter number of disk\n");
    scanf("%d",&disk);
    //S->source, A->auxalary, T->target
    towerOfHanoi(disk,'S','A','T');
    return 0;
}