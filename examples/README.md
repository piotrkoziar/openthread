You can configure OpenThread for different functionality and behavior during the build process. Available configuration options are detailed at the following locations:

- Compile-time constants are listed in all the header files in /src/core/config
- Makefile build switches are listed in /examples/common-switches.mk

Use a switch to enable functionality for an example platform. For example, to build the nrf52840 example with Commissioner and Joiner support enabled:

```
make -f examples/Makefile-nrf52840 COMMISSIONER=1 JOINER=1
```

Or, to build the nRF52840 example with the Jam Detection feature enabled:

```
make -f examples/Makefile-nrf52840 JAM_DETECTION=1
```

The common-switches are described below.

| Makefile switch | Default value | Description | Additional information |
| --- | --- | --- | --- |
| BACKBONE_ROUTER | 0 | Enable backbone router functionality. | CMake switch: OT_BACKBONE_ROUTER. |
| BIG_ENDIAN | 0 | Host platform uses big-endian byte order. | CMake switch: OT_BIG_ENDIAN. |
| BORDER_AGENT | 0 | Enable border agent support. | In most cases, this switch should be enabled if you are building On-mesh Commissioner or Border Router with External Commissioning support. CMake switch: OT_BORDER_AGENT. |
| BORDER_ROUTER | 0 | Enable border router support. | This switch is usually combined with the BORDER_AGENT and UDP_FORWARD switches to build Border Router device. CMake switch: OT_BORDER_ROUTER. |
| CHANNEL_MANAGER | 0 | Enable channel manager support. | Enable this switch on devices that are supposed to request a Thread network channel change. This switch should be used only with an FTD buld. CMake switch: OT_CHANNEL_MANAGER. |
| CHANNEL_MONITOR | 0 | Enable channel monitor support. | Enable this switch on devices that are supposed to determine the cleaner channels. CMake switch: OT_CHANNEL_MONITOR. |
| COAP | 0 | Enable CoAP API support. | Enable this switch if you want to control Constrained Application Protocol communication. CMake switch: OT_COAP. |
| COAPS | 0 | Enable secure CoAP API support. | Enable this switch if you want to control Constrained Application Protocol Secure (CoAP over DTLS) communication. CMake switch: OT_COAPS. |
| COAP_OBSERVE | 0 | Enable CoAP Observe (RFC7641) API support. | CMake switch: OT_COAP_OBSERVE. |
| COMMISSIONER | 0 | Enable commissioner support. | Enable this switch on device that should be able to perform Commissioner role. CMake swtich: OT_COMMISSIONER. |
| COVERAGE | 0 | Enable the generation of code-coverage instances. |  |
| CHILD_SUPERVISION | 0 | Enable child supervision support. | Read more about the child supervision: https://openthread.io/guides/build/features/child-supervision. Enable this switch on parent or child node with custom OpenThread application that manages the supervision, checks timeout intervals and verifies connectivity between parent and child. CMake switch: OT_CHILD_SUPERVISION. |
| CLI_TRANSPORT | UART | Select transport of CLI. | You can set to UART (default) or CONSOLE. |
| CSL_RECEIVER | 0 | Enable CSL receiver. | CMake switch: OT_CSL_RECEIVER |
| DEBUG | 0 | Debug instance is built. Code optimization is disabled. |  |
| DHCP6_CLIENT | 0 | Enable DHCP6 client support. | The device is able to act as typical DHCP client. Enable this switch on device that is supposed to request the DHCP server for networking parameters. CMake switch: OT_DHCP6_CLIENT |
| DHCP6_SERVER | 0 | Enable DHCP6 server support. | The device is able to act as typical DHCP server. Enable this switch on device that is supposed to provide networking parameters to devices with DHCP_CLIENT switch enabled. CMake switch: OT_DHCP6_SERVER |
| DIAGNOSTIC | 0 | Enable diagnostic support. | Enable this switch on device that is tested in the factory production stage. CMake switch: OT_DIAGNOSTIC |
| DISABLE_DOC | 0 | The documentation is not built. |  |
| DISABLE_TOOLS | 0 | Tools are not built. |  |
| DNS_CLIENT | 0 | Enable DNS client support. | Enable this switch on device that sends a DNS query for AAAA (IPv6) record. CMake switch: OT_DNS_CLIENT |
| DUA | 0 | Enable Domain Unicast Address feature for Thread 1.2. | CMake switch: OT_DUA |
| DYNAMIC_LOG_LEVEL | 0 | Dynamic log level feature is enabled. | Read more about logging: https://openthread.io/reference/group/api-logging. Enable this switch if OpenThread log level is required to be set in runtime. |
| ECDSA | 0 | Enable ECDSA support. | Enable this switch if ECDSA digital signature is used by application. CMake switch: OT_ECDSA |
| EXTERNAL_HEAP | 0 | Enable external heap support | The external heap Calloc and Free functions to be used by the OpenThread stack must be specified. Enable this switch if the platform utilizes its own heap. CMake switch: OT_EXTERNAL_HEAP |
| IP6_FRAGM | 0 | Enable ipv6 fragmentation support. | CMake switch: OT_IP6_FRAGM |
| JAM_DETECTION | 0 | Enable jam detection support. | Read more about jam detection: https://openthread.io/guides/build/features/jam-detection. Enable this switch if device requires the ability to detect signal jamming on a specific channel. CMake switch: OT_JAM_DETECTION |
| JOINER | 0 | Enable joiner support. | Read more about the joiner-api: https://openthread.io/reference/group/api-joiner. Enable this switch on device that has to be commissioned to join the network. CMake switch: OT_JOINER |
| LEGACY | 0 | Enable legacy network support. | CMake switch: OT_LEGACY |
| LINK_RAW | 0 | Enable Link Raw service. | CMake switch: OT_LINK_RAW |
| LOG_OUTPUT | PLATFORM_DEFINED | Selects if, and where the LOG output goes to. | There are several options available: NONE, DEBUG_UART, APP, PLATFORM_DEFINED (default). |
| MAC_FILTER | 0 | Enable MAC filter support. | CMake switch: OT_MAC_FILTER |
| MLE_LONG_ROUTES | 0 | Enable MLE long routes extension (experimental, breaks Thread conformance). | CMake switch: OT_MLE_LONG_ROUTES |
| MLR | 0 | Enable Multicast Listener Registration feature for Thread 1.2. | CMake switch: OT_MLR |
| MTD_NETDIAG | 0 | Enable TMF network diagnostics on MTDs. | CMake switch: OT_MTD_NETDIAG |
| MULTIPLE_INSTANCE | 0 | Enable multiple OpenThread instances. | CMake switch: OT_MULTIPLE_INSTANCE |
| PLATFORM_UDP | 0 | Enable platform UDP support. | CMake switch: OT_PLATFORM_UDP |
| REFERENCE_DEVICE | 0 | Enable Thread Test Harness reference device support. | Enable this switch on reference device during certification. CMake switch: OT_REFERENCE_DEVICE |
| SERVICE | 0 | Enable support for injecting Service entries into the Thread Network Data. | CMake switch: OT_SERVICE |
| SETTINGS_RAM | 0 | Enable volatile-only storage of settings. | CMake switch: OT_SETTINGS_RAM |
| SLAAC | 1 | Enable support for adding of auto-configured SLAAC addresses by OpenThread. | CMake switch: OT_SLAAC |
| SNTP_CLIENT | 0 | Enable SNTP Client support. | CMake switch: OT_SNTP_CLIENT |
| THREAD_VERSION | 1.1 | Enable chosen Thread version. | For example, set to 1.1 for Thread 1.1. CMake switch: OT_THREAD_VERSION |
| TIME_SYNC | 0 | Enable the time synchronization service feature. | CMake switch: OT_TIME_SYNC |
| UDP_FORWARD | 0 | Enable UDP forward support. | Enable this switch on the Border Router device (running on the NCP design) with External Commissioning support to service Thread Commissioner packets on the NCP side. |
| DISABLE_BUILTIN_MBEDTLS | 0 | Disable OpenThread's mbedTLS build. | Enable this switch if you do not want to use bultin-mbedtls as well as to manage mbedTLS internally, such as memory allocation and debug. |
| BUILTIN_MBEDTLS_MANAGEMENT | 0 | Enable builtin mbedTLS management. | Enable this switch if external mbedTLS is used but mbedTLS memory allocation and debug config should be managed internally by OpenThread. CMake switch: OT_BUILTIN_MBEDTLS_MANAGEMENT |
| DISABLE_EXECUTABLE | 0 | Do not build executables. |  |
| DEBUG_UART | 0 | Enable the "Debug Uart" platform feature. |  |
| DEBUG_UART_LOG | 0 | Enable log output to go to the debug uart. | Requires OPENTHREAD_CONFIG_ENABLE_DEBUG_UART to be enabled. |
| OTNS | 0 | Enable OTNS support. | Enable this switch if you are building OpenThread for OpenThreadNetworkSimulator. CMake switch: OT_OTNS |
| SPINEL_ENCRYPTER_LIBS | '' | Specify library files (absolute paths) implementing the NCP Spinel Encrypter. | |
| FULL_LOGS | 0 | Enable all log levels and regions. | This switch sets the log level to OT_LOG_LEVEL_DEBG and turns on all region flags. |
