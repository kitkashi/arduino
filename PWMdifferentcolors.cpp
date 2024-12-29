// C++ code
//
int brightness=0;
int red=11;
  int green=10;
  int blue=9;

void setup()
{
  pinMode(11, OUTPUT);//red
  pinMode(10, OUTPUT);//green
  pinMode(9, OUTPUT);//blue
  
}

void loop()
{
  for (brightness=0;brightness<=255;brightness+=51){
   analogWrite(red,brightness);
    delay(100);
  }
  for (brightness=255;brightness>=0;brightness-=51){
    analogWrite (red,brightness);
    delay (100);
  }
  //blue
    for (brightness=0;brightness<=255;brightness+=51){
   analogWrite(blue,brightness);
    delay(100);
  }
    for (brightness=255;brightness>=0;brightness-=51){
    analogWrite (blue,brightness);
    delay (100);
  }
  //goes up to purple
  for (brightness=0;brightness<=255;brightness+=51) {
   analogWrite(red,brightness);
   analogWrite(blue,brightness);
    delay(200);
  }
  //dims purple
  for (brightness=255;brightness>=0;brightness-=51){
       analogWrite (red,brightness);
       analogWrite(blue,brightness);
    delay (200);
  }
  //red
   for (brightness=0;brightness<=255;brightness+=51){
   analogWrite(red,brightness);
    delay(100);
  }
    for (brightness=255;brightness>=0;brightness-=51)
  {
       analogWrite (red,brightness);
    delay (100);
  }
  //green
   for (brightness=0;brightness<=255;brightness+=51){
   analogWrite(green,brightness);
    delay(100);
  }
    for (brightness=255;brightness>=0;brightness-=51)
  {
       analogWrite (green,brightness);
    delay (100);
  }
  //brightens to yellow 
    for (brightness=0;brightness<=255;brightness+=51)
  {
   analogWrite(red,brightness);
   analogWrite(green,brightness);
    delay(200);

  }
    for (brightness=255;brightness>=0;brightness-=51)
  {
       analogWrite (red,brightness);
       analogWrite(green,brightness);
    delay (200);
  }
  //white
   for (brightness=0;brightness<=255;brightness+=51)
  {
   analogWrite(red,brightness);
   analogWrite(green,brightness);
   analogWrite(blue,brightness);
    delay(200);
  }
    for (brightness=255;brightness>=0;brightness-=51)
  {
	analogWrite(red,brightness);
   analogWrite(green,brightness);
   analogWrite(blue,brightness);    
   delay (200);
  }
  //cyan
      for (brightness=0;brightness<=255;brightness+=51)
  {
   analogWrite(blue,brightness);
   analogWrite(green,brightness);
    delay(200);

  }
    for (brightness=255;brightness>=0;brightness-=51)
  {
       analogWrite (blue,brightness);
       analogWrite(green,brightness);
    delay (200);
    }
}