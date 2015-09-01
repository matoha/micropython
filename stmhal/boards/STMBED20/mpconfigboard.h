//// ADded AM
#define MSTAT01
//// PYBV10 must be defined for some features to work
//// ADded AM
#define PYBV10


#define MICROPY_HW_BOARD_NAME       "STMBED20"
#define MICROPY_HW_MCU_NAME         "STM32F405RG"
#define MICROPY_PY_SYS_PLATFORM     "pyboard"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_SDCARD       (1)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (0)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_SPI1      (1)
#define MICROPY_HW_ENABLE_SPI2      (1)
#define MICROPY_HW_ENABLE_SPI3      (0)
#define MICROPY_HW_ENABLE_CAN       (0)

// HSE is 8MHz
#define MICROPY_HW_CLK_PLLM (8)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)

// The pyboard has a 32kHz crystal for the RTC
#define MICROPY_HW_RTC_USE_LSE      (1)

// UART config
#define MICROPY_HW_UART1_NAME "U1"
#define MICROPY_HW_UART1_PORT (GPIOB)
#define MICROPY_HW_UART1_PINS (GPIO_PIN_6 | GPIO_PIN_7)
#define MICROPY_HW_UART2_PORT (GPIOA)
#define MICROPY_HW_UART2_PINS (GPIO_PIN_2 | GPIO_PIN_3)
#define MICROPY_HW_UART2_RTS  (GPIO_PIN_1)
#define MICROPY_HW_UART2_CTS  (GPIO_PIN_0)
#define MICROPY_HW_UART3_NAME "U3"
#define MICROPY_HW_UART3_PORT (GPIOB)
#define MICROPY_HW_UART3_PINS (GPIO_PIN_10 | GPIO_PIN_11)
#define MICROPY_HW_UART3_RTS  (GPIO_PIN_14)
#define MICROPY_HW_UART3_CTS  (GPIO_PIN_13)
#define MICROPY_HW_UART4_NAME "U4"
#define MICROPY_HW_UART4_PORT (GPIOA)
#define MICROPY_HW_UART4_PINS (GPIO_PIN_0 | GPIO_PIN_1)
#define MICROPY_HW_UART6_NAME "U6"
#define MICROPY_HW_UART6_PORT (GPIOC)
#define MICROPY_HW_UART6_PINS (GPIO_PIN_6 | GPIO_PIN_7)

// I2C busses
#define MICROPY_HW_I2C1_NAME "I1"
#define MICROPY_HW_I2C1_SCL (pin_B6)
#define MICROPY_HW_I2C1_SDA (pin_B7)
#define MICROPY_HW_I2C2_NAME "I2"
#define MICROPY_HW_I2C2_SCL (pin_B10)
#define MICROPY_HW_I2C2_SDA (pin_B11)

// SPI busses
#define MICROPY_HW_SPI1_NAME "SPI1"
#define MICROPY_HW_SPI2_NAME "SPI2"

// CAN busses
#define MICROPY_HW_CAN1_NAME "CAN1" // CAN1 on RX,TX = Y3,Y4 = PB8,PB9
#define MICROPY_HW_CAN2_NAME "CAN2" // CAN2 on RX,TX = Y5,Y6 = PB12,PB13


// USRSW has no pullup or pulldown, and pressing the switch makes the input go low
#define MICROPY_HW_USRSW_PIN        (pin_A0)  /// (pin_A0) //=nustat10 //B3 = pyV10
#define MICROPY_HW_USRSW_PULL       (GPIO_NOPULL) //(GPIO_PULLDOWN) //(GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_RISING) // (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (1) // (0)

// The pyboard has 4 LEDs
// LED group 1 = Red + Green LED in one package
#define MICROPY_HW_LED1             (pin_C0) // red  // LED1 is common with LED2, if both are ON, orange light
#define MICROPY_HW_LED2             (pin_C1) // green
// LED group 2 = Red + Green LED in one package
#define MICROPY_HW_LED3             (pin_C4) // red // LED3 is common with LED4, if both are ON, orange light
#define MICROPY_HW_LED4             (pin_C5)  // green
#define MICROPY_HW_LED_OTYPE        (GPIO_MODE_OUTPUT_PP)
#define MICROPY_HW_LED_ON(pin)      (pin->gpio->BSRRH = pin->pin_mask) // BSRRL = reverse, shines when turned on 
#define MICROPY_HW_LED_OFF(pin)     (pin->gpio->BSRRL = pin->pin_mask) // BSRRH = reverse logic
#define MICROPY_HW_LED4_PWM         (1)

// SD card detect switch
#define MICROPY_HW_SDCARD_DETECT_PIN        (pin_C13)
#define MICROPY_HW_SDCARD_DETECT_PULL       (GPIO_PULLDOWN) //  was GPIO_PULLUP = SDSW on GND
#define MICROPY_HW_SDCARD_DETECT_PRESENT    (GPIO_PIN_SET) // was  GPIO_PIN_RESET=sdswitch on GND, PIN_SET=sdswitch on 3V3

// USB config
//#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
//#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)
