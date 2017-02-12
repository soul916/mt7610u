/*
 *************************************************************************
 * Ralink Tech Inc.
 * 5F., No.36, Taiyuan St., Jhubei City,
 * Hsinchu County 302,
 * Taiwan, R.O.C.
 *
 * (c) Copyright 2002-2010, Ralink Technology, Inc.
 *
 * This program is free software; you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation; either version 2 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program; if not, write to the                         *
 * Free Software Foundation, Inc.,                                       *
 * 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                       *
 *************************************************************************/


#ifndef _AP_DIVERSITY_H_
#define _AP_DIVERSITY_H_

#include "rtmp.h"

#define ADDBGPRINT(format,args...)	do{if(atomic_read(&DEBUG_VERBOSE_MODE))	printk( format, ##args);}while(0)

/*
 *  For shorter udelay().
 *  (ripped from rtmp.h)
 */

/*
 * proc fs related macros.
 */

/*
 * function prototype
 */
void RT3XXX_AntDiversity_Init(
    IN struct rtmp_adapter*pAd);

void RT3XXX_AntDiversity_Fini(
    IN struct rtmp_adapter*pAd);

void AntDiversity_Update_Rssi_Sample(
	IN struct rtmp_adapter*pAd,
	IN RSSI_SAMPLE *pRssi,
	IN RXWI_STRUC *pRxWI);


#endif
