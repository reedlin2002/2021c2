void setup()
{
  size(300,300);
}
int x=100, y=150; //座標
void draw()
{
  background(#62C6A6);
  ellipse(x, y, 30, 30);
}
void keyPressed()//按鍵
{
  if( key=='w' ) y -= 2;
  if( key=='s' ) y += 2;
  if( key=='a' ) x -= 2;
  if( key=='d' ) x += 2;
}
