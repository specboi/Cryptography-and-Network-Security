#include<stdio.h>
#include<string.h>
 
void encryptMsg(char msg[], int key){
    int msgLen = strlen(msg), i, j, k = -1, row = 0, col = 0;
    char railMatrix[key][msgLen];
 
    for(i = 0; i < key; ++i)
        for(j = 0; j < msgLen; ++j)
            railMatrix[i][j] = '\n';
 
    for(i = 0; i < msgLen; ++i){
        railMatrix[row][col++] = msg[i];
 
        if(row == 0 || row == key-1)
            k= k * (-1);
 
        row = row + k;
    }
 
    
 
    for(i = 0; i < key; ++i)
        for(j = 0; j < msgLen; ++j)
            if(railMatrix[i][j] != '\n')
                printf("%c", railMatrix[i][j]);
}
 

 
int main(){
    char msg[100];
    int key;
    gets(msg);
    scanf("%d",&key);
    encryptMsg(msg, key);
    return 0;
}


