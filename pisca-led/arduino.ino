// Primeiro arduino com LED

// Bibliotecas, variáveis e funções;
int LED = 2;

void setup() 
{
 // Configurações do código;
 // OUTPUT - envia a infomação da porta para os componentes;
 // INPUT - recebe a informação dos compenententes para o arduino;

    pinMode(LED, OUTPUT);
}

void loop() {   
    // Ciclo do programa;
    digitalWrite(LED, HIGH); // Ligado
    delay(500);
    digitalWrite(LED, LOW); // Desligado
    delay(500);
}