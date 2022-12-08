#include <stdio.h>

void fortune_cookie(char msg[]) {
    printf("Сообщение гласит: %s\n", msg);
    printf("dlina soobsheniya: %lu\n", sizeof(msg));
    printf("msg занимает %i байтов\n", sizeof(msg));
}

int main() {
    char quotes[] = "Печенье вас полнит";
    fortune_cookie(quotes);

    return 0;
}