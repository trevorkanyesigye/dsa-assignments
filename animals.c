#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,X,i;
    printf("Enter the number of domestic animals:");
    scanf("%d",&N);
    char **domestic=(char**)malloc(N*sizeof(char*));
    for(i=0;i<N;i++){
        domestic[i]=(char*)malloc(20*sizeof(char));
    }
    printf("Enter the names of the domestic animals: \n",N);
    for(i=0;i<N;i++){
        scanf("%s",domestic[i]);
    printf("Enter the number of wild animals: \n");
    scanf("%d",&X);
    char **wild=(char**)malloc(X*sizeof(char*));
    for(i=0;i<X;i++){
        wild[i]=(char*)malloc(20*sizeof(char));
    }
    printf("Enter the names of the wild animals: \n",X);
    for(i=0;i<X;i++){
        scanf("%s",wild[i]);
    }
    printf("\n list of domestic and wild animals: \n");
    for(i=0;i<N;i++){
        printf("%s\n",domestic[i]);
    }
    for(i=0;i<X;i++){
        printf("%s\n",wild[i]);
    }
    return 0;
    }
}