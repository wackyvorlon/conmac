//
//  fgettish.c
//  scribble
//
//  Created by Paul Anderson on 11-11-08.
//  Copyright (c) 2011 Anderson Locomotive Works. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "scribble.h"

int paul_fgets(int num, char *buf, FILE *fd)
{
    int i;
    
    /* Sanity checking here.
     * Ensure that we have a valid file descriptor,
     * have been asked to read in more than 0 characters.
     */
    if (fd==NULL) {
        return -1; /* Invalid FD */
    } else if(num<=0) {
        return -1; /* num hsa to be something sane. */
    }
    
    /* 
     * For great paranoia!
     * We allocate our own memory, thank you very much.
     * This prevents silly people from creating buffer overruns.
     */
    buf=malloc((sizeof (char))*num );
    if (buf==NULL) {
        /*Yarp! Couldn't allocate memory! */
        return -1;
    }
    
    /*
     * We read in the data. Yeah, so why were those girls using a loop anyway? 
     * I has a confused. Read will pull in as many bytes as you want.
     */
    i=read(fd, buf, num);
    
    if (i==-1) {
        return -1; /* Ain't read nuthin'! */
    }
    
    return 0; /*In case of success. */
}