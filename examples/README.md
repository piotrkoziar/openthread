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
   - If enabled:
Debug instance is built. Code optimization is disabled.

- DHCP6_CLIENT:
   - If enabled:
The device is able to act as typical DHCP client.
   - Typical use case:
Device that is supposed to request the DHCP server for networking parameters.

- DHCP6_SERVER:
The device is able to act as typical DHCP server.
   - Typical use case:
Device that is supposed to provide networking parameters to devices with DHCP_CLIENT switch enabled.

 - DIAGNOSTIC:
      - If enabled:
 Functions in platform abstraction for diagnostics feature module are enabled.
      - Typical use case:
Device that is tested in the factory production stage.

- DISABLE_DOC:
   - If enabled:
The documentation is not built.

- DISABLE_TOOLS:
   - If enabled:
Tools are not built.

- DNS_CLIENT:
   - If enabled:

   - Typical use case:

- DYNAMIC_LOG_LEVEL:
   - If enabled:

   - Typical use case:

- ECDSA:
   - If enabled:

   - Typical use case:

- EXTERNAL_HEAP:
   - If enabled:

   - Typical use case:

- IP6_FRAGM:
   - If enabled:

   - Typical use case:

- JAM_DETECTION:
   - If enabled:

   - Typical use case:

- JOINER:
   - If enabled:

   - Typical use case:

- LEGACY:
   - If enabled:

   - Typical use case:

- LINK_RAW:
   - If enabled:

   - Typical use case:

- MAC_FILTER:
   - If enabled:

   - Typical use case:

- MTD_NETDIAG:
   - If enabled:

   - Typical use case:

- PLATFORM_UDP:
   - If enabled:

   - Typical use case:


- REFERENCE_DEVICE:
   - If enabled:

   - Typical use case:

- SERVICE:
   - If enabled:

   - Typical use case:

- SETTINGS_RAM:
   - If enabled:

   - Typical use case:

- SLAAC:
   - If enabled:

   - Typical use case:

- SNTP_CLIENT:
   - If enabled:

   - Typical use case:

- TIME_SYNC:
   - If enabled:

   - Typical use case:

- UDP_FORWARD:
   - If enabled:

   - Typical use case:
