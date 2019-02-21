/*
 * cti.h
 *
 *  Created on: Feb 20, 2019
 *      Author: ashton
 */

#ifndef SRC_CTI_H_
#define SRC_CTI_H_


#define CTI_BASE_ADDR

/** CTI Control Register */
#define CTICONTROL 0x00000000 
/** CTI Interrupt Acknowledge Register */
#define CTIINTACK 0x00000010  
/** CTI Application Trigger Set Register */
#define CTIAPPSET 0x00000014  
/** CTI Application Trigger Clear Register  */
#define CTIAPPCLEAR 0x00000018 
/** CTI Application Pulse Register */
#define CTIAPPPULSE 0x0000001C 
/** CTI Trigger to Channel Enable 0 Register */
#define CTIINEN0 0x00000020  
/** CTI Trigger to Channel Enable 1 Register */
#define CTIINEN1 0x00000024 
/** CTI Trigger to Channel Enable 2 Register */
#define CTIINEN2 0x00000028 
/** CTI Trigger to Channel Enable 3 Register */
#define CTIINEN3 0x0000002C 
/** CTI Trigger to Channel Enable 4 Register */
#define CTIINEN4 0x00000030 
/** CTI Trigger to Channel Enable 5 Register */
#define CTIINEN5 0x00000034 
/** CTI Trigger to Channel Enable 6 Register */
#define CTIINEN6 0x00000038 
/** CTI Trigger to Channel Enable 7 Register */
#define CTIINEN7 0x0000003C 
/** CTI Channel to Trigger Enable 0 Register */
#define CTIOUTEN0 0x000000A0 
/** CTI Channel to Trigger Enable 1 Register */
#define CTIOUTEN1 0x000000A4 
/** CTI Channel to Trigger Enable 2 Register  */
#define CTIOUTEN2 0x000000A8 
/** CTI Channel to Trigger Enable 3 Register */
#define CTIOUTEN3 0x000000AC 
/** CTI Channel to Trigger Enable 4 Register */
#define CTIOUTEN4 0x000000B0 
/** CTI Channel to Trigger Enable 5 Register */
/**  */
#define CTIOUTEN5 0x000000B4 
/** CTI Channel to Trigger Enable 6 Register */
#define CTIOUTEN6 0x000000B8 
/** CTI Channel to Trigger Enable 7 Register */
#define CTIOUTEN7 0x000000BC 
/** CTI Trigger In Status Register */
#define CTITRIGINSTATUS 0x00000130  
/** CTI Trigger Out Status Register */
#define CTITRIGOUTSTATUS 0x00000134  
/** CTI Channel In Status Register */
#define CTICHINSTATUS 0x00000138  
/** CTI Channel Out Status Register */
#define CTICHOUTSTATUS 0x0000013C  
/** Enable CTI Channel Gate Register */
#define CTIGATE 0x00000140  
/** External Multiplexor Control Register */
#define ASICCTL 0x00000144  
/** ITCHINACK Register */
#define ITCHINACK 0x00000EDC  
/** ITTRIGINACK Register */
#define ITTRIGINACK 0x00000EE0  
/** ITCHOUT Register */
#define ITCHOUT 0x00000EE4  
/** ITTRIGOUT Register */
#define ITTRIGOUT 0x00000EE8  
/** ITCHOUTACK Register */
#define ITCHOUTACK 0x00000EEC  
/** ITTRIGOUTACK Register */
#define ITTRIGOUTACK 0x00000EF0  
/** ITCHIN Register */
#define ITCHIN 0x00000EF4  
/** ITTRIGIN Register */
#define ITTRIGIN 0x00000EF8  
/** IT Control Register */
#define ITCTRL 0x00000F00  
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

#endif /* SRC_CTI_H_ */
