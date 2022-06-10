//week16_go 
//如何把程式放上網? (0) Processing Java寫完了
//(1) 把程式copy到 pde2js.herokuapp.com
//(2) 把轉換後的程式, copu到 Processing p5.js裡
//(3) Run他!! 
//(4) 把程式存檔! 桌面的 go 的index.html 有問題
//(5) index.html 第9行 改成go.js
//(6) 把 桌面的 go 目錄,放到GitHub 你的網頁
//  你的帳號.github.io

void setup()
{
    size(500,500);
}
int []bx=new int [100]; //棋子的座標 陣列
int []by=new int [100]; //棋子的座標 陣列
int N=0; //棋子的數字,一開始0個
void draw()
{
   background(#FFEFD5);
   for(int y=50; y<500; y+=50)
  {
    line(  0,  y,  500,  y);
  }
  for(int x=50; x<500; x+=50)
  {
   line(  x,  0,  x,  500);
  }
  for(int i=0; i<N; i++)
  {
    if(i%2==0)fill(0);
    else fill(255);
     ellipse( bx[i], by[i], 40, 40);
  }
  if(N%2==0)fill(0);
  else fill(255);
  ellipse(mouseX, mouseY, 40, 40);
}
void mousePressed()
{
  bx[N]=mouseX; by[N]=mouseY;
  N++;
}
