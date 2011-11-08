//
//  fgettish.c
//  scribble
//
//  Created by Paul Anderson on 11-11-08.
//  Copyright (c) 2011 Anderson Locomotive Works. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "scribble.h"

int paul_fgets(int num, char *buf, FILE *fd)
{
    if (fd==NULL) {
        return -1; /* Invalid FD */
    } else if(num<=0) {
        return -1; /* num hsa to be something sane. */
    }
    
    buf=malloc((sizeof (char))*num );
    if (buf==NULL) {
        /*Yarp! Couldn't allocate memory! */
        return -1;
    }
    
    return 0; /*In case of success. */
}