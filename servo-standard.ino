 #include <Servo.h> //Die Servobibliothek wird aufgerufen. Sie wird benötigt, damit die Ansteuerung des Servos vereinfacht wird.
 

Servo servo01; //Erstellt für das Programm ein Servo mit dem Namen „servo01“
bool move;

 

void setup()

{

servo01.attach(8); //Das Setup enthält die Information, dass das Servo an der Steuerleitung (gelb) mit Pin 8 verbunden wird. Hier ist natürlich auch ein anderer Pin möglich.
move = true;
Serial.begin(9600);

}

 

void loop()

{ //Im „loop“ wird über den write-Befehl „servoblau.write(Grad)“ das Servo angesteuert. Zwischen den einzelnen Positionen gibt es eine Pause, damit das Servo genug Zeit hat, die gewünschten Positionen zu erreichen.


  if (move == true)
    {
      servo01.write(150); //Position 1 ansteuern mit dem Winkel 0°
      
      delay(15000); //Das Programm stoppt für 15 Sekunden

      servo01.write(25); //Position 2 ansteuern mit dem Winkel 90°
      
      delay(120000); //Das Programm stoppt für 2 Minuten

      servo01.write(150); //Position 1 ansteuern mit dem Winkel 0°
      move = false;       
   
    }

}
