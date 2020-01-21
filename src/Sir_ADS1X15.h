typedef enum {
  GAIN_TWOTHIRDS = ,
  GAIN_ONE = ,
  GAIN_TWO = ,
  GAIN_FOUR = ,
  GAIN_EIGHT = ,
  GAIN_SIXTEEN = 
} gain_t;


class Adafruit_ADS1015 {
protected:
  // Instance-specific properties
  uint8_t m_i2cAddress;      ///< the I2C address
  uint8_t m_conversionDelay; ///< conversion deay
  uint8_t m_bitShift;        ///< bit shift amount
  gain_t m_gain;          ///< ADC gain

public:
  Adafruit_ADS1015();
  void init(void);

  uint16_t readADC_SingleEnded(uint8_t);
  int16_t readADC_Differential_0_1(void);
  int16_t readADC_Differential_2_3(void);
  void startComparator_SingleEnded(uint8_t, int16_t);
  int16_t getLastConversionResults();
  
  void setGain(gain_t);
  gain_t getGain(void);

};