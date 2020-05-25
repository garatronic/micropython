#define MICROPY_HW_BOARD_NAME       "PYBSTICK26_LITE"
#define MICROPY_HW_MCU_NAME         "STM32F401CE"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)
//#define MICROPY_HW_HAS_MMA7660      (0)
//#define MICROPY_HW_HAS_LCD          (0)
//#define MICROPY_HW_ENABLE_RTC       (0)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_SERVO     (1)
//#define MICROPY_HW_ENABLE_SDCARD    (0)

// HSE is 16MHz
#define MICROPY_HW_CLK_PLLM (16)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV4)
#define MICROPY_HW_CLK_PLLQ (7)
#define MICROPY_HW_CLK_LAST_FREQ (1)

// UART config
#define MICROPY_HW_UART1_NAME   "XB"
#define MICROPY_HW_UART1_TX     (pin_B6)
#define MICROPY_HW_UART1_RX     (pin_A10)
#define MICROPY_HW_UART2_NAME   "XA"
#define MICROPY_HW_UART2_TX     (pin_A2)
#define MICROPY_HW_UART2_RX     (pin_A3)

// I2C busses
#define MICROPY_HW_I2C1_NAME "X"
#define MICROPY_HW_I2C1_SCL (pin_B8)
#define MICROPY_HW_I2C1_SDA (pin_B9)
#define MICROPY_HW_I2C2_NAME "Y"
#define MICROPY_HW_I2C2_SCL (pin_B10)
#define MICROPY_HW_I2C2_SDA (pin_B3)

// SPI busses
#define MICROPY_HW_SPI1_NAME "X"
#define MICROPY_HW_SPI1_NSS  (pin_A4) // S26
#define MICROPY_HW_SPI1_SCK  (pin_A5) // S23
#define MICROPY_HW_SPI1_MISO (pin_B4) // S21
#define MICROPY_HW_SPI1_MOSI (pin_A7) // S19

// USRSW has no pullup or pulldown, and pressing the switch makes the input go low
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// The pyboard has 4 LEDs
#define MICROPY_HW_LED1             (pin_A13) // red
#define MICROPY_HW_LED2             (pin_A14) // green
#define MICROPY_HW_LED3             (pin_B0) // yellow
#define MICROPY_HW_LED4             (pin_B1)  // blue
#define MICROPY_HW_LED3_PWM         { TIM3, 3, TIM_CHANNEL_3, GPIO_AF2_TIM3 }
#define MICROPY_HW_LED4_PWM         { TIM3, 4, TIM_CHANNEL_4, GPIO_AF2_TIM3 }
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS              (1)
