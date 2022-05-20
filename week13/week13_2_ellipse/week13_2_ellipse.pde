//Step01-2 Week13_2_ellipse 改成圓圈圈
void setup(){
  size(400,300);
  textSize(40);
}
int choice = -1; //-1:沒選, 0:Choise 1,1:Choise 2,2:Choise 3
void draw(){
   background(#62C6A6); //背景色
   fill(#FFFFFF); //字填充的顏色
   if(choice==0) ellipse(25, 25,40,40); 
   if(choice==1) ellipse(25, 75,40,40);
   if(choice==2) ellipse(25,125,40,40);
   text("Choice 1",50,50);
   text("Choice 2",50,100);
   text("Choice 3",50,150);
}
void mousePressed(){
  choice = int(random(3)); //choice = (choice+1)%3;
}
