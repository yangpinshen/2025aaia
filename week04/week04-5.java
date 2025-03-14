// week04-4float-x-y-if-mousePressed-mousex-mousey
void setup(){
  size(600,400);
}
float x =300, y=200;
void draw(){
  background( #C0FFEE);
  ellipse(x, y,8,8);
  if(mousePressed){
    x = (x + mouseX) / 2;
    y = (y + mouseY) / 2;
  }
}
