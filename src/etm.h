/*
 * etm.h
 *
 *  Created on: Feb 20, 2019
 *      Author: ashton
 */

#ifndef SRC_ETM_H_
#define SRC_ETM_H_


#define ZYNQ_ETM_CPU0 0x0xF889C000
#define ZYNQ_ETM_CPU1 0x0xF889D000

#define ETM_BASE_ADDR ZYNQ_ETM_CPU0

/** Main Control Register */
#define ETMCR (ETM_BASE_ADDR + 0x00000000)
/** Configuration Code Register */
#define ETMCCR (ETM_BASE_ADDR + 0x00000004)
/** Trigger Event Offset */
#define ETM_TRIGGER (ETM_BASE_ADDR + 0x00000008)
/** Status Register */
#define ETMSR (ETM_BASE_ADDR + 0x00000010)
/** System Configuration Register */
#define ETMSCR (ETM_BASE_ADDR + 0x00000014)
/** Trace Enable Start/Stop Control Register */
#define ETMTSSCR (ETM_BASE_ADDR + 0x00000018)
/** Trace Enable Event */
#define ETMTEEVR (ETM_BASE_ADDR + 0x00000020)
/** Trace Enable Control Register 1 */
#define ETMTECR1 (ETM_BASE_ADDR + 0x00000024)
/** Address Compare Value Register 1 thru 8 */
#define ETMAVCR1 (ETM_BASE_ADDR + 0x00000040)
#define ETMAVCR2 (ETM_BASE_ADDR + 0x00000044)
#define ETMAVCR3 (ETM_BASE_ADDR + 0x00000048)
#define ETMAVCR4 (ETM_BASE_ADDR + 0x0000004C)
#define ETMAVCR5 (ETM_BASE_ADDR + 0x00000050)
#define ETMAVCR6 (ETM_BASE_ADDR + 0x00000054)
#define ETMAVCR7 (ETM_BASE_ADDR + 0x00000058)
#define ETMAVCR8 (ETM_BASE_ADDR + 0x0000005C)
/** Address Comparator Address Type Register 1 thru 8 */
#define ETMACTR1 (ETM_BASE_ADDR + 0x00000080)
#define ETMACTR2 (ETM_BASE_ADDR + 0x00000084)
#define ETMACTR3 (ETM_BASE_ADDR + 0x00000088)
#define ETMACTR4 (ETM_BASE_ADDR + 0x0000008C)
#define ETMACTR5 (ETM_BASE_ADDR + 0x00000090)
#define ETMACTR6 (ETM_BASE_ADDR + 0x00000094)
#define ETMACTR7 (ETM_BASE_ADDR + 0x00000098)
#define ETMACTR8 (ETM_BASE_ADDR + 0x0000009C)

/** Counter Reload Value Register 1 */
#define ETMCNTRLDVR1 (ETM_BASE_ADDR + 0x00000140)
/** Counter Reload Value Register 2 */
#define ETMCNTRLDVR2 (ETM_BASE_ADDR + 0x00000144)
/** Counter Enable Event Register 1 */
#define ETMCNTENR1 (ETM_BASE_ADDR + 0x00000150)
/** Counter Enable Event Register 2 */
#define ETMCNTENR2 (ETM_BASE_ADDR + 0x00000154)
/** Counter Enable Reload Register 1 */
#define ETMCNTRLDEVR1 (ETM_BASE_ADDR + 0x00000160)
/** Counter Enable Reload Register 2 */
#define ETMCNTRLDEVR2 (ETM_BASE_ADDR + 0x00000164)
/** Counter Value Register 1 */
#define ETMCNTVR1 (ETM_BASE_ADDR + 0x00000170)
/** Counter Value Register 2 */
#define ETMCNTVR2 (ETM_BASE_ADDR + 0x00000174)

/** Sequencer State Transition Register 12 */
#define ETMSQ12EVR (ETM_BASE_ADDR + 0x00000180)
/** Sequencer State Transition Register 21 */
#define ETMSQ21EVR (ETM_BASE_ADDR + 0x00000184)
/** Sequencer State Transition Register 23 */
#define ETMSQ23EVR (ETM_BASE_ADDR + 0x00000188)
/** Sequencer State Transition Register 31 */
#define ETMSQ31EVR (ETM_BASE_ADDR + 0x0000018C)
/** Sequencer State Transition Register 32 */
#define ETMSQ32EVR (ETM_BASE_ADDR + 0x00000190)
/** Sequencer State Transition Register 13 */
#define ETMSQ13EVR (ETM_BASE_ADDR + 0x00000194)
/** Current Sequencer State Register */
#define ETMSQR (ETM_BASE_ADDR + 0x0000019C)

/** External Output Event Register 1 */
#define ETMEXTOUTEVR1 (ETM_BASE_ADDR + 0x000001A0)
/** External Output Event Register 2 */
#define ETMEXTOUTEVR2 (ETM_BASE_ADDR + 0x000001A4)

/** Context ID Comparator Value Register */
#define ETMCIDCVR1 (ETM_BASE_ADDR + 0x000001B0)

/** Context ID Comparator Mask Register */
#define ETMCIDCMR (ETM_BASE_ADDR + 0x000001BC)

/** Synchronization Frequency Register */
#define ETMSYNCFR (ETM_BASE_ADDR + 0x000001E0)

/** ID Register */
#define ETMIDR (ETM_BASE_ADDR + 0x000001E4)


/** Configuration Code Extension Register  */
#define ETMCCER (ETM_BASE_ADDR + 0x000001E8)


/** Extended External Input Selection Register */
#define ETMEXTINSELR (ETM_BASE_ADDR + 0x000001EC)


/** Timestamp Event */
#define ETMTSEVR (ETM_BASE_ADDR + 0x000001F8)

/** Auxiliary Control Register */
#define ETMAUXCR (ETM_BASE_ADDR + 0x000001FC)

/** CoreSight Trace ID Register */
#define ETMTRACEIDR (ETM_BASE_ADDR + 0x00000200)

/** OS Lock Status Register */
#define OSLSR (ETM_BASE_ADDR + 0x00000304)

/** Device Powerdown Status Register */
#define ETMPDSR (ETM_BASE_ADDR + 0x00000314)

/** Miscellaneous Outputs Register */
#define ITMISCOUT (ETM_BASE_ADDR + 0x00000EDC)

/** Miscellaneous Inputs Register */
#define ITMISCIN (ETM_BASE_ADDR + 0x00000EE0)

/** Trigger Register */
#define ITTRIGGER (ETM_BASE_ADDR + 0x00000EE8)

/** ATB Data 0 Register */
#define ITATBDATA0 (ETM_BASE_ADDR + 0x00000EEC)
/** ATB Control 2 Register */
#define ITATBCTR2 (ETM_BASE_ADDR + 0x00000EF0)
/** ATB Identification Register */
#define ITATBID (ETM_BASE_ADDR + 0x00000EF4)
/** ATB Control 0 Register */
#define ITATBCTR0 (ETM_BASE_ADDR + 0x00000EF8)

/** Integration Mode Control Register */
#define ETMITCTRL (ETM_BASE_ADDR + 0x00000F00)

/** Claim Tag Set Register */
#define CTSR (ETM_BASE_ADDR + 0x00000FA0)
/** Claim Tag Clear Register */
#define CTCR (ETM_BASE_ADDR + 0x00000FA4)

/** Lock Access Register */
#define LAR (ETM_BASE_ADDR + 0x00000FB0)
/** Lock Status Register */
#define LSR (ETM_BASE_ADDR + 0x00000FB4)
/** Authentication Status Register */
#define ASR (ETM_BASE_ADDR + 0x00000FB8)
/** Device ID */
#define DEVID (ETM_BASE_ADDR + 0x00000FC8)

/** Device Type Identifier (ETMDEVTYPE)*/
#define DTIR (ETM_BASE_ADDR + 0x00000FCC)




#endif /* SRC_ETM_H_ */
