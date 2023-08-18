//union  is a user defined data type (like structur)
//in structur each member has its own storage location . , wherea members of a union uses a single share memeory location
//the single shared memory location is equal to the size of its largest data memeber

//4 bytes of memory lacation shared bw id and marks

#include <stdio.h>

void showbits(int num)
{
    printf("%d in binary => ", num);

    unsigned char k, andmask;
    for (int i = 7; i >= 0; i--)
    {
        andmask = 1 << i;
        k = num & andmask;
        k == 0 ? printf("0") : printf("1");
    }
    puts("");
}

int main()
{

    struct _struct
    {
        short int i; //w
        char chr[2]; //2
    } s;

    union _union
    {
        short int i; //4
        char chr[2]; //2
    } u;

    //printf("structure size : %d\nunion size : %d"   , sizeof(s) , sizeof(u)); //4  //2
    int n = 32;

    showbits(n);

    u.i = n;
    s.i = n;

    puts("\nunion ch=>");
    showbits(u.chr[0]);
    showbits(u.chr[1]);
    printf("i = %d\nchr[0] : %d\nchr[1] : %d\n", u.i, u.chr[0], u.chr[1]);

    puts("\nstruct ch=>");
    showbits(s.chr[0]);
    showbits(s.chr[0]);
    printf("i = %d\nchr[0] : %d\nchr[1] : %d\n", s.i, s.chr[0], s.chr[1]);

    return 0;
};