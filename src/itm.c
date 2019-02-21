/*
 * itm.c
 *
 *  Created on: Feb 20, 2019
 *      Author: ashton
 */

#include <stdint.h>
#include "itm.h"
#include <xil_io.h>



int itm_init(){

	u32 status = Xil_In32(ITM_BASE_ADDR + LSR);
	Xil_Out32(ITM_BASE_ADDR + LAR, 0xC5ACCE55); /* Unlock ITM */
	status = Xil_In32(ITM_BASE_ADDR + LSR);
Xil_Out32(ITM_BASE_ADDR + TER, 0x01UL); /* Enable Port#0 */

Xil_Out32(ITM_BASE_ADDR + CR, 0x07UL); /* Enable ITM */

Xil_Out32(ITM_BASE_ADDR + LAR, 0); /* Lock ITM*/
 status = Xil_In32(ITM_BASE_ADDR + LSR);

return -1;
}

static uint32_t ITM_SendChar (uint32_t ch)

{

  if ( ( Xil_In32(ITM_BASE_ADDR + CR) != 0UL) &&      /* ITM enabled */

      (( Xil_In32(ITM_BASE_ADDR + TER) & 1UL               ) != 0UL)   )     /* ITM Port #0 enabled */

  {

    while (Xil_In32(ITM_BASE_ADDR + StimPort00) == 0) {  asm ("nop");}

    Xil_Out8(ITM_BASE_ADDR + StimPort00, (uint8_t)ch);

  }

  return (ch);

}


int _write(int file, char *ptr, int len)

{

  int i=0;

  (void)file;

  for(i=0 ; i<len ; i++)

  {

    ITM_SendChar((uint32_t)(*ptr++));

  }

  return len;

}

