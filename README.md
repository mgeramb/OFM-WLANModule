# OFM-WLANModule

Dies ist ein Modul zur Konfiguration der WLAN Settings über die ETS

## Features

- SSID und Passwort Konfiguration in der ETS
- KO für WLAN Verbindungsstatus

## Hardware Unterstützung

|Prozessor | Status     | Anmerkung                  |
|----------|------------|----------------------------|
|RP2040    | ungetestet |                            |
|ESP32     | Beta       |                            |

Getestete Hardware:
- Adafruit ESP32 Feather V2

## Einbindung in die Anwendung

In das Anwendungs XML muss das OFM-WLANModule aufgenommen werden:

```xml
  <op:define prefix="WLAN" ModuleType="12" 
    share="../lib/OFM-WLANModule/src/WLAN.share.xml"
    KoSingleOffset="20">
    <op:verify File="../lib/OFM-WLANModule/library.json" ModuleVersion="0" /> 
   </op:define>
```

**Hinweis:** Es wird ein KO benötigt.

In main.cpp muss das WLANModule ebenfalls hinzugefügt werden:

```
[...]
#include "WLANModule.h"
[...]

void setup()
{
    [...]
    openknx.addModule(3, openknxWLANModule);
    [...]
}
```

## Lizenz

[GNU GPL v3](LICENSE)