#include<stdio.h>
#include<string.h>
 
int main(){
    char msg[] = "JUSTTECHREVIEW";
    char key[] = "HELLO";
    int msgLen = strlen(msg), keyLen = strlen(key), i, j;
 
    char newKey[msgLen], encryptedMsg[msgLen];
 
    
    for(i = 0, j = 0; i < msgLen; ++i, ++j){
        if(j == keyLen)
            j = 0;
 
        newKey[i] = key[j];
    }
 
    newKey[i] = '\0';
 

    for(i = 0; i < msgLen; ++i)
        encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'A';
 
    encryptedMsg[i] = '\0';
 
    
 
    printf("%s", msg);
    printf("\n%s", key);
    printf("\n%s", encryptedMsg);
   
 
	return 0;
}


