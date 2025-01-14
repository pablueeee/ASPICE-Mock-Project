/**
*   @file    Dem_Types.h
*   @version 1.0.4
*
*   @brief   AUTOSAR Dem -  module header
*   @details This file contains data types of the AUTOSAR Dem
*            This file contains sample code only. It is not part of the production code deliverables
*
*   @addtogroup DEM_MODULE
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : 
*   Dependencies         : 
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

#ifndef DEM_TYPES_H
#define DEM_TYPES_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/


/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DEM_TYPES_VENDOR_ID 43
#define DEM_TYPES_MODULE_ID 54

#define DEM_TYPES_AR_RELEASE_MAJOR_VERSION      4
#define DEM_TYPES_AR_RELEASE_MINOR_VERSION      3
#define DEM_TYPES_AR_RELEASE_REVISION_VERSION   1
#define DEM_TYPES_SW_MAJOR_VERSION              1
#define DEM_TYPES_SW_MINOR_VERSION              0
#define DEM_TYPES_SW_PATCH_VERSION              4

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef uint16 Dem_EventIdType;                              /**< @brief dem event ID type */

typedef uint8 Dem_EventStatusType;                           /**< @brief dem event status type */

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
#define DEM_EVENT_STATUS_PASSED     (Dem_EventStatusType)0x00U  /**< @brief dem event passed */
#define DEM_EVENT_STATUS_FAILED     (Dem_EventStatusType)0x01U  /**< @brief dem event failed */
#define DEM_EVENT_STATUS_PREPASSED  (Dem_EventStatusType)0x02U  /**< @brief dem event pre-passed */
#define DEM_EVENT_STATUS_PREFAILED  (Dem_EventStatusType)0x03U  /**< @brief dem event pre-failed */

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* #ifndef DEM_TYPES_H */
