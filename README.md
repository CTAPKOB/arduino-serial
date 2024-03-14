# Arduino playground with serial

## Pre

[arduino-cli](https://github.com/arduino/arduino-cli) must be istalled in the system

Python requirements

```bash
python3 -m venv .venv
source .venv/bin/activate
pip install 
pip install -r requirements.txt
```


## Extensions

[Arduino](https://marketplace.visualstudio.com/items?itemName=vsciot-vscode.vscode-arduino)

Following params must be set according to your system see [.vscode/settings.json](.vscode/settings.json)

```json
{
  "arduino.path": "/opt/homebrew/Cellar/arduino-cli/0.35.3/bin/",
  "arduino.useArduinoCli": true,
  "arduino.commandPath": "arduino-cli"
}

```

Additionally setup (see extension readme) or [.vscode/arduino.json](.vscode/arduino.json)

Programmer = AVR ISP
Sketch File = arduino.ino
Board = Arduino Uno


[Wokwi](https://marketplace.visualstudio.com/items?itemName=Wokwi.wokwi-vscode)


## Build arduiono project

```bash
arduino-cli compile -b arduino:avr:uno --build-path ./build .
```


## Play with

Click on [diagram.json](./diagram.json) wokwi will open the project

```bash
python read.py
```

**ACHTUNG!!!!**

Be sure that simulator window is visible on screen, it works only if it visible
