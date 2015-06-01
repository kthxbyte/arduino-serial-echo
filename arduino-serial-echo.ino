String str = "";
void setup() {
  Serial.begin( 57600 );
}

/* Don't forget to:
 * - Set Newline as line ending in serial monitor.
 * 
 */
void loop() {
  char c;
  while( Serial.available() ){
    c = Serial.read();   
    str.concat( c );
  }
  
  if( c == '\n' ){
    Serial.println( str );
    str = "";
  }
}
