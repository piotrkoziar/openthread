/*
 *  Copyright (c) 2019, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file
 *   This file implements the nrf5 platform transport abstraction layer functions.
 *
 */

#include "openthread-system.h"

#include "platform-nrf5-transport.h"

extern bool gPlatformPseudoResetWasRequested;

static void nrf5TransportInit()
{
#if ((UART_AS_SERIAL_TRANSPORT == 1) || (USB_CDC_AS_SERIAL_TRANSPORT == 1))
    if (!gPlatformPseudoResetWasRequested)
    {
        nrf5UartInit();
    }
    else
    {
        nrf5UartClearPendingData();
    }
#endif

#if (SPIS_AS_SERIAL_TRANSPORT == 1)
    nrf5SpiSlaveInit();
#endif
}

static void nrf5TransportDeinit()
{
#if ((UART_AS_SERIAL_TRANSPORT == 1) || (USB_CDC_AS_SERIAL_TRANSPORT == 1))
    if (!gPlatformPseudoResetWasRequested)
    {
        nrf5UartDeinit();
    }
#endif

#if (SPIS_AS_SERIAL_TRANSPORT == 1)
    nrf5SpiSlaveDeinit();
#endif
}

static void nrf5TransportProcess(void)
{
#if ((UART_AS_SERIAL_TRANSPORT == 1) || (USB_CDC_AS_SERIAL_TRANSPORT == 1))
    nrf5UartProcess();
#endif
#if (SPIS_AS_SERIAL_TRANSPORT == 1)
    nrf5SpiSlaveProcess();
#endif
}

void otSysTransportInit(int argc, char *argv[])
{
    OT_UNUSED_VARIABLE(argc);
    OT_UNUSED_VARIABLE(argv);

    if (gPlatformPseudoResetWasRequested)
    {
        otSysTransportDeinit();
    }

    nrf5TransportInit();

    gPlatformPseudoResetWasRequested = false;
}

void otSysTransportDeinit(void)
{
    nrf5TransportDeinit();
}

void otSysTransportProcessDrivers(otInstance *aInstance)
{
    nrf5TransportProcess();
}
