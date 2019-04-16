#include <kipr/botball.h>

int main()
{
  
  //wait_for_light(3);
 // shut_down_in(120);
  enable_servos();
 //motor(2, -80);
 // msleep(300);
  //ao();
 set_servo_position(1,1250);
  msleep(3000);
  motor(3,80);// spin after zoomba
  msleep(1250);
 ao();
  motor(3,75);
  motor(1,75);//forward
  msleep(1380);
  motor(3,50);//left
  motor(1,100);  
  msleep(2250);
  motor(1,85);
  motor(3,85);//forward 
  msleep(1190);
  motor(3,90);
  motor(1,20);
  msleep(1700);//right
  motor(3,80);
  motor(1,80);//forward
  msleep(1100);
  motor(3,20);
  motor(1,100);//left 
  msleep(1200);
  
  ao();
  msleep(1000);
 
  
  motor(3,-80);
  motor(1,-80);
  msleep(950);
     
 //line following
 
  motor(1,20);
  msleep(1300);
    motor(3,-80);
  motor(1,-80);
  msleep(450);
    
  
  
  
  

  while (digital(1) == 0)
  {
    if (analog(1) < 3200) //turns left/ counter clockwise
        {
          motor (1,-80);
          motor(3,-80);
        }
        else
        {
          motor(1,-80);//turns right
          motor(3,-80);
        }
  }
  ao();
 msleep(1000);
  motor(1,80);
  motor(3,80);
  msleep(400);
  motor(1,100);
  msleep(2800);// turn claw is facing forward
 
   motor(2,50);
  msleep(150);
  ao();
  msleep(1000);
  motor(1,-80);
  motor(3,-80);//forward
  msleep(1000);
  //motor(3,80);
  //msleep(2500);// turn claw is forwards
  motor(1,-80);
  motor(3,-80);
  msleep(800);
  motor(3, -80);
  motor(1, -85);// forward to cubes and slight turn
  msleep(3500);
  motor(1,-80);
  motor(3,-80);
  msleep(800);//forward
  motor(2,-80);
  msleep(400);//claw down
  ao();
  set_servo_position(1,400);//grab cubes
  motor(1,80);
  motor(3,80);
  msleep(500);//backwards
  motor(1,-80);
  motor(3,-70);
  msleep(800);//turn slightly towards box
  motor(1,-80);
  motor(3,-20);
  msleep(400);//turn facing box
  motor(1,-80);
  motor(3,-80);
  msleep(1500);// forward
  set_servo_position(1, 1250);//let go of cube
  motor(1,80);
  motor(3,80);
  msleep(1500);// backwards
  
  
  
  
  
 
 // motor(2,-60);// start of CUBES
  //msleep( 400);
  //ao();
  //motor(1,80);
  //motor(3,10);
  //msleep(1800);// right
  //motor(1,80);
  //motor(3,80);// foward
  //msleep(3000);
  //motor(1,80);
  //motor(3,10);//left
 // msleep(1350);
 // motor(1,-60);
 // motor(3,-30);//
 // msleep(1000);
  disable_servos();
  return 0;
}