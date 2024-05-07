#include<stdio.h>
#include<string.h>
int main(){
    char string[60];
      int leng, a;
      printf("enter string");
      scanf("%s", &string);

      leng = strlen(string);
        for(a = leng - 1; a >= 0; a--) {
        printf("%c", string[a]);        
    }
return 0;

}