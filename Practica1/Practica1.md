# PRACTICA 1: BLINK
El objetivo de la practica es producir el parpadeo periodico de un led. Se utilizara la salida serie para depurar el programa.


## MATERIAL
- Un led
- Cables
- Microcontrolador ESP32

## EXPLICACIÓN DEL CÓDIGO

Para esta práctica sólo necesitaremos la librería de Arduino:
```cpp 
#include <Arduino.h>
```
A continuación es necesario definir a qué pin conectaremos el led:
```cpp
#define led 13
```
<div align="justify">
En el setup sólo tenemos dos instrucciones. La primera sirve para iniciar la comunicación serie entre el ordenador y el ESP32, con una velocidad de 115200 bits por segundos.
Mientras que la segunda es para inicializar el led.
<div>

```cpp
void setup() {
  Serial.begin(115200);
  pinMode(led,OUTPUT);
}
```
En el loop queremos un bucle donde se encienda y apague el led. Por tanto escribimos la instrucción de encender y la de apagar el led con un delay después de cada una. También iremos escribiendo por pantalla el estado del led.
```cpp
void loop() {
  digitalWrite(led,HIGH);
  Serial.println("ON");
  delay(500);
  digitalWrite(led,LOW);
  Serial.println("OFF");
  delay(500);
}
 ``` 
El programa tarda 8,14 segundos en ser compilado y empezar a ejecutarse.

 ## DIAGRAMA DE TIEMPO 
 Los delay son de 1 segundo, por lo que el led está un segundo abierto y un segundo apagado.

```wavedrom
{ signal : [
  {name: "led", wave: "10101010"},
  {name: "estado", wave: "34343434", data: "ON OFF ON OFF ON OFF ON OFF"},
]}
```

 ## DIAGRAMA DE FLUJO

 <div class="mermaid" >
flowchart TD;
     A[LED ON] --> B[Msg LED ON]
     B[Msg LED ON] --> C[Wait 500 ms]
     C[wait 500 ms] --> D[LED OFF]
     D[LED OFF] --> E[Msg LED OFF]
     E[Msg LED OFF] --> F[Wait 500 ms]
     F[Wait 500 ms] --> A[LED ON]
</div>

 

