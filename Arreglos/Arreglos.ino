int Matriz [10];  //se crea una matriz con 10 espacios
int a;  //creamos el contador A y B
int b;
int val;  // variable que usaremos después
void setup() {
  Serial.begin(9600);

}

void loop() {
  /*En el primer for lo que hacemos es mostrar que información esta guardado
   * en cada uno de los espacios de la matriz que se creó, pueden ser ceros
   * puede marcarnos null,  puede incluso marcarnos un error ya que no tenemos 
   * nada en ellos y no los hemos "inicializado", es decir no les hemos dado un valor
   * inicial
   */
  for (a;a<10;a++){
    Serial.println(Matriz[a]);
    delay (1000);
  }

  /*Ahora lo que haremos en este for, usando un contador distinto es cambiar los
   * valores que tenemos en nuestra matriz, les daremos un valor inicial, en este
   * caso les asignare un valor de la tabla de 2 apoyandome de la variable llamada
   * val
   * EJ: 2, 4, 6, 8, etc.. 
   */

   for(b;b<10;b++){
    val = 2*b;
    Matriz[b] = val;  // asiganmos el valor de val en la posición b  (del 0 al 9)
    delay (15) //un pequeño delay para no saturar la memoria
   }

   // la matriz ahora esta llena, asi que resetamos nuestro contador inicial
   a=0;
   //y repetimos el primer for para ver ahora que los valores en la matriz

   for (a;a<10;a++){
    Serial.println(Matriz[a]);
    delay (1000);
  }
   
}
