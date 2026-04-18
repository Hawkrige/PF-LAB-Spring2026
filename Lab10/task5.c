#include <stdio.h>
#include <string.h>

int main (){
    char words[6][20];
    int seen[6] = {0};
    int count = 0;
    
for(int i = 0; i<6;i++){
    printf("Enter a word : ");
    scanf("%s", words[i]);
    
}
for(int i = 0; i <6 ; i++){
    count = 0;
if(seen[i] == 1){
continue;
}
for(int j = i; j <6 ; j++){
    
    if(strcmp(words[i],words[j]) == 0 ){
        count++;
        seen[j] = 1;
}
}

printf("%s appears %d times\n",words[i], count);

for(int k = 0; words[i][k]!= '\0';k++){
    printf("%c ", words[i][k]);
    
}
printf("\n");
}

    return 0;

}