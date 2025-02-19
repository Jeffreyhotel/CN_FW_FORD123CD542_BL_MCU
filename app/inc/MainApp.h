/* ************************************************************************** */
#ifndef MAINAPP_H    /* Guard against multiple inclusion */
#define MAINAPP_H
/* ************************************************************************** */
#define STATE_BOOT          0x00U
#define STATE_JUMP          0x01U
#define STATE_RETRYCHECK    0x02U

#define FW_BL_VERSION   0x02U
#define FW_BL_VER_ADDR  0x00002FFFU

/* FUNCTION:  Define MCU ASM ... for BOOTLOADER VECTOR JUMP */
#define     ADDR_APP_A_START      0x00003000U
#define     ADDR_APP_B_START      0x00011000U
#define		ASM_NOP()			__NOP()
#define		ASM_SYS_RESET()	        (__NVIC_SystemReset())
#define		ASM_SET_MSP(u32Msp)	(__set_MSP(u32Msp))
#define		ASM_VECTOR_RESET(u32ResetVector)	asm("bx %0"::"r" (u32ResetVector))

uint8_t MainApp_Task(void);
uint8_t MainApp_Flow(uint8_t u8State);
uint8_t MainApp_Boot_Mode(uint8_t u8Nothing);
uint8_t MainApp_Jump_Mode(uint8_t u8Nothing);
uint8_t MainApp_Retrycheck_Mode(uint8_t u8Nothing);

#endif
/* *****************************************************************************
 End of File
 */
