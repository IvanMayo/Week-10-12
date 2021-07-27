#include <stdio.h>

void update(int *a,int *b) {
    int num = *a;
    int num2= *b;
      /* Here is define my variables and the operations I will perform with them */
    int sum = num + num2;
    int diff = num - num2;
    /*because the operation can give less than 1 i put this to make the result = 1 */
    if(diff < 0){
        diff = diff*-1;
    }
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
