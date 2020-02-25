You can configure OpenThread for different functionality and behavior during the build process.
Available configuration options are detailed at the following locations:
 - Compile-time constants	are listed in all the header files in /src/core/config
 - Makefile build switches are listed in /examples/common-switches.mk

Use a switch to enable functionality for an example platform.
For example, to build the CC2538 example with Commissioner and Joiner support enabled:
```
make -f examples/Makefile-cc2538 COMMISSIONER=1 JOINER=1
```
Or, to build the nRF52840 example with the Jam Detection feature enabled:
```
make -f examples/Makefile-nrf52840 JAM_DETECTION=1
```

The common-switches are described below.

 - BIG_ENDIAN:
    - If enabled:
Host platform uses big-endian byte order

 - BORDER_AGENT:
    - If enabled:
Border Agent role is supported.
    - Use cases:
In most cases, this switch should be enabled if you are building On-mesh Commissioner or Border Router with External Commissioning support.

 - BORDER_ROUTER:
    - If enabled:
Border Router is supported.
    - Use cases:
BORDER_ROUTER switch is usually combined with the BORDER_AGENT and UDP_FORWARD switches to build Border Router device.

 - COAP:
    - If enabled:
 Functions in CoAP API module are enabled.
    - Use cases:
 Enable this switch if you want to control Constrained Application Protocol communication.

  - COAPS:
    - If enabled:
 Functions in CoAP Secure API module are enabled.
    - Use cases:
 Enable this switch if you want to control Constrained Application Protocol Secure (CoAP over DTLS) communication.

 - COMMISSIONER:
    - If enabled:
 Commissioner role is supported.
    - Use cases:
 Enable it on device that should be able to perform Commissioner role.

 - COVERAGE:
    - If enabled:

    - Use cases:

 - CHANNEL_MANAGER:
    - If enabled:
Functions in Channel Manager feature module are enabled.
    - Use cases:
Enable this switch on devices that are supposed to request a Thread network channel change.
    - Note:
This switch should be used only with an FTD buld.

 - CHANNEL_MONITOR:
    - If enabled:
Functions in channel monitor feature module are enabled.
    - Use cases:
 Enable this switch on devices that are supposed to determine the cleaner channels.

 - UDP_FORWARD:
    - If enabled:
Functions in udp-forward feature module are enabled.
    - Use cases:
Enable this switch on the Border Router device (running on the NCP design) with External Commissioning support
to service Thread Commissioner packets on the NCP side.

 - CHILD_SUPERVISION:
      - If enabled:
Functions in child supervision feature module are enabled.
      - Typical use case:
Parent or child node with custom OpenThread application that manages the supervision and checks timeout intervals.

- DEBUG:
