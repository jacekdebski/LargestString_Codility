#include <string.h>

char * solution(char *S) {
    char *S_temp = S;
    while (strstr(S,"abb") != NULL){
        S_temp = S;
        while (1){
            S_temp = strstr(S_temp,"abb");
            if(S_temp == NULL) break;
            *S_temp = 'b';
            *(S_temp+1) = 'a';
            *(S_temp+2) = 'a';
            S_temp = S_temp + 3;
        }
    }
    return S;
}

int main() {
    char test[] = "abbabb";
    solution(test);
    return 0;
}