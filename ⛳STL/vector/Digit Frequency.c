#include <stdio.h>
#include <string.h>

int main() {
    char str[100001];
    scanf("%s", str); 
    int freq[10] = {0}; 
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            freq[str[i] - '0']++;
        }
    }
    
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }
    printf("\n");
    
    return 0;
}
