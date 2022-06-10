void setup()//設定
{
  size(300,300);
}
String line= "";
void draw()//畫圖60次/秒
{
  background(#62C6A6);
  fill(0);
  textSize(50);
  text(line, 20, 50);
}
void keyPressed()//按鍵
{
  line = "key:" + key;
}
