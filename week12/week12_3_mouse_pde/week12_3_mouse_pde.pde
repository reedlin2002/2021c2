void setup(){//互動要有兩個程式: setup()設定,設定只做一次
  size(300,300);
  textSize(40); //文字大小,40號字
}
void draw(){//互動要有兩個程式: draw()畫,每秒會畫60次
  background(#62C6A6); //背景色
  fill(#FFFFFF); //字填充的顏色
  text("Hello",mouseX,mouseY); //秀文字,在滑鼠位置
} //你的滑鼠移動時,mouseX座標,mouseY座標 用來放字
