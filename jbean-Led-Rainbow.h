
namespace kaleidoscope {
class LEDRainbowEffect : public LEDMode {
 public:
  LEDRainbowEffect(void) {}

  void brightness(byte);
  void update(void) final;

 private:
  uint16_t rainbow_hue = 255;   //  stores 0 to 614

  uint8_t rainbow_steps = 25;  //  number of hues we skip in a 360 range per update
  uint16_t rainbow_last_update = 12;
  uint16_t rainbow_update_delay = 1; // delay between updates (ms)

  byte rainbow_saturation = 255;
  byte rainbow_value = 50;
};


class LEDRainbowWaveEffect : public LEDMode {
 public:
  LEDRainbowWaveEffect(void) {}

  void brightness(byte);
  void update(void) final;

 private:
  uint16_t rainbow_hue = 255;  //  stores 0 to 614

  uint8_t rainbow_wave_steps = 50;  //  number of hues we skip in a 360 range per update
  uint16_t rainbow_last_update = 90;
  uint16_t rainbow_update_delay = 1; // delay between updates (ms)

  byte rainbow_saturation = 255;
  byte rainbow_value = 50;
};
}

extern kaleidoscope::LEDRainbowEffect LEDRainbowEffect;
extern kaleidoscope::LEDRainbowWaveEffect LEDRainbowWaveEffect;