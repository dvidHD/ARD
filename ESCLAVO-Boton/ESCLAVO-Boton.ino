int led = 4;
int dato=0;  //Variable que albergara el dato que nos envíe el programa "Maestro" pormedio del bluetooth

void setup() {
  
  Serial.begin(9600);   //Inicializamos el monitor serial a 9600 baudios
  pinMode(4,OUTPUT);     //Pines digitales para la conexion de LED 
  
}

void loop(){

  if( Serial.available())   //Preguntamos si la recepcion de datos por el monitor serial esta disponible
  {
    dato = Serial.read();    //Se lee el valor recibido en el monitor serial y se le asigna el mismo a la variable "dato"
  }
    if(dato == '1')         // Si ese valor, es igual a "1"...
    {
      Serial.println(dato);    //Se imprime el dato
      digitalWrite(4,HIGH);    //se alimenta el led c
     
    } 
    if(dato == '0')
    {
      Serial.println(dato);
      digitalWrite(4,LOW);
      
    } 
}
