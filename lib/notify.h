/*
 * Soft:        Keepalived is a failover program for the LVS project
 *              <www.linuxvirtualserver.org>. It monitor & manipulate
 *              a loadbalanced server pool using multi-layer checks.
 *
 * Part:        notify.c include file.
 *
 * Version:     $Id: notify.h,v 1.1.9 2005/02/07 03:18:31 acassen Exp $
 *
 * Author:      Alexandre Cassen, <acassen@linux-vs.org>
 *
 *              This program is distributed in the hope that it will be useful,
 *              but WITHOUT ANY WARRANTY; without even the implied warranty of
 *              MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *              See the GNU General Public License for more details.
 *
 *              This program is free software; you can redistribute it and/or
 *              modify it under the terms of the GNU General Public License
 *              as published by the Free Software Foundation; either version
 *              2 of the License, or (at your option) any later version.
 *
 * Copyright (C) 2001-2005 Alexandre Cassen, <acassen@linux-vs.org>
 */

#ifndef _NOTIFY_H
#define _NOTIFY_H

/* system includes */
extern int system_call(char *cmdline);
extern void closeall(int fd);
extern int notify_exec(char *cmd);

#endif