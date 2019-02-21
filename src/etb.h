/*
 * etb.h
 *
 *  Created on: Feb 20, 2019
 *      Author: ashton
 */

#ifndef SRC_ETB_H_
#define ETB_SRC_ETB_H_


#define ETB_ZYNQ_ADDR 0x0xF889C000

#define ETB_BASE_ADDR ETB_ZYNQ_ADDR

/** RAM Depth Register */
#define ETB_RDP 0x00000004
/** Status Register */
#define ETB_STS 0x0000000C
/** RAM Read Data Register */
#define ETB_RRD 0x00000010
/** RAM Read Pointer Register */
#define ETB_RRP 0x00000014
/** RAM Write Pointer Register */
#define ETB_RWP 0x00000018
/** Trigger Counter Register */
#define ETB_TRG 0x0000001C
/** Control Register */
#define ETB_CTL 0x00000020
/** RAM Write Data Register */
#define ETB_RWD 0x00000024
/** Formatter and Flush Status Register */
#define ETB_FFSR 0x00000300
/** Formatter and Flush Control Register */
#define ETB_FFCR 0x00000304
/** Integration Test Miscellaneous  Control Register */
#define ETB_ITMISCOP0 0x00000EE0
/** Integration Test Trigger In and Control Register */
#define ETB_ITTRFLINACK 0x00000EE4
/** Integration Test Trigger In and Flush In Register */
#define ETB_ITTRFLIN 0x00000EE8
/** Integration Test ATB Data Register */
#define ETB_ITATBDATA0 0x00000EEC
/** Integration Test ATB Control Register 2 */
#define ETB_ITATBCTR2 0x00000EF0
/** Integration Test ATB Control Register 1 */
#define ETB_ITATBCTR1 0x00000EF4
/** Integration Test ATB Control Register 0 */
#define ETB_ITATBCTR0 0x00000EF8
/** Integration Mode Control Register */
#define ETB_IMCR 0x00000F00
/** Claim Tag Set Register */
#define ETB_CTSR 0x00000FA0
/** Claim Tag Clear Register */
#define ETB_CTCR 0x00000FA4

/** Lock Access Register */
#define ETB_LAR 0x00000FB0
/** Lock Status Register */
#define ETB_LSR 0x00000FB4
/** Authentication Status Register */
#define ETB_ASR 0x00000FB8
/** Device ID */
#define ETB_DEVID 0x00000FC8
/** Device Type Identifier Register */
#define ETB_DTIR 0x00000FCC
/** Peripheral ID4 */
#define ETB_PERIPHID4 0x00000FD0
/** Peripheral ID5 */
#define ETB_PERIPHID5 0x00000FD4
/** Peripheral ID6 */
#define ETB_PERIPHID6 0x00000FD8
/** Peripheral ID7 */
#define ETB_PERIPHID7 0x00000FDC
/** Peripheral ID0 */
#define ETB_PERIPHID0 0x00000FE0
/** Peripheral ID1 */
#define ETB_PERIPHID1 0x00000FE4
/** Peripheral ID2 */
#define ETB_PERIPHID2 0x00000FE8
/** Peripheral ID3 */
#define ETB_PERIPHID3 0x00000FEC
/** Component ID0 */
#define ETB_COMPID0 0x00000FF0
/** Component ID1 */
#define ETB_COMPID1 0x00000FF4
/** Component ID2 */
#define ETB_COMPID2 0x00000FF8
/** Component ID3 */
#define ETB_COMPID3 0x00000FFC




#endif /* SRC_ETB_H_ */
