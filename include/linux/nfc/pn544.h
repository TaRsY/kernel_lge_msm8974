/* 
 * Copyright (C) 2010 NXP Semiconductors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 */
#ifndef _PN544_H_
#define _PN544_H_

#define PN544_MAGIC	0xE9

#ifdef CONFIG_LGE_NFC_PN547	
#define PN544_DRV_NAME      "pn547"    
#else
#define PN544_DRV_NAME      "pn544"    
#endif

/*
 * PN544 power control via ioctl
 * PN544_SET_PWR(0): power off
 * PN544_SET_PWR(1): power on
 * PN544_SET_PWR(2): reset and power on with firmware download enabled
 */
#define PN544_SET_PWR	_IOW(PN544_MAGIC, 0x01, unsigned int)

#define PN544_HW_REVISION _IOR(PN544_MAGIC, 0x02, unsigned int)

/* seokmin added for debugging */
#define PN544_INTERRUPT_CMD	2
#define PN544_READ_POLLING_CMD 3

#endif /* _PN544_ */

