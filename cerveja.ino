#include "DHT.h"
#define dht_type DHT11  //define qual o tipo de sensor DHTxx que se está
/**
* Configurações iniciais sobre os sensores
* DHT11, LM35, LDR5 e TCRT5000
*/
int dht_pin = A2;
DHT dht_1 = DHT(dht_pin, dht_type);  //pode-se configurar diversos
int lm35_pin = A1, leitura_lm35 = 0;
float temperatura;


float maceracao;

float malteacao1;
float malteacao2;
float malteacao3;

float moagem;

float brassagem1;
float brassagem2;
float brassagem3;


float fervura;

float resfriamento1;
float resfriamento2;
float resfriamento3;

float fermentacao;

float maturacao;


float pasteurizacao;

float servir;

int ldr_pin = A5, leitura_ldr = 0;
int switch_pin = 7;
void setup() {
  Serial.begin(9600);
  dht_1.begin();
  pinMode(switch_pin, INPUT);
}
void loop() {

  /**
* Bloco do LM35
*/
  leitura_lm35 = analogRead(lm35_pin);
  temperatura = leitura_lm35 * (5.0 / 1023) * 100;


  maceracao = (0.16* temperatura)+9.58;

  malteacao1 = (0.11*temperatura)+46.29;
  malteacao2 = (0.27*temperatura)+65.9;
  malteacao3 =(0.80*temperatura)+63;

  moagem = (0.53*temperatura)+53.97;

  brassagem1 = (0.27*temperatura)+30.9;
  brassagem2 = (0.80*temperatura)+42.88;
  brassagem3 = (0.27*temperatura)+57.9;

  fervura = (0.1*temperatura)+98.48;

  resfriamento1 = (0.27*temperatura)+2.91;
  resfriamento2 = (0.27*temperatura)+7.91;
  resfriamento3 = (0.1*temperatura)+2.48;

  maturacao = (0.1*temperatura)+0.48;
  pasteurizacao = (0.53*temperatura)+51.98;
  servir = (0.27*temperatura)-2.09;

  Serial.print(temperatura);
  Serial.print(";");
  Serial.print(maceracao);
  Serial.print(";");
  Serial.print(malteacao1);
  Serial.print(";");
  Serial.print(malteacao2);
  Serial.print(";");
  Serial.print(malteacao3);
  Serial.print(";");
  Serial.print(moagem);
  Serial.print(";");
  Serial.print(brassagem1);
  Serial.print(";");
  Serial.print(brassagem2);
  Serial.print(";");
  Serial.print(brassagem3);
  Serial.print(";");
  Serial.print(fervura);
  Serial.print(";");

  Serial.print(resfriamento1);
  Serial.print(";");
  Serial.print(resfriamento2);
  Serial.print(";");
  Serial.print(resfriamento3);
  Serial.print(";");
  Serial.print(maturacao);
  Serial.print(";");
  Serial.print(pasteurizacao);
  Serial.print(";");
  Serial.println(servir);


  delay(2000);
}
