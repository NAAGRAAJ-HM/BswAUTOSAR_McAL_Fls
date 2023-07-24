/******************************************************************************/
/* File   : McalFls.c                                                         */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.h"

#include "infMcalFlsSwcApplStartUp.h"

#include "CfgMcalFls.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
       Type_McalFls_eStatusDevice   McalFls_eStatusDevice;
       Type_McalFls_eFunctionActive McalFls_eFunctionActive;
       sint16                       McalFls_s16Segment;
static sint16                       McalFls_s16SegmentValidNext;
static sint16                       McalFls_s16SegmentCached;
static Type_McalFls_stInfoBlock     McalFls_stInfoBlockCached;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALFLS_CODE) infMcalFlsSwcApplStartUp_vInitPowerOn(void){
   McalFls_eStatusDevice                         = McalFls_eStatusDeviceIdle;
   McalFls_eFunctionActive                       = McalFls_eFunctionActive_None;
   McalFls_s16Segment                            = -1;
   McalFls_s16SegmentValidNext                   = -1;
   McalFls_s16SegmentCached                      = 0;
   McalFls_stInfoBlockCached.tAddressHeaderBegin = CfgMcalFls_astTableInfoBlock[0].tAddressHeaderBegin;
   McalFls_stInfoBlockCached.tAddressHeaderEnd   = CfgMcalFls_astTableInfoBlock[0].tAddressHeaderEnd;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
