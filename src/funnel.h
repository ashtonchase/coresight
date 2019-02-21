/*
 * funnel.h
 *
 *  Created on: Feb 20, 2019
 *      Author: ashton
 */

#ifndef SRC_FUNNEL_H_
#define SRC_FUNNEL_H_

#define FUNNEL_BASE_ADDR 0xF8804000
/** CSTF Control Register */
#define CONTROL 0x00000000
/** CSTF Priority Control Register */
#define PRICONTROL 0x00000004
/** Integration Test ATB Data 0 Register */
#define ITATBDATA0 0x00000EEC
/** Integration Test ATB Control 2 Register */
#define ITATBCTR2 0x00000EF0
/** Integration Test */
#define ITATBCTR1 0x00000EF4
/** Integration Test ATB Control 0 Register */
#define ITATBCTR0 0x00000
/** Integration Mode Control Register */EF8  
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
/**  Device ID */
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


#endif /* SRC_FUNNEL_H_ */
