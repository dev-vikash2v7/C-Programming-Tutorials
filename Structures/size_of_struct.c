#include <stdio.h>

//#pragma pack(1)

struct abc{
    //  char a  ; 
     char j ; 
     //int x ;
     short u ;
    //  char k ;
} var ;

int main(){

printf("%d" , sizeof(var) );

}

/*
structure padding =>
# padding does'nt read 1 byte at a time from memory.
# it reads 1 word at a time.

for 32 bit processor : it can access 4 bytes at a time which means word size is 4 bytes.
for 64 bit processor : it can access 8 bytes at a time which means word size is 8 bytes.

struct abc{
     char a  ; 
     char j ; 
     
     int x ;
     char ;
} var ;

|1|1| 0|0 |        | 1|1 |1 |1 |        | 1|0 |0 |0 |
total size  = 4  + 4 + 4  = 12


|1|1| 0|0 |        | 1|1 |1 |1 |        | 1|0 |0 |0 |
total size  = 4  + 4 + 4  = 12


*/