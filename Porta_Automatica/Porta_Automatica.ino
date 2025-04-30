const int pinoRele = 2;
const int PIR = 3;

void setup(){
  
    pinMode(PIR, INPUT);
    pinMode(pinoRele, OUTPUT);
    Serial.begin(9600);
}

void loop(){

    int valor = digitalRead(PIR); // ESSA FUNÇÃO DIGITALREAD DEVOLVE 1 OU 0 SENDO 1 QUANDO TEM MOVIMENTO E 0 QUANDO NÃO TEM

    if (valor == 1) {

        Serial.println("Movimento");
        digitalWrite(pinoRele, 1); // ESSA FUNÇÃO DIGITALWRITE ENVIA UM SINAL DIGITAL 1 OU 0 PARA O DISPOSITIVO QUE QUEREMOS MANIPULAR SENDO 1 PARA ELE FAZER ALGUMA COISA E 0 PARA NÃO FAZER NADA KKKKKKK (RESUMINDO)
    }
    else{
      
        Serial.println("Sem movimento");
        digitalWrite(pinoRele, 0);
    }

    delay(1000);
}