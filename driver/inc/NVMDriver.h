/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.h

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

#ifndef __NVMDRIVER_H
#define __NVMDRIVER_H


/* ************************************************************************** */
/** Global Function Definition
 */
/* ************************************************************************** */

#include "main.h"

/*---------------------------- Define Constant -------------------------------*/

bool NVMDriver_Read( uint32_t *data, uint32_t length, const uint32_t address );
bool NVMDriver_PageWrite( uint32_t *data, const uint32_t address );
bool NVMDriver_RowErase(uint32_t address);
bool NVMDriver_IsBusy(void);

#endif /* _EXAMPLE_FILE_NAME_H */
/* *****************************************************************************
 End of File
 */