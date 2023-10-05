#include <LiquidCrystal_I2C.h>
#include <LiquidCrystal.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // Criando um LCD de 16x2 no endereço 0x20

int botao10 = 0, botao1 = 0; //Criando váriaveis dos botões

int var = 0; //Criando a váriavel do número que será somado

void setup()
{
  lcd.init();                 // Inicializando o LCD
  lcd.backlight();            // Ligando o BackLight do LCD
  lcd.clear();
  lcd.print("Abaco 4 Ano!"); // Exibindo no LED Hello, world!
  pinMode(8, INPUT);         //Pegando input do 8 pino
  pinMode(6, INPUT);         //Pegando input do 6 pino
}

void loop()
{
  botao10 = digitalRead(8); //ler a porta 8
  if (botao10 == HIGH) {
    var+=10;	//adiciona 10
    delay(1000); //delay para o sistema não somar diretão
    lcd.clear(); //limpa o lcd
  	lcd.print(var); // escreve no lcd
  } 
  else {
    var+=0; //caso não esteja sendo clicado  soma 0
  }
  botao1 = digitalRead(6); //ler a porta 6*/
  if (botao1 == HIGH) {
    var+=1; // adiciona um
    delay(1000);
    lcd.clear();
  	lcd.print(var);

  } 
  else {
    var+=0;
  }
  botao10 = digitalRead(2); //ler a porta 8
  if (botao10 == HIGH) {
    setup(); //volta para o zero
    delay(1000); //delay para o sistema não somar diretão
    lcd.clear(); //limpa o lcd
  	lcd.print(var); // escreve no lcd
  } 
  else {
    var+=0; //caso não esteja sendo clicado  soma 0
  }
}