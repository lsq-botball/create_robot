#include <kipr/botball.h>

// rear light sensor analog(2)
// right light sensor analog(0)
// left light sensor analog(1)
// left motor (0)
// right motor(1)
// pvc claw analog (3)
// servo on metal thing (1)
// servo not on metal thing (2)
// claw motor (2)
// 2 650
// gmpc 1088
// gmpc lm -640

// red wire up

void ssp(int port, int position){
	set_servo_position(port, position);
}
int main()
{
    printf("Hello World\n");
    
    enable_servos();
    
    // starting pos
    ssp(3, 800);
    ssp(1, 600);
    ssp(2, 0);
    ssp(0, 971);
    msleep(1000);
    //wait_for_light(5);
    shut_down_in(118);
    int n;

    // move until black tape
    
    
    
    
     /*while (analog (2)<= 3600){
         motor(0, 75);
         motor(1, 75);
    }
    
     motor(0, -20);
     motor(1, -20);
     msleep(100);

 	// lower pvc arm
     int n = 800;
     while (n <= 2047){
         ssp(3, n);
         n += 20;
         msleep(5);
     }
    
     msleep(150);
    //motor(0, 0);
    //motor(1, 0);
	//msleep(400);
    
     // go back until black
     while (analog(0) <= 3700){
     motor(0, -50);
     motor(1, -50);
     }
    
     motor(0, -50);
     motor(1, -50);
     msleep(1500);                
     
     motor(0, 0);
     motor(1, 0);
    
    
     while (analog (2)<= 3600){
         motor(0, 70);
         motor(1, 70);
  	}
     ao();
    
     motor(0, -50);
    motor(1, -50);
    msleep(200);
    
    motor(0, 75);
    motor(1, 0);
    msleep(1000);
    
    //motor(0, 50);
    //motor(1, 50);
    //msleep(800);
    
    //motor(0, 75);
    //motor(1, 0);
    //msleep(250);
    
    ao();
    
    ssp(3, 800);
    msleep(400);
    
    motor(0, -50);
    motor(1, 0);
    msleep(1500);
    
    ao();
    msleep(400);
    
    motor(0, 50);
    motor(1, 50);
    msleep(600);
    
    
    motor(0, 0);
    motor(1, 50);
    msleep(3200);
    
    motor(0, 50);
    motor(1, 50);
    msleep(200);
    
    //follow the line until touched

    
    
    
    while (digital(0) == 0){
        if (analog(0) > 3100){
            motor(0, 80);
            motor(1, 100);
        }
        else {
            motor(0, 100);
            motor(1, 80);
        }
    }
    ao();
    
    motor(0, -25);
    motor(1, -25);
    msleep(250);
    
    ao();
    msleep(400);
    
	motor(0, 50);
    motor(1, -50);
    msleep(1100);
    
    ao();
    msleep(400);*/
    cmpc(0);
    while (gmpc(0) > -5000){
        if (analog(2) > 3700 && analog(2) < 3900){
            motor(0, -100);
            motor(1, -30);
        }
        else {
            motor(0, -30);
            motor(1, -100);
        }
    }
        
    while (analog(2) < 3850){
        if (analog(2) > 3500 && analog(2) < 3850){
            motor(0, -30);
            motor(1, -5);
        }
        else {
            motor(0, -5);
            motor(1, -30);
        }
    }
    ao();
    msleep(500);
    
    motor(0, 50);
    motor(1, 50);
    msleep(800);
    
    ao();
    printf("heyyyyyy");
    
     while (analog(2) < 3900){
        if (analog(2) > 3700 && analog(2) < 3900){
            motor(0, 0);
            motor(1, 0);
            break;
        }
        else {
            motor(0, -15);
            motor(1, -50);
        }
    }

    printf("hello");
    
    motor(0, 50);
    motor(1, 50);
    msleep(50);
    
    motor(0, 25);
    motor(1, -25);
    msleep(75);
    
    ao();

    enable_servos();



    int i = 0;
	n = 600;
    int j = 971;

    int done = 0;
    while(n <= 2047) {
        if (i <= 1450) {
            ssp(2, i);
            i+= 30;
        }
        
        if (i >= 800) {
         	ssp(1, n);
         	n += 10;
            
             if (n > 1500 && j <= 2047) {
              	
                 ssp(0, j);
             	 j += 35;
                 if(done == 0) {
                     motor(0, -50);
                     motor(1, -50);
                     msleep(50);
                     ao();
                     done = 1;
                 }
            }
        }
        
        msleep(15);
    }
    
    
    

    
    ao();
    msleep(500);
    
    //motor(0, 50);
    //motor(1, 50);
    //msleep(150);
    
    ao();
    
    /*motor(0, -50);
    motor(1, 50);
    msleep(50);
    
    motor(0, 50);
    motor(1, -50);
    msleep(10);
    
    motor(0, -50);
    motor(1, 50);
    msleep(50);*/
    
    
    while(j >= 900) {
        ssp(0, j);
    	j -= 10;
        msleep(15);
    }
    
    
    msleep(500);
    
    while(j <= 2047) {
        ssp(0, j);
    	j += 35;
        msleep(15);
    }
    
    msleep(500);
    
    while(j >= 900) {
        ssp(0, j);
    	j -= 10;
        msleep(15);
    }
    
    msleep(500);
    
    while(j <= 2047) {
        ssp(0, j);
    	j += 35;
        msleep(15);
    }
    
    msleep(500);
    
    while(j >= 900) {
        ssp(0, j);
    	j -= 10;
        msleep(15);
    }
    
    msleep(500);
    while(j <= 2047) {
        ssp(0, j);
    	j += 35;
        msleep(15);
    }
    
    motor(0, 100);
    motor(1, 100);
    msleep(50);
    
    ao();
    msleep(300);
    
    motor(0, -100);
    motor(1, -100);
    msleep(35);
    
    ao();
    
    msleep(500);
    
    while(j >= 900) {
        ssp(0, j);
    	j -= 10;
        msleep(15);
    }
    
    
    motor(0, 50);
    motor(1, 50);
    msleep(200);
    
    ao();
    msleep(400);
    
    while(n > 600) {
        if(n > 1800) {
         	ssp(1, n);
            n -= 12; 
        }
        
        if (i >= 0) {
            ssp(2, i);
            i-= 10;
        }
        
        if (i <= 1000) {
         	ssp(1, n);
         	n -= 12;
        }
        
        msleep(15);
    }
    
    ao();
    
    
    
    cmpc(0);
    while (gmpc(0) < 4075){
        if(analog(0) > 3700){
            motor(0, 100);
            motor(1, 5);
        } else {
         motor(0,5);
         motor(1, 100);
     }
      
  }
    //motor(0, 75);
    //motor(1, -75);
    //msleep(50);
    //printf("distance: %d", gmpc(0));
    ao();
    msleep(400);
    
    
    //while (analog(2) < 3700){
        //motor(0, 0);
        //motor(1, -50);  
    //}
    
    ao();
    msleep(400);
    
    while(digital(0) == 0) {
     	motor(0, 100);   
        motor(1, 90);
    }
    
    ao();
    msleep(400);
    
    motor(0, -50);
    motor(1, -50);
	msleep(450);
    
    motor(0, -50);
    motor(1, 50);
    msleep(1000);
    
    ao();
    msleep(400); 
    
   /* while (analog(2) >= 300){
        if (analog(2) > 3700){
            motor(0, -5);
            motor(1, -50);
        }
        else {
            motor(0, -50);
            motor(1, -5);
        }
    }*/
    
    cmpc(0);
    while (gmpc(0) > -6575){
        if(analog(2) > 3700){
            motor(0, -55);
            motor(1, -75);
        } 
        else {
         	motor(0, -75);
         	motor(1, -55);
     }
      
  }
  
    ////
   	/*while(analog(0) < 3100){
     	motor(0, 100);
        motor(1, 100);
        
    }
    
    ao();
    
    while*/
    
	cmpc(0);
    while(gmpc(0) > -2450) {
        motor(0, -70);
    	motor(1, -75);
    }
    ao();
    msleep(500);

    ssp(2, 750);
    msleep(500);

    cmpc(0);
    while(gmpc(0) < 1000) {
        motor(0, 75);
        motor(1, 75);

    }
    ao();

    msleep(500);

    cmpc(0);
    while(gmpc(0) > -640) {
        motor(0, -50);
        motor(1, 0);

    }
    ao();

    int z = 750;
    while(z > 500) {
        ssp(2, z);
        z -= 15;
        msleep(15);

    }

    msleep(500);

    z  = 971;
    while(z < 1640) {
        ssp(0, z);
        z += 5;
        msleep(15);
    }


    
    
    
    /*i = 0;
	n=600

    done = 0;
    while(n <= 2047) {
        if (i <= 1450) {
            ssp(2, i);
            i+= 30;
        }
        
        if (i >= 800) {
         	ssp(1, n);
         	n += 10;
            
             if (n > 971 && j <= 2047) {
              	
                 ssp(0, j);
             	 j += 25;
            }
        }
    
    cmpc(0);
    while (gmpc(0) > -6530){
            motor(0, -50);
            motor(1, 0);
        }*/
 
    //motor(0, 100);
    //motor(1, 100);
    
    ao();
    msleep(200);
    ao();
    
    
    
    
    
   		
    
    

    
    disable_servos();
    return 0;
}





