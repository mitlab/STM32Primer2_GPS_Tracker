/* Linker script UpperSide for STM32F103ZET6! 			*/
/* (c) Nemui Trinomius (http://nemuisan.blog.bai.ne.jp) */
/* Based on STMicro's RIDE Project Sample thanks!		*/

OUTPUT_FORMAT ("elf32-littlearm")

/* Memory Spaces Definitions */
MEMORY
{
	RAM1 (xrw)	: ORIGIN = 0x20000000, LENGTH = 64k		/* Main Embedded SRAM 		*/
	RAM5 (xrw)	: ORIGIN = 0x68000000, LENGTH = 512K	/* External SRAM (FSMC) 	*/
	ROM (rx)	: ORIGIN = 0x08000000, LENGTH = 1024K	/* Main Embedded FlashROM	*/
}

/* higher address of the stack bottom */
_estack = ORIGIN(RAM1)+LENGTH(RAM1);

/* higher address of the heap end */
/*_heap_end = ORIGIN(RAM1)+LENGTH(RAM1)-4;*/	/* due to 4byte alignments */


/* include the section management sub-script */
INCLUDE "STM32F1x_FLASH.ld"
