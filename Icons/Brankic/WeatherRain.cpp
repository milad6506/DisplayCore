#include <Brankic.h>

namespace Brankic {
  const uint8_t WeatherRain[] = {
    29, 27, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  25,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48, 111, 127, 127, 127, 123,  78,  15,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  73, 127, 127, 127, 127, 127, 127, 127, 114,  18,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  49, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,   1,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  51,  88,  84,  37, 117, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  39,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  76, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  79,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  15, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 100,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  39, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,  13,  79, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  45,   0,   0,   0,   0, 
      0,   0,  19, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  72,   0,   0,   0, 
      0,   0, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  34,   0,   0, 
      0,  22, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  81,   0,   0, 
      0,  45, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 100,   0,   0, 
      0,  39, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  93,   0,   0, 
      0,   9, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  49,   0,   0, 
      0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  82,   1,   0,   0, 
      0,   0,   0,  42,  94, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  99,  51,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  24,   0,   0,   0,   0,   0,   0,  24,   0,   0,   0,   0,   0,   0,  24,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   6, 106,   3,   0,   0,   0,   0,   6, 106,   3,   0,   0,   0,   0,   6, 106,   3,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  76, 127,  67,   0,   0,   0,   0,  76, 127,  67,   0,   0,   0,   0,  76, 127,  67,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  37, 127, 127, 127,  34,   0,   0,  37, 127, 127, 127,  34,   0,   0,  37, 127, 127, 127,  34,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  81, 127, 127, 127,  76,   0,   0,  81, 127, 127, 127,  76,   0,   0,  81, 127, 127, 127,  76,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  54, 127, 127, 127,  51,   0,   0,  54, 127, 127, 127,  51,   0,   0,  54, 127, 127, 127,  51,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   1,  57,  90,  57,   1,   0,   0,   1,  57,  90,  57,   1,   0,   0,   1,  57,  90,  57,   1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};