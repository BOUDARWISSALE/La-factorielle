#include <stdio.h>
#include <stdlib.h>
//Déclaration du fonction
int factorielle (int n){
 int i,F=1;
 for (i=1;i<=n;i++){
    F=F*i;
 }
 return F;
}
int main(){
    int i,x,F;
    printf("Donner un nombre pour trouver sa factorielle:\n");
    scanf("%d",&x);
    F=1;
    //Méthode du boucle
    for(i=1;i<=x;i++){
        F=F*i;
    }
     printf("%d! = %d\n",x,F);
    //Appele du fonction
      F = factorielle(x);
      printf("%d! = %d\n",x,F);


    return 0;
}
