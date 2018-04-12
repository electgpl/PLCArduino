/* Copyright 2018, Sebastian Caccavallo
 *
 * Todos los derechos reservados.
 *
 * Este archivo es parte de la biblioteca PLC 344 rev.1.0 para Arduino.
 *
 * Redistribución y uso en formas fuente y binarias, con o sin modificación,
 * están permitidos siempre que se cumplan las siguientes condiciones:
 *
 * 1. Las redistribuciones del código fuente deben conservar el aviso de copyright 
 * anterior, esta lista de condiciones y el siguiente descargo de responsabilidad.
 *
 * 2. Las redistribuciones en formato binario deben reproducir el aviso de copyright 
 * anterior, esta lista de condiciones y la siguiente exención de responsabilidad en 
 * la documentación y / u otros materiales proporcionados con la distribución.
 *
 * 3. Ni el nombre del titular de los derechos de autor ni los nombres de sus
 * los contribuyentes pueden ser utilizados para respaldar o promocionar productos 
 * derivados de este software sin permiso escrito previo específico.
 *
 * ESTE SOFTWARE ES PROPORCIONADO POR LOS TITULARES DE LOS DERECHOS DE AUTOR Y LOS 
 * COLABORADORES "TAL CUAL" Y CUALQUIER GARANTÍA EXPRESA O IMPLÍCITA, INCLUIDAS, ENTRE OTRAS, 
 * LAS GARANTÍAS IMPLÍCITAS DE COMERCIABILIDAD E IDONEIDAD PARA UN PROPÓSITO EN PARTICULAR
 * SON RECHAZADOS. EN NINGÚN CASO SERÁ EL TITULAR DEL COPYRIGHT O LOS COLABORADORES
 * RESPONSABLE POR CUALQUIER DIRECTO, INDIRECTO, INCIDENTAL, ESPECIAL, EJEMPLAR O
 * DAÑOS CONSECUENTES (INCLUIDOS, ENTRE OTROS, LA ADQUISICIÓN DE
 * SUSTITUIR BIENES O SERVICIOS; PÉRDIDA DE USO, DATOS O GANANCIAS; O NEGOCIO
 * INTERRUPCIÓN) SIN EMBARGO Y EN CUALQUIER TEORÍA DE RESPONSABILIDAD, YA SEA EN
 * CONTRATO, RESPONSABILIDAD ESTRICTA O AGRAVIO (INCLUYENDO NEGLIGENCIA O DE OTRO TIPO)
 * QUE SURGE DE ALGUNA MANERA DEL USO DE ESTE SOFTWARE, AUN SI SE ACONSEJA
 * POSIBILIDAD DE DICHO DAÑO.
 *
 * Date: 2018-04-10 */

/*==================[inclusions]=============================================*/
#include <Arduino.h>
#include "PLC.h"
/*==================[macros and definitions]=================================*/
/*==================[Data declaration]=======================================*/
/*==================[functions declaration]==================================*/
/*==================[Data definition]========================================*/
/*==================[Functions definition]===================================*/
/*
 * @brief:  Configuracion de GPIOs
 * @param:  none
 * @return: none
*/
void PLC_Setup(void) {
   pinMode(Out1, OUTPUT);
   pinMode(Out2, OUTPUT);
   pinMode(Out3, OUTPUT);
   pinMode(Out4, OUTPUT);
   pinMode(Stat, OUTPUT);
   pinMode(In1, INPUT);
   pinMode(In2, INPUT);
   pinMode(In3, INPUT);
   pinMode(In4, INPUT);
}

/**
 * @brief Lectura RAW del ADC para un canal determinado
 * 
 * @param input Entrada analogica a leer
 * @return float Valor del ADC compensado
 */
int PLC_ReadAnalogInputRaw(PLCAnalogInput_t input) {
  int varAnalog = analogRead(input)*1.6;
  delay(10);
  return varAnalog;
}

/**
 * @brief Lectura de Tension en Volt del ADC para un canal determinado
 * 
 * @param input Entrada analogica a leer
 * @return float Valor del ADC compensado
 */
float PLC_ReadAnalogInputVolt(PLCAnalogInput_t input) {
  float varAnalog = (analogRead(input)*5/1023.0)*3.2;
  delay(10);
  return varAnalog;
}

/**
 * @brief Lectura de entrada digital
 * 
 * @param input Numero de entrada digital
 * @return Valor de entrada
 */
bool PLC_ReadContact(PLCDigitalInput_t input) {
  return digitalRead(input);
}

/**
 * @brief Escritura de una salida digital determinada
 * 
 * @param output Numero de salida digital
 * @param value Valor a escribir
 */
void PLC_WriteRelay(PLCDigitalOutput_t output, bool value) {
  digitalWrite(output, value);
}

