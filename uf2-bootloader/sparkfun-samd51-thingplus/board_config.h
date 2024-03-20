#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "SparkFun Electronics"
#define PRODUCT_NAME "SparkFun SAMD51 Thing+"
#define VOLUME_LABEL "51THINGBOOT"
#define INDEX_URL "https://www.sparkfun.com/products/14713"
#define BOARD_ID "SAMD51J20A-SparkFun-Thing-v0"

#define USB_VID 0x1B4F
#define USB_PID 0x0016

#define LED_PIN PIN_PA17

#define BOOT_USART_MODULE                 SERCOM2
#define BOOT_USART_MASK                   APBBMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBBMASK_SERCOM2
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA13C_SERCOM2_PAD1
#define BOOT_USART_PAD0                   PINMUX_PA12C_SERCOM2_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM2_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM2_GCLK_ID_SLOW

#endif
