#pragma once

// Data specific to Adafruit's PiTFT 2.8 display
#ifdef ADAFRUIT_ILI9341_PITFT

// Even though the display controller protocol over the SPI bus is standard as per e.g. ILI9341 spec sheet,
// and the pins that one uses for the Pi hardware SPI are also standard;
// the choice of which Raspberry Pi GPIO pin is used for flipping the Data/Control pin of the display
// can vary. Pre-made stack-on hats such as on Adafruit's ILI9341, or predesigned schematics configurations
// such as Freeplaytech's WaveShare32B display wiring can standardize the pin to use in some configurations, but
// if you did your wiring customized directly on the GPIO pins, you will likely need to check which pin to
// configure here. This pin numberings is specified in the BCM pins namespace.

#if !defined(GPIO_TFT_DATA_CONTROL)
#define GPIO_TFT_DATA_CONTROL 25  /*!< Version 1, Pin P1-22, PiTFT 2.8 resistive Data/Control pin */
#endif

#define DISPLAY_WIDTH 320
#define DISPLAY_HEIGHT 240

#define DISPLAY_COVERED_LEFT_SIDE 0
#define DISPLAY_COVERED_TOP_SIDE 0
#define DISPLAY_COVERED_BOTTOM_SIDE 0

#define DISPLAY_DRAWABLE_WIDTH (DISPLAY_WIDTH-DISPLAY_COVERED_LEFT_SIDE)
#define DISPLAY_DRAWABLE_HEIGHT (DISPLAY_HEIGHT-DISPLAY_COVERED_TOP_SIDE-DISPLAY_COVERED_BOTTOM_SIDE)

#define InitSPIDisplay InitILI9341

#endif
