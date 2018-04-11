# PLC Arduino NANO v1 

![N|Solid](https://raw.githubusercontent.com/electgpl/PLCArduino/master/Desarrollo_V1.0/20180401_202311_01.jpg)

![N|Solid](https://raw.githubusercontent.com/electgpl/PLCArduino/master/Desarrollo_V1.0/PLCArduinoV1ser.png)

Este es un PLC de openHard diseñado en base al microcontrolador AVR linea MEGA compatible ArduinoIDE y ArduinoNANO

  - Core AVR - **ARDUINO NANO (Versión CH340)**
  - Bootloader UART Arduino Compatible
  - USB Programming firmware
  - USB Serial Terminal/Debug
  - 4 Salidas contacto seco doble inversora 12Vdc 24Vdc 220Vac
  - 4 Entradas Digitales optoacopladas 0-10V 0-12V 0-24V 
  - 3 Entradas Analógicas Aisladas de 0-10V
  - Fuente de alimentación integrada

## Lenguajes Compatibles

  - C
  - C++
  - Basic
  - Ensamblador
  - Ladder
  - y mas...
  
## Diseño y Desarrollo

> Diseñado con EAGLE, en dos capas con componentes THT para facilitar
> la integración al alumno, el desarrollo del PCB en el hogar y mantener
> el menor costo posible.

### Instalación

Todos los archivos se encuentran disponibles en este repositorio, diagramas, pcb, etc...

### Pendientes

 - Migración del hardware AVR MEGA Compatible.
 - Incorporación de nuevos puertos de comunicación CAN, 232, 485, ethernet, BT, WiFi (Requiere un PCB de mayores dimensiones, miltilayers y tecnología SMT)
 - Mejoras en inmunidad al ruido con incorporación de componentes dedicados, MOV, TVS, PLCC, EMC, BEADS CORE
 - Mejora en la performance de la fuente utilizando un DCDC Sepic o Buck/Boost
 - Aumento de canales de entrada y salida
 - Incorporación de entrada 4-20mA

License
----

MIT


**Free Software, Hell Yeah!**


