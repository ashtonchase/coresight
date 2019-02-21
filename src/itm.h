/*
 * itm.h
 *
 *  Created on: Feb 20, 2019
 *      Author: ashton
 */

#ifndef SRC_ITM_H_
#define SRC_ITM_H_

#define ITM_BASE_ADDR 0xF8805000

/** Stimulus Port Register 0 */
#define StimPort00 0x00000000  
/** Stimulus Port Register 1 */
#define StimPort01 0x00000004  
/** Stimulus Port Register 2 */
#define StimPort02 0x00000008  
/** Stimulus Port Register 3 */
#define StimPort03 0x0000000C  
/** Stimulus Port Register 4 */
#define StimPort04 0x00000010  
/** Stimulus Port Register 5 */
#define StimPort05 0x00000014  
/** Stimulus Port Register 6 */
#define StimPort06 0x00000018  
/** Stimulus Port Register 7 */
#define StimPort07 0x0000001C  
/** Stimulus Port Register 8 */
#define StimPort08 0x00000020  
/** Stimulus Port Register 9 */
#define StimPort09 0x00000024  
/** Stimulus Port Register 10 */
#define StimPort10 0x00000028  
/** Stimulus Port Register 11 */
#define StimPort11 0x0000002C  
/** Stimulus Port Register 12 */
#define StimPort12 0x00000030  
/** Stimulus Port Register 13 */
#define StimPort13 0x00000034  
/** Stimulus Port Register 14 */
#define StimPort14 0x00000038  
/** Stimulus Port Register 15 */
#define StimPort15 0x0000003C  
/** Stimulus Port Register 16 */
#define StimPort16 0x00000040  
/** Stimulus Port Register 17 */
#define StimPort17 0x00000044  
/** Stimulus Port Register 18 */
#define StimPort18 0x00000048  
/** Stimulus Port Register 19 */
#define StimPort19 0x0000004C  
/** Stimulus Port Register 20 */
#define StimPort20 0x00000050  
/** Stimulus Port Register 21 */
#define StimPort21 0x00000054  
/** Stimulus Port Register 22 */
#define StimPort22 0x00000058  
/** Stimulus Port Register 23 */
#define StimPort23 0x0000005C  
/** Stimulus Port Register 24 */
#define StimPort24 0x00000060  
/** Stimulus Port Register 25 */
#define StimPort25 0x00000064  
/** Stimulus Port Register 26 */
#define StimPort26 0x00000068  
/** Stimulus Port Register 27 */
#define StimPort27 0x0000006C  
/** Stimulus Port Register 28 */
#define StimPort28 0x00000070  
/** Stimulus Port Register 29 */
#define StimPort29 0x00000074  
/** Stimulus Port Register 30 */
#define StimPort30 0x00000078  
/** Stimulus Port Register 31 */
#define StimPort31 0x0000007C  
/** Trace Enable Register */
#define TER 0x00000E00  
/** Trace Trigger Register */
#define TTR 0x00000E20  
/** Control Register */
#define CR 0x00000E80  
/** Synchronization Control Register */
#define SCR 0x00000E90  
/** Integration Test Trigger Out Acknowledge Register */
#define ITTRIGOUTACK 0x00000EE4  
/** Integration Test Trigger Out Register */
#define ITTRIGOUT 0x00000EE8  
/** Integration Test ATB Data Register 0 */
#define ITATBDATA0 0x00000EEC  
/** Test ATB Control Register 2 */
#define ITATBCTR2 0x00000EF0   
/** Integration Test ATB Control Register 1 */
#define ITATABCTR1 0x00000EF4  
/** Integration Test ATB Control Register 0 */
#define ITATBCTR0 0x00000EF8 
/** Integration Mode Control Register */
#define IMCR 0x00000F00  
/** Claim Tag Set Register */
#define CTSR 0x00000FA0  
/** Claim Tag Clear Register */
#define CTCR 0x00000FA4  
/** Lock Access Register */
#define LAR 0x00000FB0  
/** Lock Status Register */
#define LSR 0x00000FB4  
/** Authentication Status Register */
#define ASR 0x00000FB8  
/** Device ID */
#define DEVID 0x00000FC8  
/** Device Type Identifier Register */
#define DTIR 0x00000FCC  
/** Peripheral ID4 */
#define PERIPHID4 0x00000FD0 
/** Peripheral ID5 */
#define PERIPHID5 0x00000FD4 
/** Peripheral ID6 */
#define PERIPHID6 0x00000FD8 
/** Peripheral ID7 */
#define PERIPHID7 0x00000FDC 
/** Peripheral ID0 */
#define PERIPHID0 0x00000FE0 
/** Peripheral ID1 */
#define PERIPHID1 0x00000FE4 
/** Peripheral ID2 */
#define PERIPHID2 0x00000FE8 
/** Peripheral ID3 */
#define PERIPHID3 0x00000FEC 
/** Component ID0 */
#define COMPID0 0x00000FF0 
/** Component ID1 */
#define COMPID1 0x00000FF4 
/** Component ID2 */
#define COMPID2 0x00000FF8 
/** Component ID3 */
#define COMPID3 0x00000FFC 


#endif /* SRC_ITM_H_ */
