// DETECTOR DE MOVIMENTO

const int PIR = 2;
const int LED = 4;

void setup(){

    pinMode(PIR, INPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop() {

    int valor = digitalRead(PIR); // ESSA FUNÇÃO DIGITALREAD DEVOLVE 1 OU 0 SENDO 1 QUANDO TEM MOVIMENTO E 0 QUANDO NÃO TEM

    if (valor == 1) {

        Serial.println("Movimento");
        digitalWrite(LED, 1); // ESSA FUNÇÃO DIGITALWRITE ENVIA UM SINAL DIGITAL 1 OU 0 PARA O DISPOSITIVO QUE QUEREMOS MANIPULAR SENDO 1 PARA ELE FAZER ALGUMA COISA E 0 PARA NÃO FAZER NADA KKKKKKK (RESUMINDO)
    }
    else{
      
        Serial.println("Sem movimento");
        digitalWrite(LED, 0);
    }

    delay(1000);
}