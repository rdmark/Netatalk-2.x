/* 
 * $Id: netddp_sendto.c,v 1.7 2005-04-28 20:50:02 bfernhomberg Exp $
 *
 * Copyright (c) 1999 Adrian Sun (asun@zoology.washington.edu)
 * Copyright (c) 1990,1991 Regents of The University of Michigan.
 * All Rights Reserved. See COPYRIGHT.
 *
 * send data.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif /* HAVE_CONFIG_H */

#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/uio.h>
#include <errno.h>


#include <netatalk/at.h>
#include <netatalk/endian.h>
#include <netatalk/ddp.h>
#include <atalk/netddp.h>

#ifndef MAX
#define MAX(a, b)  ((a) < (b) ? (b) : (a))
#endif /* ! MAX */

