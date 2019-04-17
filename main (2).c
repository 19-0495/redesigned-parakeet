#include <kipr/botball.h>

int main()
{
    create_connect();
 // wait_for_light(0);
 shut_down_in(120);
  enable_servos();
    set_servo_position(1,1391);
    msleep(100);
    disable_servos();

  while(get_create_rbump() == 0)
  {
    
    create_drive_direct(100,100);
    msleep(20);
  }
  create_stop();
  create_drive_direct(-150,-150);
  msleep(900);
  create_stop();

  set_create_total_angle(0);
  msleep(200);
  while(get_create_total_angle()>-120)// i changed this
  {
    create_drive_direct(100,-10);
    msleep(20);
  } 
  create_stop(); 
    enable_servos();
    set_servo_position(1,1384);// changed this
    disable_servos();
   set_create_distance(0);
    //shut_down_in(5); 
    while(get_create_distance()>-10)
    {
        create_drive_direct(100,100);
    }
    create_drive_direct(-100,-100);
    create_stop();
  
  set_create_total_angle(0);
  msleep(200);
  while(get_create_total_angle()>-45)
  {
    create_drive_direct(-10,100);
    msleep(20);
  } 
  create_stop();
  create_drive_direct(-200,-200); 
  msleep(30);
  //set_create_total_angle(0);
  //create_stop();
  
  //motor(2,50);
  //msleep(300);
  // while(get_create_total_angle()>-180)
  //{
    //create_drive_direct(-10,100);
    //msleep(20);
 // } 
  
  
    create_disconnect();
    return 0;
}
