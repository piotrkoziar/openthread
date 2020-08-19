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

| Makefile switch | CMake switch | Description | Use cases |
| --- | --- | --- | --- |
| BIG_ENDIAN | OT_BIG_ENDIAN | Host platform uses big-endian byte order. | |
| BORDER_AGENT | OT_BORDER_AGENT | Enable border agent support. | In most cases, this switch should be enabled if you are building On-mesh Commissioner or Border Router with External Commissioning support.|
| BORDER_ROUTER | OT_BORDER_ROUTER | Enable border router support. | This switch is usually combined with the BORDER_AGENT and UDP_FORWARD switches to build Border Router device. |
| COAP | OT_COAP | Enable CoAP API support. | Enable this switch if you want to control Constrained Application Protocol communication. |
| COAPS | OT_COAPS | Enable secure CoAP API support. | Enable this switch if you want to control Constrained Application Protocol Secure (CoAP over DTLS) communication. |
| COMMISSIONER | OT_COMMISSIONER | Enable commissioner support. | Enable this switch on device that should be able to perform Commissioner role. |
| COVERAGE | ? | ? | ? |
| CHANNEL_MANAGER | OT_CHANNEL_MANAGER | Enable channel manager support. | Enable this switch on devices that are supposed to request a Thread network channel change. This switch should be used only with an FTD buld. |
| CHANNEL_MONITOR | OT_CHANNEL_MONITOR | Enable channel monitor support. | Enable this switch on devices that are supposed to determine the cleaner channels. |
| UDP_FORWARD | ? | Functions in udp-forward feature module are enabled. | Enable this switch on the Border Router device (running on the NCP design) with External Commissioning support to service Thread Commissioner packets on the NCP side. |
| CHILD_SUPERVISION | OT_CHILD_SUPERVISION | Enable child supervision support. | Read more about the child supervision: https://openthread.io/guides/build/features/child-supervision. Enable this switch on parent or child node with custom OpenThread application that manages the supervision, checks timeout intervals and verifies connectivity between parent and child. |
| DEBUG |  | Debug instance is built. Code optimization is disabled. | |
| DHCP6_CLIENT | OT_DHCP6_CLIENT | Enable DHCP6 client support. | The device is able to act as typical DHCP client. Enable this switch on device that is supposed to request the DHCP server for networking parameters. |
| DHCP6_SERVER | OT_DHCP6_SERVER | Enable DHCP6 server support. | The device is able to act as typical DHCP server. Enable this switch on device that is supposed to provide networking parameters to devices with DHCP_CLIENT switch enabled.
| DIAGNOSTIC | OT_DIAGNOSTIC | Enable diagnostic support. | Enable this switch on device that is tested in the factory production stage. |
| DISABLE_DOC | ? | The documentation is not built. | ? |
| DISABLE_TOOLS | ? | Tools are not built. | ? |
| DNS_CLIENT | OT_DNS_CLIENT | Enable DNS client support. | Enable this switch on device that sends a DNS query for AAAA (IPv6) record. |
| DYNAMIC_LOG_LEVEL | | Dynamic log level feature is enabled. | Read more about logging: https://openthread.io/reference/group/api-logging. Enable this switch if OpenThread log level is required to be set in runtime. |
| ECDSA | OT_ECDSA | Enable ECDSA support. | Enable this switch if ECDSA digital signature is used by application.
| EXTERNAL_HEAP | OT_EXTERNAL_HEAP | Enable external heap support | The external heap Calloc and Free functions to be used by the OpenThread stack must be specified. Enable this switch if the platform utilizes its own heap. |
| IP6_FRAGM | OT_IP6_FRAGM | Enable ipv6 fragmentation support. | |
| JAM_DETECTION | OT_JAM_DETECTION | Enable jam detection support. | Read more about jam detection: https://openthread.io/guides/build/features/jam-detection. Enable this switch if device requires the ability to detect signal jamming on a specific channel. |
| JOINER | OT_JOINER | Enable joiner support. | Read more about the joiner-api: https://openthread.io/reference/group/api-joiner. Enable this switch on device that has to be commissioned to join the network. |
| LEGACY | OT_LEGACY | Enable legacy network support. | |
| LINK_RAW | OT_LINK_RAW | | |
| MAC_FILTER | OT_MAC_FILTER | Enable mac filter support. | |
| MTD_NETDIAG | OT_MTD_NETDIAG | Enable TMF network diagnostics on MTDs | |
| PLATFORM_UDP | OT_PLATFORM_UDP | Enable platform UDP support. | |
| REFERENCE_DEVICE | OT_REFERENCE_DEVICE | Enable Thread Test Harness reference device support. | |
| SERVICE | OT_SERVICE | Enable support for injecting Service entries into the Thread Network Data. |  |
| SETTINGS_RAM | OT_SETTINGS_RAM | Enable volatile-only storage of settings. | |
| SLAAC | OT_SLAAC | Enable support for adding of auto-configured SLAAC addresses by OpenThread. | |
| SNTP_CLIENT | OT_SNTP_CLIENT | Enable SNTP Client support. | |
| TIME_SYNC | OT_TIME_SYNC | Enable the time synchronization service feature. | |
| UDP_FORWARD | OT_UDP_FORWARD | Enable UDP forward support. | |
