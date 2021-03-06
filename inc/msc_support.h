/********************************************************************************/
/*!
	@file			msc_support.h
	@author         Nemui Trinomius (http://nemuisan.blog.bai.ne.jp)
    @version        1.00
    @date           2011.07.06
	@brief          Interface of USB-MassStorageClass.

    @section HISTORY
		2011.07.06	V1.00	Start Here.

    @section LICENSE
		BSD License. See Copyright.txt
*/
/********************************************************************************/
#ifndef __MSC_SUPPORT_H
#define __MSC_SUPPORT_H	0x0100

#ifdef __cplusplus
 extern "C" {
#endif

/* Basics */
#include <string.h> /* memset et al*/

/* Miscs */
#include "usb_lib.h"
#include "usb_msc_desc.h"
#include "usb_msc_prop.h"
#include "usb_msc_conf.h"
#include "usb_msc_mass_mal.h"
#include "usb_pwr.h"
#include "usb_istr.h"
#include "hw_config.h"

/* Function Prototypes */
#define BULK_MAX_PACKET_SIZE  0x00000040
extern void msc_task(void);

#ifdef __cplusplus
}
#endif

#endif	/*__MSC_SUPPORT_H */
