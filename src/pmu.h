/*
 * pmu.h
 *
 *  Created on: Feb 20, 2019
 *      Author: ashton
 */

#ifndef SRC_PMU_H_
#define SRC_PMU_H_


#define PMU_BASE_ADDR_CPU0 0xF8891000
#define PMU_BASE_ADDR_CPU1 0xF8893000


/** PMU event counter 0 */
#define PMXEVCNTR0 0x00000000  
/** PMU event counter 1 */
#define PMXEVCNTR1 0x00000004  
/** PMU event counter 2 */
#define PMXEVCNTR2 0x00000008  
/** PMU event counter 3 */
#define PMXEVCNTR3 0x0000000C  
/** PMU event counter 4 */
#define PMXEVCNTR4 0x00000010  
/** PMU event counter 5 */
#define PMXEVCNTR5 0x00000014  
/** pmccntr */
#define PMCCNTR 0x0000007C     
/** pmevtyper0 */
#define PMXEVTYPER0 0x00000400 
/** pmevtyper1 */
#define PMXEVTYPER1 0x00000404 
/** pmevtyper2 */
#define PMXEVTYPER2 0x00000408 
/** pmevtyper3 */
#define PMXEVTYPER3 0x0000040C 
/** pmevtyper4 */
#define PMXEVTYPER4 0x00000410 
/** pmevtyper5 */
#define PMXEVTYPER5 0x00000414 
/** pmcntenset */
#define PMCNTENSET 0x00000C00  
/** pmcntenclr */
#define PMCNTENCLR 0x00000C20  
/** pmintenset */
#define PMINTENSET 0x00000C40  
/** pmintenclr */
#define PMINTENCLR 0x00000C60  
/** pmovsr */
#define PMOVSR 0x00000C80  
/** pmswinc */
#define PMSWINC 0x00000CA0  
/** pmcr */
#define PMCR 0x00000E04  
/** pmuserenr */
#define PMUSERENR 0x00000E08  

#endif /* SRC_PMU_H_ */
