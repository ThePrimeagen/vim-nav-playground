#include <stdio.h>
#include <sockets.h>
#include <twitch.h>


void create_twitch_connection() {
    static int sum = 0;
    for (int i = 0; i < 10; ++i) {
        if (i == SOCKET_OPEN) {
            printf("Its open!\n");
        }
        sum += i;
    }
}

