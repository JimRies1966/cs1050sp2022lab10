// Don't forget to put your header at the top!


// Headers - do you need others?
#include <stdio.h>
#include "jimrutil.h"	// This header has the DumpEncoded() function

// Prototypes
void Encode(char * sIn, char * sOut);
void Decode(char * sIn, char * sOut);

// Symbolic Constants

// Main
int main(void)
{
    char sClear[] = 
        "And I'm not cool, and I'm not smart\nAnd I can't even parallel park";
    char sEncoded[sizeof(sClear)*2];
    char sDecoded[sizeof(sClear)];

    Encode(sClear,sEncoded);
    DumpEncoded(sEncoded);
    Decode(sEncoded,sDecoded);
    printf("The decoded string is:\n%s\n",sDecoded);
}

// Functions
void Encode(char * sIn, char * sOut)
{
}

void Decode(char * sIn, char * sOut)
{
}
