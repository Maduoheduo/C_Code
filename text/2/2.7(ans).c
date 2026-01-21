
#include<stdio.h>

int validate(int sweet_melon, int statements[4][4]) {
    for (int i = 0; i < 4; i++) {
        int correct = 0;
        
        if (statements[i][0] == sweet_melon) {
            if (statements[i][1] == 1) correct++;
        } else {
            if (statements[i][1] == 0) correct++;
        }
        
        if (statements[i][2] == sweet_melon) {
            if (statements[i][3] == 1) correct++;
        } else {
            if (statements[i][3] == 0) correct++;
        }
        
        if (correct != 1) return 0;
    }
    return 1;
}

int main() {
    int statements[4][4];
    while (scanf("%d %d %d %d", &statements[0][0], &statements[0][1], &statements[0][2], &statements[0][3]) != EOF) {
        for (int i = 1; i < 4; i++) {
            scanf("%d %d %d %d", &statements[i][0], &statements[i][1], &statements[i][2], &statements[i][3]);
        }
        int sweet_melon = 0;
        
        for (int melon = 1; melon <= 4; melon++) {
            if (validate(melon, statements)) {
                sweet_melon = melon;
                break;
            }
        }
        printf("%d\n", sweet_melon);
    }
    return 0;
}