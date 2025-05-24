/**
  * @file app_main.c
  * @brief Application main file
  * @author Leon Lee (leonlee.scut@outlook.com)
  * @version 0.1
  * @date 2025/05/24
  * 
  * @copyright Copyright (c) 2025 South China University of Technology.
  * All rights reserved.
  * 
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  * 
  * @par History:
  * 	Date		Version		Author			Description
  * 	2025/05/24	0.1			Leon Lee		Preliminary version.
  */

/*----------------------------------------------------------------------------
 * CMSIS-RTOS 'main' function template
 *---------------------------------------------------------------------------*/

#include "RTE_Components.h"
#include  CMSIS_device_header
#include "cmsis_os2.h"

 /*----------------------------------------------------------------------------
  * Application main thread
  *---------------------------------------------------------------------------*/
__NO_RETURN static void app_main_thread(void* argument)
{
    (void)argument;
    // ...
    for (;;) 
    {
        osDelay(1000); // Delay for 1 second
    } 
}

int app_main(void)
{

    // System Initialization
    SystemCoreClockUpdate();
    // ...

    osKernelInitialize();                       // Initialize CMSIS-RTOS
    osThreadNew(app_main_thread, NULL, NULL);   // Create application main thread
    osKernelStart();                            // Start thread execution
}

/************* (C) COPYRIGHT South China Univ. of Tech. ****** END OF FILE ****/
