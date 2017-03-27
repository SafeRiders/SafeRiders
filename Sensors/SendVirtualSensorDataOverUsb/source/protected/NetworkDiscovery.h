/**
* Licensee agrees that the example code provided to Licensee has been developed and released by Bosch solely as an example to be used as a potential reference for Licensee�s application development.
* Fitness and suitability of the example code for any use within Licensee�s applications need to be verified by Licensee on its own authority by taking appropriate state of the art actions and measures (e.g. by means of quality assurance measures).
* Licensee shall be responsible for conducting the development of its applications as well as integration of parts of the example code into such applications, taking into account the state of the art of technology and any statutory regulations and provisions applicable for such applications. Compliance with the functional system requirements and testing there of (including validation of information/data security aspects and functional safety) and release shall be solely incumbent upon Licensee.
* For the avoidance of doubt, Licensee shall be responsible and fully liable for the applications and any distribution of such applications into the market.
*
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
*
*     (1) Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*
*     (2) Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in
*     the documentation and/or other materials provided with the
*     distribution.
*
*     (3)The name of the author may not be used to
*     endorse or promote products derived from this software without
*     specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
*  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
*  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
*  DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
*  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
*  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
*  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
*  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
*  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
*  IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*/

/* header definition ******************************************************** */
#ifndef XDK110_WLANNETWORKMANAGEMENT_H_
#define XDK110_WLANNETWORKMANAGEMENT_H_

/* local interface declaration ********************************************** */

/* local type and macro definitions */
#define ONE_SECOND_DELAY        (1000)/**< Macro to represent one second time unit*/
#define TIMER_BLOCK_TIME        (0xffff)/**< Macro used to define block time of a timer*/
#define TIMER_NO_ERROR             (0L)/**<Macro to define no error in timer*/
#define TIMER_AUTORELOAD_ON             UINT32_C(1)             /**< Auto reload of timer is enabled*/

#define MINUS_ONE               (-1) /**< Macro for defining -1*/
#define ZERO                    (0) /**< Macro for defining 0*/
#define ONE                     (1) /**< Macro for defining 1*/
#define TWO                     (2) /**< Macro for defining 2*/
#define THREE                   (3) /**< Macro for defining 3*/

#define TASK_PRIORITY           (1) /**< Macro for defining task priority*/
#define TASK_STACK_DEPTH        (768) /**< Macro for defining task stack depth*/

#define DELAY_500_MSEC              (500) /**< Macro used for delay function for 0,5 seconds */
#define DELAY_5_SEC                 (5000) /**< Macro used for delay function for 5 seconds */
#define DELAY_10_SEC                (10000) /**< Macro used for delay function for 10 seconds */
#define DELAY_20_SEC                (20000) /**< Macro used for delay function for 20 seconds */
#define DELAY_60_SEC                (60000) /**< Macro used for delay function for 20 seconds */

#define MAX_SIZE_BUFFER         (10) /**< Macro for defining size of the return status buffer*/

#ifndef INFINITE_LOOP
#define INFINITE_LOOP                       for (;;) /**< Macro for defining infinite loop*/
#endif

/**  Depending on the configured mode, set  :
 *   - 0 for static IP application
 *   - 1 for DHCP IP application with callback,
 *   - 2 for DHCP IP application without callback,
 *   - 3 for deactivate
 **************************************************************************** */
#define NCI_DHCP_MODE               (0)

#define SCAN_INTERVAL           (5) /**< Macro for scan interval */

/* local function prototype declarations */

/* local module global variable declarations */
/* local inline function definitions */

#endif /* XDK110_WLANNETWORKMANAGEMENT_H_ */

/** ************************************************************************* */
