You can configure OpenThread for different functionality and behavior during the build process.
Available configuration options are detailed at the following locations:
 - Compile-time constants	are listed in all the header files in /src/core/config
 - Makefile build switches are listed in /examples/common-switches.mk

Use a switch to enable functionality for an example platform.
For example, to build the nrf52840 example with Commissioner and Joiner support enabled:
```
make -f examples/Makefile-nrf52840 COMMISSIONER=1 JOINER=1
```
Or, to build the nRF52840 example with the Jam Detection feature enabled:
```
make -f examples/Makefile-nrf52840 JAM_DETECTION=1
```

The common-switches are described below.

| Makefile switch | CMake switch | Description | Additional information | Size [B] |
| --- | --- | --- | --- | --- |
| BACKBONE_ROUTER | OT_BACKBONE_ROUTER | Enable backbone router functionality. | todo |
| BIG_ENDIAN | OT_BIG_ENDIAN | Host platform uses big-endian byte order. | | -1344 (text: -1344, data: 0, bss: 0) |
| BORDER_AGENT | OT_BORDER_AGENT | Enable border agent support. | In most cases, this switch should be enabled if you are building On-mesh Commissioner or Border Router with External Commissioning support.| +120512(text: +105088, data: +80, bss: +15344) |
| BORDER_ROUTER | OT_BORDER_ROUTER | Enable border router support. | This switch is usually combined with the BORDER_AGENT and UDP_FORWARD switches to build Border Router device. | +2336 (text: +2080, data: 0, bss: +256) |
| CHANNEL_MANAGER | OT_CHANNEL_MANAGER | Enable channel manager support. | Enable this switch on devices that are supposed to request a Thread network channel change. This switch should be used only with an FTD buld. | +2600  (text:  +2512 , data:  0 , bss:  +88 ) |
| CHANNEL_MONITOR | OT_CHANNEL_MONITOR | Enable channel monitor support. | Enable this switch on devices that are supposed to determine the cleaner channels. | +320  (text:  +272 , data:  0 , bss:  +48 ) |
| COAP | OT_COAP | Enable CoAP API support. | Enable this switch if you want to control Constrained Application Protocol communication. | +2464  (text:  +2256 , data:  0 , bss:  +208 ) |
| COAPS | OT_COAPS | Enable secure CoAP API support. | Enable this switch if you want to control Constrained Application Protocol Secure (CoAP over DTLS) communication. | +131188  (text:  +113644 , data:  +80 , bss:  +17464 ) (COAP switch also enabled in build.)|
| COAP_OBSERVE | OT_COAP_OBSERVE | Enable CoAP Observe (RFC7641) API support. | | -240  (text:  -240 , data:  0 , bss:  0 ) |
| COMMISSIONER | OT_COMMISSIONER | Enable commissioner support. | Enable this switch on device that should be able to perform Commissioner role. | +126256  (text:  +110720 , data:  +80 , bss:  +15456 ) |
| COVERAGE | x | Enable the generation of code-coverage instances. |  | does not fit |
| CHILD_SUPERVISION | OT_CHILD_SUPERVISION | Enable child supervision support. | Read more about the child supervision: https://openthread.io/guides/build/features/child-supervision. Enable this switch on parent or child node with custom OpenThread application that manages the supervision, checks timeout intervals and verifies connectivity between parent and child. | +136  (text:  +112 , data:  0 , bss:  +24 ) |
| CLI_TRANSPORT | Select transport of CLI. | You can set to UART (default) or CONSOLE. | -46216  (text:  -43044 , data:  -364 , bss:  -2808 ) (CONSOLE comapred to default UART.) |
| CSL_RECEIVER | OT_CSL_RECEIVER | Enable CSL receiver. | | not measured |
| DEBUG |  | Debug instance is built. Code optimization is disabled. | | +228972  (text:  +228960 , data:  0 , bss:  +12 ) |
| DHCP6_CLIENT | OT_DHCP6_CLIENT | Enable DHCP6 client support. | The device is able to act as typical DHCP client. Enable this switch on device that is supposed to request the DHCP server for networking parameters. | +1720  (text:  +1472 , data:  0 , bss:  +248 ) |
| DHCP6_SERVER | OT_DHCP6_SERVER | Enable DHCP6 server support. | The device is able to act as typical DHCP server. Enable this switch on device that is supposed to provide networking parameters to devices with DHCP_CLIENT switch enabled. | +1368  (text:  +1136 , data:  0 , bss:  +232 ) |
| DIAGNOSTIC | OT_DIAGNOSTIC | Enable diagnostic support. | Enable this switch on device that is tested in the factory production stage. | +6092  (text:  +6024 , data:  +36 , bss:  +32 ) |
| DISABLE_DOC | x | The documentation is not built. |  | -640  (text:  -640 , data:  0 , bss:  0 ) |
| DISABLE_TOOLS | x | Tools are not built. |  | -640  (text:  -640 , data:  0 , bss:  0 ) |
| DNS_CLIENT | OT_DNS_CLIENT | Enable DNS client support. | Enable this switch on device that sends a DNS query for AAAA (IPv6) record. | +1768  (text:  +1632 , data:  0 , bss:  +136 ) |
| DUA | OT_DUA | Enable Domain Unicast Address feature for Thread 1.2. | | not measured |
| DYNAMIC_LOG_LEVEL | | Dynamic log level feature is enabled. | Read more about logging: https://openthread.io/reference/group/api-logging. Enable this switch if OpenThread log level is required to be set in runtime. | -560  (text:  -560 , data:  0 , bss:  0 ) |
| ECDSA | OT_ECDSA | Enable ECDSA support. | Enable this switch if ECDSA digital signature is used by application. | -640  (text:  -640 , data:  0 , bss:  0 ) |
| EXTERNAL_HEAP | OT_EXTERNAL_HEAP | Enable external heap support | The external heap Calloc and Free functions to be used by the OpenThread stack must be specified. Enable this switch if the platform utilizes its own heap. | - | depends on provided implementation |
| IP6_FRAGM | OT_IP6_FRAGM | Enable ipv6 fragmentation support. | | +432  (text:  +416 , data:  0 , bss:  +16 ) |
| JAM_DETECTION | OT_JAM_DETECTION | Enable jam detection support. | Read more about jam detection: https://openthread.io/guides/build/features/jam-detection. Enable this switch if device requires the ability to detect signal jamming on a specific channel. | +16  (text:  -32 , data:  0 , bss:  +48 ) |
| JOINER | OT_JOINER | Enable joiner support. | Read more about the joiner-api: https://openthread.io/reference/group/api-joiner. Enable this switch on device that has to be commissioned to join the network. | +120864  (text:  +105600 , data:  +80 , bss:  +15184 ) |
| LEGACY | OT_LEGACY | Enable legacy network support. | | -640  (text:  -640 , data:  0 , bss:  0 ) |
| LINK_RAW | OT_LINK_RAW | Enable Link Raw service. | | -272  (text:  -288 , data:  0 , bss:  +16 ) |
|LOG_OUTPUT | x | Selects if, and where the LOG output goes to. | There are several options available: NONE, DEBUG_UART, APP, PLATFORM_DEFINED (default). | -1536  (text:  -880 , data:  0 , bss:  -656 ) (NONE compared to default PLATFORM_DEFINED) |
| MAC_FILTER | OT_MAC_FILTER | Enable MAC filter support. | | +1760  (text:  +1440 , data:  0 , bss:  +320 ) |
| MLE_LONG_ROUTES | OT_MLE_LONG_ROUTES | Enable MLE long routes extension (experimental, breaks Thread conformance). | | not measured |
| MLR | OT_MLR | Enable Multicast Listener Registration feature for Thread 1.2. | | not measured |
| MTD_NETDIAG | OT_MTD_NETDIAG | Enable TMF network diagnostics on MTDs. | | -640  (text:  -640 , data:  0 , bss:  0 ) |
| MULTIPLE_INSTANCE | OT_MULTIPLE_INSTANCE | Enable multiple OpenThread instances. | | not measured |
| PLATFORM_UDP | OT_PLATFORM_UDP | Enable platform UDP support. | | not measured |
| REFERENCE_DEVICE | OT_REFERENCE_DEVICE | Enable Thread Test Harness reference device support. | Enable this switch on reference device during certification. | -1240  (text:  -576 , data:  0 , bss:  -664 ) |
| SERVICE | OT_SERVICE | Enable support for injecting Service entries into the Thread Network Data. |  | +1192  (text:  +912 , data:  0 , bss:  +280 ) |
| SETTINGS_RAM | OT_SETTINGS_RAM | Enable volatile-only storage of settings. | | -640  (text:  -640 , data:  0 , bss:  0 ) |
| SLAAC | OT_SLAAC | Enable support for adding of auto-configured SLAAC addresses by OpenThread. | | -640  (text:  -640 , data:  0 , bss:  0 ) |
| SNTP_CLIENT | OT_SNTP_CLIENT | Enable SNTP Client support. | | +1456  (text:  +1376 , data:  0 , bss:  +80 ) |
| THREAD_VERSION | OT_THREAD_VERSION | Enable chosen Thread version. | For example, set to 1.1 for Thread 1.1. | - |
| TIME_SYNC | OT_TIME_SYNC | Enable the time synchronization service feature. | | +3328  (text:  +1968 , data:  0 , bss:  +1360 ) |
| UDP_FORWARD | ? | Enable UDP forward support. | Enable this switch on the Border Router device (running on the NCP design) with External Commissioning support to service Thread Commissioner packets on the NCP side. | -600  (text:  -608 , data:  0 , bss:  +8 ) |
| DISABLE_BUILTIN_MBEDTLS | | Disable OpenThread's mbedTLS build. | Enable this switch if you do not want to use bultin-mbedtls as well as to manage mbedTLS internally, such as memory allocation and debug. | - |
| BUILTIN_MBEDTLS_MANAGEMENT | OT_BUILTIN_MBEDTLS_MANAGEMENT | Enable builtin mbedTLS management. | Enable this switch if external mbedTLS is used but mbedTLS memory allocation and debug config should be managed internally by OpenThread. | - |
| DISABLE_EXECUTABLE | | Do not build executables. | | - |
| DEBUG_UART | - | Enable the "Debug Uart" platform feature. | | - |
| DEBUG_UART_LOG | - | Enable log output to go to the debug uart. | Requires OPENTHREAD_CONFIG_ENABLE_DEBUG_UART to be enabled. | - |
| OTNS | OT_OTNS | Enable OTNS support. | Enable this switch if you are building OpenThread for OpenThreadNetworkSimulator. | - |
| SPINEL_ENCRYPTER_LIBS| | Specify library files (absolute paths) implementing the NCP Spinel Encrypter. | | - |
| FULL_LOGS | | Enable all log levels and regions. | This switch sets the log level to OT_LOG_LEVEL_DEBG and turns on all region flags. | - |