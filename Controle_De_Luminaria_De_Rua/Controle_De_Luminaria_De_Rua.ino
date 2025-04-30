// Pino digital D2 do Arduino está conectado ao terminal de controle do relé.
const int pinoRele = 2;
// Fotorresistor está ligado à porta analógica A0 do Arduino.
const int pinoFotorresistor = A0; // A0 - LEMBRA DE MUDAR ISSO OU O CÓDIGO NÃO VAI FUNCIONAR

// FUNÇÃO QUE É EXECUTADA APENAS UMA VEZ QUANDO O ARDUINO LIGA OU CASO ACONTEÇA UM RESET
void setup() {

    // Configura o pino do relé como saída, porque vamos enviar sinal do Arduino para o relé.
    pinMode(pinoRele, OUTPUT);
    //O pino rele inicia em 0V
    digitalWrite(pinoRele, LOW);
    //Inicia a comunicação serial que pode ser vista no computador via cabo USB
    Serial.begin(9600);
    Serial.println("SE O VALOR QUE DETERMINA A LUMINOSIDADE FOR MENOR QUE 510, A LÂMPADA ACENDERÁ");
    delay(5000);
}

// FUNÇÃO QUE É EXECUTADA ENQUANTO O ARDUINO ESTIVER LIGADO
void loop() {
    
    // Lê o valor do fotorresistor que pode ser de 0 a 1023 - QUANTO MAIOR O VALOR, MAIOR A QUANTIDADE DE LUZ
    int valorFotoresistor = analogRead(pinoFotorresistor);
	
    Serial.print("VALOR QUE DETERMINA A LUMINOSIDADE:");
    Serial.println(valorFotoresistor);
    int limite = 510;

    if (valorFotoresistor < limite) {

        // Liga a lâmpada
        digitalWrite(pinoRele, HIGH);
    }
    else{
        // Apaga a lâmpada
        digitalWrite(pinoRele, LOW);
    }

    delay(500);
}