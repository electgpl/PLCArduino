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
#include "Arduino.h"
/*==================[macros and definitions]=================================*/
#define   Out1  2
#define   Out2  3
#define   Out3  4
#define   Out4  5

#define   In1   6
#define   In2   7
#define   In3   8
#define   In4   9

#define   An1   A0 
#define   An2   A1 
#define   An3   A2 

#define   Stat  13
/*==================[Data declaration]=======================================*/
typedef enum {
    ANALOG_IN_1 = A0,
    ANALOG_IN_2 = A1,
    ANALOG_IN_3 = A2
} PLCAnalogInput_t;

typedef enum {
    DIGITAL_IN_1 = 6,
    DIGITAL_IN_2 = 7,
    DIGITAL_IN_3 = 8,
    DIGITAL_IN_4 = 9
} PLCDigitalInput_t;

typedef enum {
    DIGITAL_OUT_1 = 2,
    DIGITAL_OUT_2 = 3,
    DIGITAL_OUT_3 = 4,
    DIGITAL_OUT_4 = 5
} PLCDigitalOutput_t;
/*==================[functions declaration]==================================*/
void PLC_Setup(void);

int PLC_ReadAnalogInputRaw(PLCAnalogInput_t input);

float PLC_ReadAnalogInputVolt(PLCAnalogInput_t input);

bool PLC_ReadContact(PLCDigitalInput_t input);

void PLC_WriteRelay(PLCDigitalOutput_t output, bool value);
/*==================[Data definition]========================================*/
/*==================[Functions definition]===================================*/
