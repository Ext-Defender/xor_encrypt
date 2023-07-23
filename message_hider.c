#include <stdio.h>
#include "encrypt.h"

int main()
{
    char msg[80];
    while (fgets(msg, 80, stdin))
    {
        encrypt(msg);
        printf("Encrypted: %s\n", msg);
        encrypt(msg);
        printf("Decrypted: %s\n", msg);
    }
    return 0;
}