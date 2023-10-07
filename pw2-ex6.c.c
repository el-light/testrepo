#include <stdio.h>
#include <stdbool.h>

bool my_strcmp(char c1[] , char c2[]){
    int y =0;
    if(sizeof(c1)!= sizeof(c2)){
            return false;
        }
    for(int i = 0; i<sizeof(c1); i++){
        
        if(c1[i] == c2[i]){
            y++;
            if(y == sizeof(c1)){
                return true; 
            }
        }
    }
    return false; 
}

char* my_strcat(char* source, char* dest){
    int i =0 ; 
    int y = strlen(dest); 
    while(source[i]!='\0'){
        dest[y] = source[i]; 
        y++; 
        i++;
    }
    char* result = malloc(strlen(dest)+1); 
    for(int v =0; v<strlen(dest);v++){
        result[v] = dest[v]; 
    }
    result[strlen(dest)] = '\0';
    return result; 
}


char* my_strcpy(char* source , char* dest){
    int i = 0; 
    while(source[i]!='\0'){
        dest[i] = source[i]; 
        i++;
    }
    dest[strlen(source)] = '\0'; 
    return dest; 
}

int main(){
    int y= my_strcmp("dla ", "dla"); 
    printf("%d\n", y ); 

    char n[] = "urce";
    char t[] = "destinition"; 
    char h[20];
    char* result = my_strcat(n , t);  
    char *yh = my_strcpy(n, h) ; 
    printf("%s\n",result);
    printf("%s\n",yh);
}