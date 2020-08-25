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
| BIG_ENDIAN | OT_BIG_ENDIAN | Host platform uses big-endian byte order. | | - |
| BORDER_AGENT | OT_BORDER_AGENT | Enable border agent support. | In most cases, this switch should be enabled if you are building On-mesh Commissioner or Border Router with External Commissioning support.| 121152(4400) |
| BORDER_ROUTER | OT_BORDER_ROUTER | Enable border router support. | This switch is usually combined with the BORDER_AGENT and UDP_FORWARD switches to build Border Router device. | 2976(2496) |
| CHANNEL_MANAGER | OT_CHANNEL_MANAGER | Enable channel manager support. | Enable this switch on devices that are supposed to request a Thread network channel change. This switch should be used only with an FTD buld. | 3240(4392) |
| CHANNEL_MONITOR | OT_CHANNEL_MONITOR | Enable channel monitor support. | Enable this switch on devices that are supposed to determine the cleaner channels. | 960(5832) |
| COAP | OT_COAP | Enable CoAP API support. | Enable this switch if you want to control Constrained Application Protocol communication. | 3104(13996) |
| COAPS | OT_COAPS | Enable secure CoAP API support. | Enable this switch if you want to control Constrained Application Protocol Secure (CoAP over DTLS) communication. | 131828(11164)|
| COAP_OBSERVE | OT_COAP_OBSERVE | Enable CoAP Observe (RFC7641) API support. | | - |
| COMMISSIONER | OT_COMMISSIONER | Enable commissioner support. | Enable this switch on device that should be able to perform Commissioner role. | 126896(10904) |
| COVERAGE | x | Enable the generation of code-coverage instances. | - |
| CHILD_SUPERVISION | OT_CHILD_SUPERVISION | Enable child supervision support. | Read more about the child supervision: https://openthread.io/guides/build/features/child-supervision. Enable this switch on parent or child node with custom OpenThread application that manages the supervision, checks timeout intervals and verifies connectivity between parent and child. | 776(1056) |
| CLI_TRANSPORT | Select transport of CLI. | You can set to UART (default) or CONSOLE. | - |
| CSL_RECEIVER | OT_CSL_RECEIVER | Enable CSL receiver. | | - |
| DEBUG |  | Debug instance is built. Code optimization is disabled. | | - |
| DHCP6_CLIENT | OT_DHCP6_CLIENT | Enable DHCP6 client support. | The device is able to act as typical DHCP client. Enable this switch on device that is supposed to request the DHCP server for networking parameters. | 2360(2536) |
| DHCP6_SERVER | OT_DHCP6_SERVER | Enable DHCP6 server support. | The device is able to act as typical DHCP server. Enable this switch on device that is supposed to provide networking parameters to devices with DHCP_CLIENT switch enabled. | 2008(2200) |
| DIAGNOSTIC | OT_DIAGNOSTIC | Enable diagnostic support. | Enable this switch on device that is tested in the factory production stage. | 6732(6180) |
| DISABLE_DOC | x | The documentation is not built. |  | - |
| DISABLE_TOOLS | x | Tools are not built. |  | - |
| DNS_CLIENT | OT_DNS_CLIENT | Enable DNS client support. | Enable this switch on device that sends a DNS query for AAAA (IPv6) record. | 2408(2192) |
| DUA | OT_DUA | Enable Domain Unicast Address feature for Thread 1.2. | | - |
| DYNAMIC_LOG_LEVEL | | Dynamic log level feature is enabled. | Read more about logging: https://openthread.io/reference/group/api-logging. Enable this switch if OpenThread log level is required to be set in runtime. | - |
| ECDSA | OT_ECDSA | Enable ECDSA support. | Enable this switch if ECDSA digital signature is used by application. | 0(0) |
| EXTERNAL_HEAP | OT_EXTERNAL_HEAP | Enable external heap support | The external heap Calloc and Free functions to be used by the OpenThread stack must be specified. Enable this switch if the platform utilizes its own heap. | - |
| IP6_FRAGM | OT_IP6_FRAGM | Enable ipv6 fragmentation support. | | - |
| JAM_DETECTION | OT_JAM_DETECTION | Enable jam detection support. | Read more about jam detection: https://openthread.io/guides/build/features/jam-detection. Enable this switch if device requires the ability to detect signal jamming on a specific channel. | 656(784) |
| JOINER | OT_JOINER | Enable joiner support. | Read more about the joiner-api: https://openthread.io/reference/group/api-joiner. Enable this switch on device that has to be commissioned to join the network. | 121504(4120) |
| LEGACY | OT_LEGACY | Enable legacy network support. | | - |
| LINK_RAW | OT_LINK_RAW | Enable Link Raw service. | | 368(600) |
|LOG_OUTPUT | x | Selects if, and where the LOG output goes to. | There are several options available: NONE, DEBUG_UART, APP, PLATFORM_DEFINED (default). | - |
| MAC_FILTER | OT_MAC_FILTER | Enable MAC filter support. | | 2400(2432) |
| MLE_LONG_ROUTES | OT_MLE_LONG_ROUTES | Enable MLE long routes extension (experimental, breaks Thread conformance). | | - |
| MLR | OT_MLR | Enable Multicast Listener Registration feature for Thread 1.2. | | - |
| MTD_NETDIAG | OT_MTD_NETDIAG | Enable TMF network diagnostics on MTDs. | | 0(0) |
| MULTIPLE_INSTANCE | OT_MULTIPLE_INSTANCE | Enable multiple OpenThread instances. | | - |
| PLATFORM_UDP | OT_PLATFORM_UDP | Enable platform UDP support. | | - |
| REFERENCE_DEVICE | OT_REFERENCE_DEVICE | Enable Thread Test Harness reference device support. | Enable this switch on reference device during certification. | - |
| SERVICE | OT_SERVICE | Enable support for injecting Service entries into the Thread Network Data. |  | 1832(1336) |
| SETTINGS_RAM | OT_SETTINGS_RAM | Enable volatile-only storage of settings. | | - |
| SLAAC | OT_SLAAC | Enable support for adding of auto-configured SLAAC addresses by OpenThread. | | 0(0) |
| SNTP_CLIENT | OT_SNTP_CLIENT | Enable SNTP Client support. | | 2096(1960) |
| THREAD_VERSION | OT_THREAD_VERSION | Enable chosen Thread version. | For example, set to 1.1 for Thread 1.1. | - |
| TIME_SYNC | OT_TIME_SYNC | Enable the time synchronization service feature. | | 3968(4944) |
| UDP_FORWARD | ? | Enable UDP forward support. | Enable this switch on the Border Router device (running on the NCP design) with External Commissioning support to service Thread Commissioner packets on the NCP side. | 40(40) |
| DISABLE_BUILTIN_MBEDTLS | | Disable OpenThread's mbedTLS build. | Enable this switch if you do not want to use bultin-mbedtls as well as to manage mbedTLS internally, such as memory allocation and debug. | - |
| BUILTIN_MBEDTLS_MANAGEMENT | OT_BUILTIN_MBEDTLS_MANAGEMENT | Enable builtin mbedTLS management. | Enable this switch if external mbedTLS is used but mbedTLS memory allocation and debug config should be managed internally by OpenThread. | - |
| DISABLE_EXECUTABLE | | Do not build executables. | | - |
| DEBUG_UART | - | Enable the "Debug Uart" platform feature. | | - |
| DEBUG_UART_LOG | - | Enable log output to go to the debug uart. | Requires OPENTHREAD_CONFIG_ENABLE_DEBUG_UART to be enabled. | - |
| OTNS | OT_OTNS | Enable OTNS support. | Enable this switch if you are building OpenThread for OpenThreadNetworkSimulator. | - |
| SPINEL_ENCRYPTER_LIBS| | Specify library files (absolute paths) implementing the NCP Spinel Encrypter. | | - |
| FULL_LOGS | | Enable all log levels and regions. | This switch sets the log level to OT_LOG_LEVEL_DEBG and turns on all region flags. | - |