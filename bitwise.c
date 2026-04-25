#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    for (int i=1; i<=n; i++){
        for (int j=i+1; j<=n; j++){
            int temp;
            
            temp = i & j;
            if ((temp>max_and) && (temp<k)) {
                max_and = temp;
            }
            
            temp = i | j;
            if ((temp>max_or) && (temp<k)) {
                max_or = temp;
            }
            
            temp = i ^ j;
            if ((temp>max_xor) && (temp<k)) {
                max_xor = temp;
            }
            
        }
    }
    
    printf("%d\n",max_and);
    printf("%d\n",max_or);
    printf("%d\n",max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
