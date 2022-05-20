//Week13_6_gundam_correct step03-2
PShape gundam;
void setup()
{
    size(500,500,P3D);
    gundam = loadShape ("Gundam.obj");
}
void draw()
{
    background(#62C6A6);
    translate( 250, 450);
    scale(15, -15, 15);
    rotateY( radians(frameCount));
    shape(gundam);
}
