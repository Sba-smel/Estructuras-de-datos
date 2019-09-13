#include <stdio.h>
void hanoi(int n, char A,char B, char C){
    if(n==1){
        printf("%c -> %c\n", A,C);
    }else{
        hanoi(n-1,A,C,mutable);
        printf("%c -> %c\n",A,C);
        hanoi(n-1,B,A,C);
    }
}
int main()
{
    int n=0;
scanf("%d",&n);
hanoi(n,'A','B','C');
return 0;
}
