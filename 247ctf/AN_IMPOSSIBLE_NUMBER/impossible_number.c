#include <stdio.h>
int main() {
    int impossible_number;
    FILE *flag;
    char c;
    if (scanf("%d", &impossible_number)) {
        if (impossible_number > 0 && impossible_number > (impossible_number + 1)) {
            printf("you got it bro!!!");
            flag = fopen("flag.txt","r");
            while((c = getc(flag)) != EOF) {
                printf("%c",c);
            }
        }
        else
            printf("impossible_number = %d\nimpossible_number +1 = %d\n",impossible_number, impossible_number+1);
    }
    return 0;
}
