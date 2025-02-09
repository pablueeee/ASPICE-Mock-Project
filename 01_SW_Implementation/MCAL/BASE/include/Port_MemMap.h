/**
*   @file           Port_MemMap.h
*   @implements     MemMap.h_Artifact
*   @version 1.0.4
*
*   @brief   AUTOSAR Base - Memory mapping specification.
*   @details This document specifies mechanisms for the mapping of code and data to specific
*            memory sections via memory mapping file. For many ECUs and microcontroller platforms
*            it is of utmost necessity to be able to map code, variables and constants module
*            wise to specific memory sections.
*            This file contains sample code only. It is not part of the production code deliverables
*   @addtogroup BASE_COMPONENT
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : S32K1XX
*   Dependencies         : none
*
*   Autosar Version      : 4.3.1
*   Autosar Revision     : ASR_REL_4_3_REV_0001
*   Autosar Conf.Variant :
*   SW Version           : 1.0.4
*   Build Version        : S32K1XX_MCAL_1_0_4_RTM_ASR_REL_4_3_REV_0001_04-Apr-22
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017-2022 NXP
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/
#ifdef __cplusplus
extern "C"{
#endif
/**
* @page misra_violations MISRA-C:2004 violations
* @section Port_MemMap_h_REF_1
* Violates MISRA 2004 Required Rule 19.6, #undef shall not be used.
* This is due to #undef MEMMAP_ERROR and #undef <section_type> and cannot be removed as it is
* required by Autosar Specification - Specification of Memory Mapping.
* @section Port_MemMap_h_REF_2
* Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to prevent the
* contents of a header being included twice.
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions.
* @section Port_MemMap_h_REF_3
* Violates MISRA 2004 Advisory Rule 19.1, #include statements in a file should only be preceded by
* other preprocessor directives or comments.
* This comes from the order of includes in the .c. MemMap is required by AutoSAR to be included in
* the middle of the source file(s).
* @section [global] 
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely  on the significance of more than 31 characters. All compilers used support more than 31 chars for identifiers.
* @section [global] 
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that 31 character significance and case  sensitivity are supported for external identifiers. This violation is due to the naming convention for the memory ssections.
* @section [global] 
* Violates MISRA 2004 Required Rule 3.4, All uses of the pragma directive shall be documented and explained. The pragma directives are used MemMap.h file to define memory sections.
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/*
* @violates @ref Port_MemMap_h_REF_2 Precautions shall be taken in order
* to prevent the contents of a header being included twice.
*/
/* @violates @ref Port_MemMap_h_REF_3 #include statements in a file should
* only be preceded by other preprocessor directives or comments.
*/
#include "CompilerDefinition.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @{
* @brief Parameters that shall be published within the memory map header file and also in the
*       module's description file
*/
#define PORT_MEMMAP_VENDOR_ID                    43
#define PORT_MEMMAP_AR_RELEASE_MAJOR_VERSION     4
#define PORT_MEMMAP_AR_RELEASE_MINOR_VERSION     3
#define PORT_MEMMAP_AR_RELEASE_REVISION_VERSION  1
#define PORT_MEMMAP_SW_MAJOR_VERSION             1
#define PORT_MEMMAP_SW_MINOR_VERSION             0
#define PORT_MEMMAP_SW_PATCH_VERSION             4
/**@}*/
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/


/**
* @brief Symbol used for checking correctness of the includes
*/
#define MEMMAP_ERROR

#ifndef AUTOSAR_OS_NOT_USED
        #include "Os_memmap.h"
#endif
/**************************************************************************************************/
/********************************************* GREENHILLS *****************************************/
/**************************************************************************************************/
#ifdef _GREENHILLS_C_S32K1xx_
/**************************************** PORT *******************************/
#ifdef PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_8
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_8
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_16
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_16
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_32
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_32
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_BOOLEAN
    #define INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_8
    #define INSIDE_PORT_START_SEC_CONST_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_8
    #ifdef INSIDE_PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_16
    #define INSIDE_PORT_START_SEC_CONST_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_16
    #ifdef INSIDE_PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_32
    #define INSIDE_PORT_START_SEC_CONST_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_32
    #ifdef INSIDE_PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section rodata=".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE
    #define INSIDE_PORT_START_SEC_CODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section text=".mcal_text"
#endif

#ifdef PORT_STOP_SEC_CODE
    #ifdef INSIDE_PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_RAMCODE
    #define INSIDE_PORT_START_SEC_RAMCODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_RAMCODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section text=".ramcode"
    #pragma ghs inlineprologue
    #pragma ghs callmode=far
#endif

#ifdef PORT_STOP_SEC_RAMCODE
    #ifdef INSIDE_PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_RAMCODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
    #pragma ghs noinlineprologue
    #pragma ghs callmode=default
#endif

#ifdef PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE_AC
    #define INSIDE_PORT_START_SEC_CODE_AC
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE_AC
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section text=".acport_code_rom"
    #pragma ghs inlineprologue
#endif

#ifdef PORT_STOP_SEC_CODE_AC
    #ifdef INSIDE_PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE_AC
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
    #pragma ghs noinlineprologue
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif


#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section bss=".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mcal_data_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mcal_data_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mcal_data_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mcal_data_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section data=".mcal_data_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma ghs section
#endif
/**************************************************************************************************/
/********************************************* DIAB ***********************************************/
/**************************************************************************************************/
#elif defined(_DIABDATA_C_S32K1xx_)
/**************************************** PORT *******************************/
#ifdef PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_8
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST ".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_8
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_16
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST ".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_16
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_32
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST ".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_32
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST ".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST
#endif

#ifdef PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_BOOLEAN
    #define INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST ".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST
#endif

#ifdef PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_8
    #define INSIDE_PORT_START_SEC_CONST_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST ".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_8
    #ifdef INSIDE_PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST
#endif

#ifdef PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_16
    #define INSIDE_PORT_START_SEC_CONST_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST ".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_16
    #ifdef INSIDE_PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST
#endif

#ifdef PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_32
    #define INSIDE_PORT_START_SEC_CONST_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST ".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_32
    #ifdef INSIDE_PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST
#endif

#ifdef PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST ".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CONST
#endif

#ifdef PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE
    #define INSIDE_PORT_START_SEC_CODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_STOP_SEC_CODE
    #ifdef INSIDE_PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_RAMCODE
    #define INSIDE_PORT_START_SEC_RAMCODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_RAMCODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section CODE ".ramcode" far-absolute
#endif

#ifdef PORT_STOP_SEC_RAMCODE
    #ifdef INSIDE_PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_RAMCODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    /* default section for CODE */
    #pragma section CODE
#endif

#ifdef PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE_AC
    #define INSIDE_PORT_START_SEC_CODE_AC
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE_AC
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    /* use code relative addressing mode to ensure Position-independent Code (PIC) */
    #pragma section CODE ".acport_code_rom" far-code 

#endif

#ifdef PORT_STOP_SEC_CODE_AC
    #ifdef INSIDE_PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE_AC
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    /* default section for CODE */
    #pragma section CODE
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data" ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data" ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data" ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data" ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data" ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data" ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA 
#endif

#ifdef PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data" ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA 
#endif


#ifdef PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data" ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA 
#endif

#ifdef PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data" ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA 
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data" ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA 
#endif


#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data_no_cacheable" ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA 
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data_no_cacheable" ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data_no_cacheable" ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data_no_cacheable" ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data_no_cacheable" ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data_no_cacheable" ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif

#ifdef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data_no_cacheable" ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif


#ifdef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data_no_cacheable" ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif

#ifdef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data_no_cacheable" ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA ".mcal_data_no_cacheable" ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section DATA
#endif
/**************************************************************************************************/
/********************************************* CODEWARRIOR ****************************************/
/**************************************************************************************************/
#elif defined(_CODEWARRIOR_C_S32K1xx_)
/**************************************** PORT *******************************/
#ifdef PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_8
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mcal_const_cfg
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_8
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_16
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mcal_const_cfg
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_16
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_32
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mcal_const_cfg
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_32
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mcal_const_cfg
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_BOOLEAN
    #define INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mcal_const
#endif

#ifdef PORT_STOP_SEC_CONST_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_8
    #define INSIDE_PORT_START_SEC_CONST_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mcal_const
#endif

#ifdef PORT_STOP_SEC_CONST_8
    #ifdef INSIDE_PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_16
    #define INSIDE_PORT_START_SEC_CONST_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mcal_const
#endif

#ifdef PORT_STOP_SEC_CONST_16
    #ifdef INSIDE_PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_32
    #define INSIDE_PORT_START_SEC_CONST_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mcal_const
#endif

#ifdef PORT_STOP_SEC_CONST_32
    #ifdef INSIDE_PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG mcal_const
#endif

#ifdef PORT_STOP_SEC_CONST_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CONST_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE
    #define INSIDE_PORT_START_SEC_CODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG mcal_text
#endif

#ifdef PORT_STOP_SEC_CODE
    #ifdef INSIDE_PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_RAMCODE
    #define INSIDE_PORT_START_SEC_RAMCODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_RAMCODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG ramcode
#endif

#ifdef PORT_STOP_SEC_RAMCODE
    #ifdef INSIDE_PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_RAMCODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE_AC
    #define INSIDE_PORT_START_SEC_CODE_AC
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE_AC
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG acport_code_rom
#endif

#ifdef PORT_STOP_SEC_CODE_AC
    #ifdef INSIDE_PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE_AC
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma CODE_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_bss
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_bss
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_bss
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_bss
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_bss
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_data
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_data
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_data
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_data
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_data
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif


#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_bss
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_bss
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_bss
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_bss
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_bss
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_data
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_data
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_data
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_data
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG mcal_data
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma DATA_SEG DEFAULT
#endif
/**************************************************************************************************/
/********************************************* COSMIC *********************************************/
/**************************************************************************************************/
#elif defined(_COSMIC_C_S32K1xx_)
/**************************************** PORT *******************************/
#ifdef PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_8
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {mcalconstcfg}
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_8
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_16
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {mcalconstcfg}
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_16
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_32
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {mcalconstcfg}
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_32
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {mcalconstcfg}
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_BOOLEAN
    #define INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {mcal_const}
#endif

#ifdef PORT_STOP_SEC_CONST_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_8
    #define INSIDE_PORT_START_SEC_CONST_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {mcal_const}
#endif

#ifdef PORT_STOP_SEC_CONST_8
    #ifdef INSIDE_PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_16
    #define INSIDE_PORT_START_SEC_CONST_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {mcal_const}
#endif

#ifdef PORT_STOP_SEC_CONST_16
    #ifdef INSIDE_PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_32
    #define INSIDE_PORT_START_SEC_CONST_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {mcal_const}
#endif

#ifdef PORT_STOP_SEC_CONST_32
    #ifdef INSIDE_PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {mcal_const}
#endif

#ifdef PORT_STOP_SEC_CONST_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section const {}
#endif

#ifdef PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE
    #define INSIDE_PORT_START_SEC_CODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section (mcal_text)
#endif

#ifdef PORT_STOP_SEC_CODE
    #ifdef INSIDE_PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ()
#endif

#ifdef PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_RAMCODE
    #define INSIDE_PORT_START_SEC_RAMCODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_RAMCODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section (ramcode)
#endif

#ifdef PORT_STOP_SEC_RAMCODE
    #ifdef INSIDE_PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_RAMCODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ()
#endif

#ifdef PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE_AC
    #define INSIDE_PORT_START_SEC_CODE_AC
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE_AC
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section (acportcode)
#endif

#ifdef PORT_STOP_SEC_CODE_AC
    #ifdef INSIDE_PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE_AC
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ()
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section [mcal_bss]
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section [mcal_bss]
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section [mcal_bss]
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section [mcal_bss]
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section [mcal_bss]
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {mcal_data}
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {mcal_data}
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {mcal_data}
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {mcal_data}
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {mcal_data}
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif


#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section [mcal_bss]
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section [mcal_bss]
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section [mcal_bss]
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section [mcal_bss]
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section [mcal_bss]
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section []
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {mcal_data}
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {mcal_data}
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {mcal_data}
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {mcal_data}
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {mcal_data}
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section {}
#endif
/**************************************************************************************************/
/********************************************* HighTec *********************************************/
/**************************************************************************************************/
#elif defined(_HITECH_C_S32K1xx_)
/**************************************** PORT *******************************/
#ifdef PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_8
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_const_cfg" a
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_8
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_16
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_const_cfg" a
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_16
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_32
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_const_cfg" a
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_32
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_const_cfg" a
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_BOOLEAN
    #define INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_const" a
#endif

#ifdef PORT_STOP_SEC_CONST_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_8
    #define INSIDE_PORT_START_SEC_CONST_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_const" a
#endif

#ifdef PORT_STOP_SEC_CONST_8
    #ifdef INSIDE_PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_16
    #define INSIDE_PORT_START_SEC_CONST_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_const" a
#endif

#ifdef PORT_STOP_SEC_CONST_16
    #ifdef INSIDE_PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_32
    #define INSIDE_PORT_START_SEC_CONST_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_const" a
#endif

#ifdef PORT_STOP_SEC_CONST_32
    #ifdef INSIDE_PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_const" a
#endif

#ifdef PORT_STOP_SEC_CONST_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE
    #define INSIDE_PORT_START_SEC_CODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_text" avx
#endif

#ifdef PORT_STOP_SEC_CODE
    #ifdef INSIDE_PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_RAMCODE
    #define INSIDE_PORT_START_SEC_RAMCODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_RAMCODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".ramcode" avx
#endif

#ifdef PORT_STOP_SEC_RAMCODE
    #ifdef INSIDE_PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_RAMCODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma  section
#endif

#ifdef PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE_AC
    #define INSIDE_PORT_START_SEC_CODE_AC
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE_AC
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".acport_code_rom" avx
#endif

#ifdef PORT_STOP_SEC_CODE_AC
    #ifdef INSIDE_PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE_AC
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma  section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_bss" awsB
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_bss" awsB
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_bss" awsB
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_bss" awsB
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_bss" awsB
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_bss_no_cacheable" awsB
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif
#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_data" aws
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_data" aws
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_data" aws
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_data" aws
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section ".mcal_data" aws
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma section
#endif
/**************************************************************************************************/
/********************************************* Linaro *********************************************/
/**************************************************************************************************/
#elif defined(_LINARO_C_S32K1xx_)
/**************************************** PORT *******************************/
#ifdef PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_8
    #define ENTERED_PORT_START_SEC_CONFIG_DATA_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONFIG_DATA_8
        #undef ENTERED_PORT_START_SEC_CONFIG_DATA_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_16
    #define ENTERED_PORT_START_SEC_CONFIG_DATA_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONFIG_DATA_16
        #undef ENTERED_PORT_START_SEC_CONFIG_DATA_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_32
    #define ENTERED_PORT_START_SEC_CONFIG_DATA_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONFIG_DATA_32
        #undef ENTERED_PORT_START_SEC_CONFIG_DATA_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata 
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #define ENTERED_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
        #undef ENTERED_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata 
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_8_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_CONFIG_DATA_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONFIG_DATA_8_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_CONFIG_DATA_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONFIG_DATA_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_16_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_CONFIG_DATA_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONFIG_DATA_16_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_CONFIG_DATA_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONFIG_DATA_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_32_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_CONFIG_DATA_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONFIG_DATA_32_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_CONFIG_DATA_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONFIG_DATA_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata
#endif

#ifdef PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_BOOLEAN
    #define ENTERED_PORT_START_SEC_CONST_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const" 
#endif

#ifdef PORT_STOP_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONST_BOOLEAN
        #undef ENTERED_PORT_START_SEC_CONST_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata
#endif

#ifdef PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_8
    #define ENTERED_PORT_START_SEC_CONST_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const" 
#endif

#ifdef PORT_STOP_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONST_8
        #undef ENTERED_PORT_START_SEC_CONST_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata
#endif

#ifdef PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_16
    #define ENTERED_PORT_START_SEC_CONST_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const" 
#endif

#ifdef PORT_STOP_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONST_16
        #undef ENTERED_PORT_START_SEC_CONST_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata
#endif

#ifdef PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_32
    #define ENTERED_PORT_START_SEC_CONST_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const" 
#endif

#ifdef PORT_STOP_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONST_32
        #undef ENTERED_PORT_START_SEC_CONST_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata
#endif

#ifdef PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_UNSPECIFIED
    #define ENTERED_PORT_START_SEC_CONST_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata ".mcal_const" 
#endif

#ifdef PORT_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CONST_UNSPECIFIED
        #undef ENTERED_PORT_START_SEC_CONST_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section rodata
#endif

#ifdef PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE
    #define ENTERED_PORT_START_SEC_CODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text ".mcal_text" 
#endif

#ifdef PORT_STOP_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CODE
        #undef ENTERED_PORT_START_SEC_CODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text
#endif

#ifdef PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_RAMCODE
    #define ENTERED_PORT_START_SEC_RAMCODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_RAMCODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text ".ramcode" 
#endif

#ifdef PORT_STOP_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_RAMCODE
        #undef ENTERED_PORT_START_SEC_RAMCODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text
#endif

#ifdef PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE_AC
    #define ENTERED_PORT_START_SEC_CODE_AC
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE_AC
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text ".acfls_code_rom" 
#endif

#ifdef PORT_STOP_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_CODE_AC
        #undef ENTERED_PORT_START_SEC_CODE_AC
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section text
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #define ENTERED_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mcal_bss" 
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
        #undef ENTERED_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss 
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8
    #define ENTERED_PORT_START_SEC_VAR_NO_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mcal_bss" 
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_NO_INIT_8
        #undef ENTERED_PORT_START_SEC_VAR_NO_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16
    #define ENTERED_PORT_START_SEC_VAR_NO_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mcal_bss" 
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_NO_INIT_16
        #undef ENTERED_PORT_START_SEC_VAR_NO_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32
    #define ENTERED_PORT_START_SEC_VAR_NO_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mcal_bss" 
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_NO_INIT_32
        #undef ENTERED_PORT_START_SEC_VAR_NO_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss 
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #define ENTERED_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mcal_bss" 
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
        #undef ENTERED_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN
    #define ENTERED_PORT_START_SEC_VAR_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mcal_data" 
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_INIT_BOOLEAN
        #undef ENTERED_PORT_START_SEC_VAR_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data 
#endif

#ifdef PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8
    #define ENTERED_PORT_START_SEC_VAR_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mcal_data" 
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_INIT_8
        #undef ENTERED_PORT_START_SEC_VAR_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data 
#endif

#ifdef PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16
    #define ENTERED_PORT_START_SEC_VAR_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_INIT_16
        #undef ENTERED_PORT_START_SEC_VAR_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data
#endif

#ifdef PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32
    #define ENTERED_PORT_START_SEC_VAR_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mcal_data" 
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_INIT_32
        #undef ENTERED_PORT_START_SEC_VAR_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data 
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #define ENTERED_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mcal_data" 
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_INIT_UNSPECIFIED
        #undef ENTERED_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data 
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mcal_bss_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss 
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mcal_bss_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mcal_bss_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mcal_bss_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mcal_bss_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss 
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mcal_data_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data
#endif

#ifdef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mcal_data_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data
#endif

#ifdef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mcal_data_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data 
#endif

#ifdef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mcal_data_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data 
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mcal_data_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_AE_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_AE_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_AE_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_AE_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mcal_bss_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_AE_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_AE_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_AE_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_AE_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss 
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED_AE_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED_AE_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_INIT_UNSPECIFIED_AE_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_AE_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mcal_data_no_cacheable" 
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_AE_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_INIT_UNSPECIFIED_AE_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_INIT_UNSPECIFIED_AE_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_AE_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data 
#endif

#ifdef PORT_START_SEC_VAR_SHARED_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_SHARED_INIT_UNSPECIFIED_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_SHARED_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_SHARED_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data ".mcal_shared_data" 
#endif

#ifdef PORT_STOP_SEC_VAR_SHARED_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_SHARED_INIT_UNSPECIFIED_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_SHARED_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_SHARED_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section data
#endif

#ifdef PORT_START_SEC_VAR_SHARED_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_SHARED_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #define ENTERED_PORT_START_SEC_VAR_SHARED_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_SHARED_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss ".mcal_shared_bss" 
#endif

#ifdef PORT_STOP_SEC_VAR_SHARED_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #ifdef ENTERED_PORT_START_SEC_VAR_SHARED_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #undef ENTERED_PORT_START_SEC_VAR_SHARED_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
        #undef MEMMAP_MATCH_ERROR
    #endif
    #undef PORT_STOP_SEC_VAR_SHARED_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma GCC section bss
#endif
/**************************************************************************************************/
/********************************************* DS5 ************************************************/
/**************************************************************************************************/
#elif defined(_ARM_DS5_C_S32K1xx_)
/**************************************** PORT *******************************/
#ifdef PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_8
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rodata=".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_8
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_16
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rodata=".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_16
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_32
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rodata=".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_32
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rodata=".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_BOOLEAN
    #define INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rodata=".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_8
    #define INSIDE_PORT_START_SEC_CONST_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rodata=".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_8
    #ifdef INSIDE_PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_16
    #define INSIDE_PORT_START_SEC_CONST_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rodata=".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_16
    #ifdef INSIDE_PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_32
    #define INSIDE_PORT_START_SEC_CONST_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rodata=".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_32
    #ifdef INSIDE_PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rodata=".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE
    #define INSIDE_PORT_START_SEC_CODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section code=".mcal_text"
#endif

#ifdef PORT_STOP_SEC_CODE
    #ifdef INSIDE_PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_RAMCODE
    #define INSIDE_PORT_START_SEC_RAMCODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_RAMCODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section code=".ramcode"
#endif

#ifdef PORT_STOP_SEC_RAMCODE
    #ifdef INSIDE_PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_RAMCODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE_AC
    #define INSIDE_PORT_START_SEC_CODE_AC
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE_AC
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section code=".acport_code_rom"
#endif

#ifdef PORT_STOP_SEC_CODE_AC
    #ifdef INSIDE_PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE_AC
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section zidata=".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section zidata=".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif


#ifdef PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section zidata=".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section zidata=".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section zidata=".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    #pragma arm section rwdata=".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif


#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
     #undef MEMMAP_ERROR
    /* no definition -> default compiler settings are used */
#endif




/**************************************************************************************************/
/********************************************* IAR ************************************************/
/**************************************************************************************************/
#elif defined(_IAR_C_S32K1xx_)
/**************************************** PORT *******************************/
#ifdef PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_8
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_8
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = 
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_16
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_16
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = 
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_32
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_32
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = 
#endif

#ifdef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_const_cfg"
#endif

#ifdef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = 
#endif

#ifdef PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_BOOLEAN
    #define INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = 
#endif

#ifdef PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_8
    #define INSIDE_PORT_START_SEC_CONST_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_8
    #ifdef INSIDE_PORT_START_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = 
#endif

#ifdef PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_16
    #define INSIDE_PORT_START_SEC_CONST_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_16
    #ifdef INSIDE_PORT_START_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = 
#endif

#ifdef PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_32
    #define INSIDE_PORT_START_SEC_CONST_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_32
    #ifdef INSIDE_PORT_START_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = 
#endif

#ifdef PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CONST_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CONST_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_const"
#endif

#ifdef PORT_STOP_SEC_CONST_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CONST_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CONST_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = 
#endif

#ifdef PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE
    #define INSIDE_PORT_START_SEC_CODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes = @ ".mcal_text"
#endif

#ifdef PORT_STOP_SEC_CODE
    #ifdef INSIDE_PORT_START_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes =
#endif

#ifdef PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_RAMCODE
    #define INSIDE_PORT_START_SEC_RAMCODE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_RAMCODE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes = @ ".ramcode"

#endif

#ifdef PORT_STOP_SEC_RAMCODE
    #ifdef INSIDE_PORT_START_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_RAMCODE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_RAMCODE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes =
    
#endif

#ifdef PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_CODE_AC
    #define INSIDE_PORT_START_SEC_CODE_AC
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_CODE_AC
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes = @ ".acport_code_rom"

#endif

#ifdef PORT_STOP_SEC_CODE_AC
    #ifdef INSIDE_PORT_START_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_CODE_AC
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_CODE_AC
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_function_attributes = 
    
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_bss"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8
    #define INSIDE_PORT_START_SEC_VAR_INIT_8
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16
    #define INSIDE_PORT_START_SEC_VAR_INIT_16
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32
    #define INSIDE_PORT_START_SEC_VAR_INIT_32
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_data"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif


#ifdef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_bss_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = @ ".mcal_data_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_BOOLEAN_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
   #pragma default_variable_attributes = @ ".mcal_data_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_8_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_8_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
   #pragma default_variable_attributes = @ ".mcal_data_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_16_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_16_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
   #pragma default_variable_attributes = @ ".mcal_data_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_32_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_32_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes =
#endif

#ifdef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #define INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifndef MEMMAP_MATCH_ERROR
        #define MEMMAP_MATCH_ERROR
    #else
        #ifndef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
        #error "MemMap.h, no valid matching start-stop section defined."
        #endif
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
   #pragma default_variable_attributes = @ ".mcal_data_no_cacheable"
#endif

#ifdef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #ifdef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef INSIDE_PORT_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    #else
        #error "MemMap.h, no valid matching start-stop section defined."
    #endif
    #ifdef MEMMAP_MATCH_ERROR
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
        #undef MEMMAP_MATCH_ERROR
    #endif
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef PORT_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
    /**
    * @file Port_MemMap.h
    * @violates @ref Port_MemMap_h_REF_1 MISRA 2004 Required Rule 19.6, use of '#undef' is discouraged
    */
    #undef MEMMAP_ERROR
    #pragma default_variable_attributes = 
#endif
#endif 
/**************************************************************************************************/
/****************************************** Report error ******************************************/
/**************************************************************************************************/
#ifdef MEMMAP_ERROR
    #error "MemMap.h, no valid memory mapping symbol defined."
#endif
                                                                                                     
/*================================================================================================== 
*                                            ENUMS                                                   
==================================================================================================*/ 
                                                                                                     
/*================================================================================================== 
*                                 STRUCTURES AND OTHER TYPEDEFS                                      
==================================================================================================*/ 
                                                                                                     
/*================================================================================================== 
*                                 GLOBAL VARIABLE DECLARATIONS                                       
==================================================================================================*/ 
                                                                                                     
/*================================================================================================== 
*                                     FUNCTION PROTOTYPES                                            
==================================================================================================*/ 
                                                                                                     
#ifdef __cplusplus                                                                                   
}                                                                                                    
#endif                                                                                               
