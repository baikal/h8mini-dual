


// RGB led type ws2812 - ws2813
// numbers over 8 could decrease performance

#define RGB_LED_NUMBER 0
// pin / port for the RGB led ( programming port ok )
#define RGB_PIN GPIO_PIN_13 // SWDAT
#define RGB_PORT GPIOA


#define FPV_PIN GPIO_PIN_14 // SWCLK
#define FPV_PIN_PORT GPIOA


//#define BUZZER_PIN       GPIO_PIN_13 // SWDAT
#define BUZZER_PIN       GPIO_PIN_14 // SWCLK
#define BUZZER_PIN_PORT  GPIOA
#define BUZZER_DELAY     5e6 // 5 seconds after loss of tx or low bat before buzzer starts



//*** DO NOT ENABLE ESC DRIVER WITH BRUSHED MOTORS CONNECTED ***
// output driver type , esc settings in drv_esc.c file

#define USE_PWM_DRIVER
//#define USE_ESC_DRIVER
//#define USE_DSHOT_DRIVER

// settings in file drv_servo.c
//#define SERVO_DRIVER

// enable serial out on back-left LED
//#define SERIAL


// pwm pin initialization
// enable the pwm pins to be used here ( multiple pins ok)
//#define PWM_PA0
//#define PWM_PA1
//#define PWM_PA2
//#define PWM_PA3
//#define PWM_PA4
//#define PWM_PA5
//#define PWM_PA6
//#define PWM_PA7
#define PWM_PA8
#define PWM_PA9
#define PWM_PA10
//#define PWM_PA11
//#define PWM_PB0
#define PWM_PB1

// Assingment of pin to motor
// Assign one pin to one motor
#define PA9_MOTOR_ID MOTOR_BL // bl
#define PA8_MOTOR_ID MOTOR_FL
#define PA10_MOTOR_ID MOTOR_FR
#define PB1_MOTOR_ID MOTOR_BR // br
