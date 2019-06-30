int dato=0;  //Variable que albergara el dato que nos envíe el programa "Maestro" pormedio del bluetooth
int led = 4;

void setup() {

  Serial.begin(9600);   //Inicializamos el monitor serial a 9600 baudios
  pinMode(led,OUTPUT);     //Pines digitales para la conexion de LED 
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}




void loop(){

  if( Serial.available())   //Preguntamos si la recepcion de datos por el monitor serial esta disponible
  {
    dato = Serial.read();    //Se lee el valor recibido en el monitor serial y se le asigna el mismo a la variable "dato"
  }
    if(dato == '1')         // Si ese valor, es igual a "1"...
    {
      Serial.println(dato);    //Se imprime el dato
      digitalWrite(4,HIGH);    //se alimenta el led colocado a la izquierda de la conexion que indica el giro a la izquierda
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
     
    } 
    if(dato == '2')
    {
      Serial.println(dato);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      
    } 
    if(dato == '3')
    {
      Serial.println(dato);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      
    } 
    if(dato == '4')
    {
      Serial.println(dato);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
     
    } 
    if(dato == '5')
    {
      Serial.println(dato);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      
    } 
                                               
}

