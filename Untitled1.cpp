#include <stdio.h>
#include <string.h>

void tinyRC4(int key[], int p[], int rs[], int length) {
    int S[8];
    int T[8];
    int temp;
    int i, j, k;
    
    for (i = 0; i < 8; i++) {
        S[i] = i;
        T[i] = key[i % 3];
    }
    
    j = 0;
    for (i = 0; i < 8; i++) {
        j = (j + S[i] + T[i]) % 8;
        temp = S[i];
        S[i] = S[j];
        S[j] = temp;
    	for (int k = 0; k < 8; k+=1) {
    		printf("%d", S[k]);
		}
		printf("S[i]=%d S[j]=%d", S[i], S[j]);
		printf("\n");
    }
    
	printf("\n");
//	for (int i = 0; i < 8; i+=1) {
//    	printf("%d", T[i]);
//	}
    // Mã hóa dòng (stream cipher)
    i = 0;
    j = 0;
    k = 0;
    while (k < length) {
        i = (i + 1) % 8;
        j = (j + S[i]) % 8;
//    	for (int i = 0; i < 8; i+=1) {
//    		printf("%d", S[i]);
//		}
//		printf("\n");
        temp = S[i];
        S[i] = S[j];
        S[j] = temp;
        printf("%d \n", S[(S[i] + S[j])%8]);
           	for (int k = 0; k < 8; k+=1) {
    		printf("%d", S[k]);
		}
		printf("S[i]=%d S[j]=%d", S[i], S[j]);
		printf("\n");
//printf("%d %d\n", i, j);
        k++;
    }
}

int main() {
    int key[3] = {2, 1, 3};
   	int p[] = {0, 0, 1, 0, 0, 0, 1, 1, 0};
    int rs[16];
    
    tinyRC4(key, p, rs, 3);
    
    
    
    return 0;
}

