#include <stdio.h>

int main(){
    int a,b,temp;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a = %d and b = %d\n",a,b);
    
    temp=a; //store the value of a in temp
    a=b; //assign the value of b to a
    b=temp; //assign the value of temp(original a) to b

    printf("After swapping: a = %d and b = %d\n",a,b);
    return 0;
}