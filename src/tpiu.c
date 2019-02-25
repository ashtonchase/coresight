/*
 * tpiu.c
 *
 *  Created on: Feb 24, 2019
 *      Author: ashton
 */

#include "tpiu.h"

int tpiu_test_walking_ones(uint32_t tpiu_base_addr) {

	/* unlock the tpiu */
	uint32_t volatile * const lar = (uint32_t *) (tpiu_base_addr + TPIU_LAR);
	*lar = 0xC5ACCE55;


	/* unlock the tpiu */
		uint32_t volatile * const lsr = (uint32_t *) (tpiu_base_addr + TPIU_LAR);
		uint32_t lsr_val;
		lsr_val = *lsr;
		if (lsr_val != 0xC5ACCE55) exit(-1);


	uint32_t volatile * const supptest = (uint32_t *) (tpiu_base_addr
			+ TPIU_CURRENTTEST);
	*supptest = TPIU_WALKING_ONES_MODE;

	uint32_t volatile * const testrepeatcount = (uint32_t *) (tpiu_base_addr
			+ TPIU_TESTREPEATCOUNT);
	*testrepeatcount = 0xFF;

	/* lock the tpiu back */
	*lar = 0;

}
