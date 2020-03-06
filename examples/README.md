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
Read more about the child supervision:
https://openthread.io/guides/build/features/child-supervision
      - Typical use case:
Parent or child node with custom OpenThread application that manages the supervision, checks timeout intervals and verifies connectivity between parent and child.

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
Functions in DNS feature module are enabled.
   - Typical use case:
Device that sends a DNS query for AAAA (IPv6) record.

- DYNAMIC_LOG_LEVEL:
   - If enabled:
Dynamic log level feature is enabled.
Read more about logging:
https://openthread.io/reference/group/api-logging
   - Typical use case:
Device that sets the log level in runtime.

- ECDSA:
   - If enabled:
The function in mbedtls module
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
   
   measuring all switches
BORDER_AGENT=1 BORDER_ROUTER=1 COAP=1 COAPS=1 COMMISSIONER=1 DEBUG=1 DHCP6_CLIENT=1
DHCP6_SERVER=1 DIAGNOSTIC=1 DNS_CLIENT=1 ECDSA=1 EXTERNAL_HEAP=1 JOINER=1 LINK_RAW=1
MAC_FILTER=1 MTD_NETDIAG=1 SERVICE=1 SNTP_CLIENT=1 UDP_FORWARD=1 CHANNEL_MANAGER=1
CHANNEL_MONITOR=1 CHILD_SUPERVISION=1 JAM_DETECTION=1 IP6_FRAGM=1
Size of all switches build: 610388

measuring no switches
Size of no switches build: 189452


measuring BORDER_AGENT=1
all but not mesured flag: 7168 bytes
only mesured flag: -103012 bytes

measuring BORDER_ROUTER=1
all but not mesured flag: 5808 bytes
only mesured flag: -3168 bytes

measuring COAP=1
additionally unsetting COAPS
all but not mesured flag: 15944 bytes
only mesured flag: -2672 bytes

measuring COAPS=1
all but not mesured flag: 11240 bytes
additionally setting COAP
only mesured flag: -111192 bytes

measuring COMMISSIONER=1
all but not mesured flag: 17600 bytes
only mesured flag: -107940 bytes

measuring DEBUG=1
all but not mesured flag: 269484 bytes
only mesured flag: -214968 bytes

measuring DHCP6_CLIENT=1
all but not mesured flag: 5104 bytes
only mesured flag: -2128 bytes

measuring DHCP6_SERVER=1
all but not mesured flag: 4288 bytes
only mesured flag: -1792 bytes

measuring DIAGNOSTIC=1
all but not mesured flag: 10080 bytes
only mesured flag: -6872 bytes

measuring DNS_CLIENT=1
all but not mesured flag: 5056 bytes
only mesured flag: -2112 bytes

measuring ECDSA=1
all but not mesured flag: 0 bytes
only mesured flag: 0 bytes

measuring EXTERNAL_HEAP=1
all but not mesured flag: -1792 bytes
only mesured flag: 736 bytes

measuring JOINER=1
all but not mesured flag: 5664 bytes
only mesured flag: -102676 bytes

measuring LINK_RAW=1
all but not mesured flag: 800 bytes
only mesured flag: -320 bytes

measuring MAC_FILTER=1
all but not mesured flag: 4880 bytes
only mesured flag: -2208 bytes

measuring MTD_NETDIAG=1
all but not mesured flag: 0 bytes
only mesured flag: 0 bytes

measuring SERVICE=1
all but not mesured flag: 4208 bytes
only mesured flag: -2144 bytes

measuring SNTP_CLIENT=1
all but not mesured flag: 3888 bytes
only mesured flag: -1760 bytes

measuring UDP_FORWARD=1
all but not mesured flag: 96 bytes
only mesured flag: -48 bytes

measuring CHANNEL_MANAGER=1
all but not mesured flag: 5008 bytes
additionally setting CHANNEL_MONITOR
only mesured flag: -3328 bytes

measuring CHANNEL_MONITOR=1
additionally unsetting CHANNEL_MANAGER
all but not mesured flag: 6928 bytes
only mesured flag: -992 bytes

measuring CHILD_SUPERVISION=1
all but not mesured flag: 1360 bytes
only mesured flag: -784 bytes

measuring JAM_DETECTION=1
all but not mesured flag: 1264 bytes
only mesured flag: -640 bytes

measuring IP6_FRAGM=1
all but not mesured flag: 2656 bytes
only mesured flag: -1072 bytes
   
