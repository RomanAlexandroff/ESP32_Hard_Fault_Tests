/* ********************************************************************************************** */
/*                                                                                                */
/*   ESP32 Hard Fault Tests                                            :::::::::        :::       */
/*   ESP32_Hard_Fault_Tests.h                                         :+:    :+:     :+: :+:      */
/*                                                                   +:+    +:+    +:+   +:+      */
/*   By: Roman Alexandrov <r.aleksandroff@gmail.com>                +#++:++#:    +#++:++#++:      */
/*                                                                 +#+    +#+   +#+     +#+       */
/*   Created: 2025/01/14 15:00:00                                 #+#    #+#   #+#     #+#        */
/*   Updated: 2025/01/14 15:00:00                                ###    ###   ###     ###         */
/*                                                                                                */
/*                                                                                                */
/* ********************************************************************************************** */

#ifndef ESP32_HARD_FAULT_TESTS_H
# define ESP32_HARD_FAULT_TESTS_H

# include <Arduino.h>                                        // for Serial object
# include <stdio.h>                                          // for printf()
# include <stdint.h>                                         // for fixed-width type variables
# include <esp_task_wdt.h>                                   // watchdog functionality

# pragma GCC optimize           ("O3")                       // macro for experimenting with the compiler optimization

# define BAUD_RATE              115200                       // speed of the Serial communication
# define WD_TIMEOUT_MS          5000                         // watchdog
# define WD_NUMBER_OF_CORES     1                            // watchdog
# define WD_RESET_INFO          true                         // watchdog

int       divide_by_zero(void);
int       write_to_null(void);
int       illegal_instruction_execution(void);
int       illegal_address_execution(void);
void      call_null_pointer_function(void);
void      recursive_function(void);
int*      dont_return_stack_memory(void);
int*      dont_return_malloc_and_freed_memory(void);
void      double_free(void);
uint8_t   unaligned_access_ok(void);
uint32_t  unaligned_access_bad(int index);
void      delete_nonexistent_watchdog(void);

#endif
