//
//  main.c
//  scribble
//
//  Created by Paul Anderson on 11-11-08.
//  Copyright (c) 2011 Anderson Locomotive Works. All rights reserved.
//

#include <stdio.h>
#include "scribble.h"


int main (int argc, const char * argv[])
{

    // insert code here...
    int i;
    char *bork;
    FILE *fd;
    
    fd=fopen("snift.txt", "r");
    
    if (fd==NULL) {
        printf("\nFailed to open file.\n");
    }
    
    printf("Hello, World!\n");
    /*for (i=0; i<5; i++) {
        printf("\nLooky: %d", i);
    }*/
    i=paul_fgets(100,bork,fd);
    
    if (i==-1) {
        printf("\nError from fgets\n");
    } else {
        printf("\nWTF? It worked?\n");
    }
    
    printf("\n");
    
    return 0;
}

