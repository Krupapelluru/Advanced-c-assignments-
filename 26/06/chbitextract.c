#include <stdio.h>
#include <string.h>

union Bits {

    char ch;
    struct bits {

            unsigned int b0: 1;
            unsigned int b1: 1;
            unsigned int b2: 1;
            unsigned int b3: 1;
            unsigned int b4: 1;
            unsigned int b5: 1;
            unsigned int b6: 1;
            unsigned int b7: 1;

    } bits;
};

int main(void) {
    char ch = 'A';
    union Bits data;
    data.ch = ch;

    printf("%d\n", ch);
    printf("%d%d%d%d%d%d%d%d\n", data.bits.b7, data.bits.b6, data.bits.b5, data.bits.b4, data.bits.b3, data.bits.b2, data.bits.b1, data.bits.b0);

    return 0;
}




#if 0

krupa@krupa-VirtualBox:~/krupa$ gcc chbitextract.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
75
01001011
krupa@krupa-VirtualBox:~/krupa$ gcc chbitextract.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
65
01000001

#endif