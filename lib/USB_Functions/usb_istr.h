/********************************************************************************/
/*!
	@file			usb_istr.h
	@author         Nemui Trinomius (http://nemuisan.blog.bai.ne.jp)
    @version        1.00
    @date           2012.01.30
	@brief          ISTR events interrupt service routine Wrappers.

    @section HISTORY
		2012.01.30	V1.00	Start Here

    @section LICENSE
		BSD License. See Copyright.txt
*/
/********************************************************************************/
#ifndef __USB_ISTR_H
#define __USB_ISTR_H	0x0100

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes */
#include "usb_conf.h"
#include "usb_lib.h"
#include "usb_pwr.h"
#include "usb_cdc_conf.h"
#include "usb_cdc_prop.h"
#include "usb_msc_conf.h"
#include "usb_msc_prop.h"

/* Function Prototypes */
void USB_Istr(void);

/* function prototypes Automatically built defining related macros */
void EP1_IN_Callback(void);
void EP2_IN_Callback(void);
void EP3_IN_Callback(void);
void EP4_IN_Callback(void);
void EP5_IN_Callback(void);
void EP6_IN_Callback(void);
void EP7_IN_Callback(void);

void EP1_OUT_Callback(void);
void EP2_OUT_Callback(void);
void EP3_OUT_Callback(void);
void EP4_OUT_Callback(void);
void EP5_OUT_Callback(void);
void EP6_OUT_Callback(void);
void EP7_OUT_Callback(void);

/* Wrapper Externals */
extern void (*xUSB_Istr)(void);
extern void CDC_USB_Istr(void);
extern void MSC_USB_Istr(void);

#ifdef CTR_CALLBACK
void CTR_Callback(void);
#endif

#ifdef DOVR_CALLBACK
void DOVR_Callback(void);
#endif

#ifdef ERR_CALLBACK
void ERR_Callback(void);
#endif

#ifdef WKUP_CALLBACK
void WKUP_Callback(void);
#endif

#ifdef SUSP_CALLBACK
void SUSP_Callback(void);
#endif

#ifdef RESET_CALLBACK
void RESET_Callback(void);
#endif

#ifdef CDC_SOF_CALLBACK
void SOF_Callback(void);
#endif

#ifdef ESOF_CALLBACK
void ESOF_Callback(void);
#endif


#ifdef __cplusplus
}
#endif

#endif	/*__USB_ISTR_H*/
