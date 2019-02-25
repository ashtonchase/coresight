/*
 * tpiu.h
 *
 *  Created on: Feb 20, 2019
 *      Author: ashton
 */

#ifndef SRC_TPIU_H_
#define SRC_TPIU_H_

#include <stdint.h>

int tpiu_test_walking_ones(uint32_t tpiu_base_addr);

#define TPIU_BASE_ADDR 0xF8803000

/** Supported Port Size Register */
#define TPIU_SUPPSIZE 0x00000000
/** Current Port Size Register */
#define TPIU_CURRENTSIZE 0x00000004 
/** Supported Trigger Modes Register */
#define TPIU_SUPPTRIGMODE 0x00000100  
/** Trigger Counter Register */
#define TPIU_TRIGCOUNT 0x00000104  
/** Trigger Multiplier Register */
#define TPIU_TRIGMULT 0x00000108  
/** Supported Test Patterns/Modes Register */
#define TPIU_SUPPTEST 0x00000200  
/** Current Test Patterns/Modes Register */
#define TPIU_CURRENTTEST 0x00000204

#define TPIU_CONTINUOUS_MODE (1<<17)
#define TPIU_TIMED_MODE (1<<16)
#define TPIU_FF_00_PATTERN_MODE (1<<3)
#define TPIU_AA_55_PATTERN_MODE (1<<2)
#define TPIU_WALKING_ZEROS_MODE (1<<1)
#define TPIU_WALKING_ONES_MODE (1<<1)


/** TPIU Test Pattern Repeat Counter Register */
#define TPIU_TESTREPEATCOUNT 0x00000208  
/** Formatter and Flush Status Register */
#define TPIU_FFSR 0x00000300  
/** Formatter and Flush Control Register */
#define TPIU_FFCR 0x00000304  
/** Formatter Synchronization Counter Register */
#define TPIU_FORMATSYNCCOUNT 0x00000308  
/** EXTCTL In Port */
#define TPIU_EXTCTLIn 0x00000400  
/** EXTCTL Out Port */
#define TPIU_EXTCTLOut 0x00000404  
/** Integration Test Trigger In and Flush In Acknowledge Register */
#define TPIU_ITTRFLINACK 0x00000EE4  
/** Integration Test Trigger In and Flush In Register */
#define TPIU_ITTRFLIN 0x00000EE8  
/** Integration Test ATB Data Register 0 */
#define TPIU_ITATBDATA0 0x00000EEC  
/** Integration Test ATB Control Register 2 */
#define TPIU_ITATBCTR2 0x00000EF0  
/** Integration Test ATB Control Register 1 */
#define TPIU_ITATBCTR1 0x00000EF4  
/** Integration Test ATB Control Register 0 */
#define TPIU_ITATBCTR0 0x00000EF8  
/** Integration Mode Control Register */
#define TPIU_IMCR 0x00000F00  
/** Claim Tag Set Register */
#define TPIU_CTSR 0x00000FA0  
/** Claim Tag Clear Register */
#define TPIU_CTCR 0x00000FA4  
/** Lock Access Register */
#define TPIU_LAR 0x00000FB0  
/** Lock Status Register */
#define TPIU_LSR 0x00000FB4  
/** Authentication Status Register */
#define TPIU_ASR 0x00000FB8  
/** Device ID */
#define TPIU_DEVID 0x00000FC8  
/** Device Type Identifier Register */
#define TPIU_DTIR 0x00000FCC  
/** Peripheral ID4 */
#define TPIU_PERIPHID4 0x00000FD0  
/** Peripheral ID5 */
#define TPIU_PERIPHID5 0x00000FD4  
/** Peripheral ID6 */
#define TPIU_PERIPHID6 0x00000FD8  
/** Peripheral ID7 */
#define TPIU_PERIPHID7 0x00000FDC  
/** Peripheral ID0 */
#define TPIU_PERIPHID0 0x00000FE0  
/** Peripheral ID1 */
#define TPIU_PERIPHID1 0x00000FE4  
/** Peripheral ID2 */
#define TPIU_PERIPHID2 0x00000FE8  
/** Peripheral ID3 */
#define TPIU_PERIPHID3 0x00000FEC  
/** Component ID0 */
#define TPIU_COMPID0 0x00000FF0  
/** Component ID1 */
#define TPIU_COMPID1 0x00000FF4  
/** Component ID2 */
#define TPIU_COMPID2 0x00000FF8  
/** Component ID3 */
#define TPIU_COMPID3 0x00000FFC  

#endif /* SRC_TPIU_H_ */
