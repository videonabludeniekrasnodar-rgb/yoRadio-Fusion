#ifndef myoptions_h
#define myoptions_h

/* Конфигурация для ESP32-C3 AI Voice (Xiaozhi) */
#define L10N_LANGUAGE RU

// Дисплей OLED 0.96" SSD1306 (I2C)
#define DSP_MODEL DSP_SSD1306
#define I2C_SDA 8
#define I2C_SCL 9

// Звуковой кодек ES8311 (I2S)
#define AUDIO_CODEC ES8311
#define I2S_MCLK 0
#define I2S_BCLK 1
#define I2S_LRC 2
#define I2S_DOUT 3

// Отключаем неиспользуемое
#define VS1053_CS 255
#define SDC_CS 255
#define IR_PIN 255
#define ENC_BTNM 255

#endif
