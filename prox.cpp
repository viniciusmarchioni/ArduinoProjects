float cm,duracao; // comprimento da onda
byte pinoTransmissor=5; // trig
byte pinoReceptor=3; //echo

void setup() // Executa uma vez
{
  Serial.begin(9600);
  pinMode(pinoTransmissor, OUTPUT); // transmissor
  pinMode(pinoReceptor, INPUT);     // receptor
  pinMode(10, OUTPUT);	//PIEZO
}

void loop() //executa varias vezes
{
  
  cm =  distancia(); //Lendo a distância
  delay(50);
  Serial.println(cm);
  
if ((cm < 50) && (cm > 0)){ //Menor que 50cm.
    delay(50);
    analogWrite(10, 255);//PIEZO
    delay(50);
  	analogWrite(6, 0);
    analogWrite(10, 0);
  }
  
    else if ((cm < 100) && (cm > 0)){ //menor que 100cm.
    delay(150);
    analogWrite(10, 255);//PIEZO
    delay(150);
  	analogWrite(6, 0);
    analogWrite(10, 0);
  }
  
  else if ((cm < 200) && (cm > 0)){ //menor que 200cm.
    delay(300);
    analogWrite(10, 255);//PIEZO
    delay(300);
  	analogWrite(6, 0);
    analogWrite(10, 0);
  }
  
  else if ((cm < 330) && (cm > 0)){ //menor que 300cm.
    delay(500);
    analogWrite(10, 255);//PIEZO
    delay(500);
  	analogWrite(6, 0);
    analogWrite(10, 0);
  }
  
  delay(50);

}

float distancia()
{  
  digitalWrite(pinoTransmissor, LOW);
  delayMicroseconds(5); 
  digitalWrite(pinoTransmissor, HIGH); 
  delayMicroseconds(10);
  digitalWrite(pinoTransmissor, LOW);
  duracao = pulseIn(pinoReceptor, HIGH);
  float calcDistancia= (duracao/2) * 0.0343; 
  if (calcDistancia>=331){
}      calcDistancia=0;
  }
   
  


