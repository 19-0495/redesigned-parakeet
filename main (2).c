#include <kipr/botball.h>

int main()
{
  create_connect();
  enable_servos();
  while(1==1)
  {
    if(get_create_rbump() == 0)
    {
      create_drive_direct(100,100);

      printf("test\n");
    }
    create_stop();
    create_drive_direct(-100,-100);
    msleep(800);
    create_stop();

    set_create_total_angle(0);
    msleep(200);
    while(get_create_total_angle()>-95)
    {
      create_drive_direct(100,-100);
      msleep(20);
    create_disconnect();
    }
  }
    return 0;
    }
   