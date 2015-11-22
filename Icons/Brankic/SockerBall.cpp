#include <Brankic.h>

namespace Brankic {
  const uint8_t SockerBall[] = {
    32, 32, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  61,  39,   9,  49,  46,  28,  76,  66,  33,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  36, 102, 127, 121, 121, 127, 127, 127, 127, 117, 127, 127, 108,  48,   1,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  12,  93, 127, 127, 124, 118, 127, 127, 127, 127, 127, 127, 118, 127, 127, 127, 103,  19,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  24, 115, 127, 127, 127, 115, 127, 127, 127, 127, 127, 127, 127, 126, 103, 102, 127, 127, 121,  31,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  22, 112,  76,  51,  31,  13, 103, 127, 127, 127, 127, 127, 127, 127, 109,   3,   0,   0,   6,  27, 111,  34,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  15, 114,  63,   0,   0,   0,   0,  30, 127, 127, 127, 127, 127, 127, 127,  30,   0,   0,   0,   0,   0,  39, 123,  25,   0,   0,   0,   0, 
      0,   0,   0,   0,  96, 106,   3,   0,   0,   0,   0,   0,  82, 127, 127, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,  79, 103,   1,   0,   0,   0, 
      0,   0,   0,  43, 126,  28,   0,   0,   0,   0,   0,   0,  34, 127, 127, 127, 127, 105,  28,   0,   0,   0,   0,   0,   0,   0,   9, 114,  52,   0,   0,   0, 
      0,   0,   0,  99,  96,   0,   0,   0,   0,   0,   0,   0,  97, 127, 127, 127, 127, 127,  97,   0,   0,   0,   0,   0,   0,   0,   0, 100, 111,   3,   0,   0, 
      0,   0,  28, 127, 126,  15,   0,   0,   0,   0,   0,  45, 127, 127, 127, 127, 127, 127, 127,  45,   0,   0,   0,   0,   0,   0,  36, 127, 127,  42,   0,   0, 
      0,   0,  67, 127, 127,  63,   0,   0,   0,   0,   6, 114, 127, 127, 127, 127, 127, 127, 127, 117,   9,   0,   0,   0,   0,   0,  94, 127, 127,  82,   0,   0, 
      0,   0,  96, 127, 127, 111,  19,  25,  25,  25,  72, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,  51,  27,  25,  25,  37, 127, 127, 127, 109,   0,   0, 
      0,   0, 114, 127, 127, 115, 127, 127, 127, 127, 114, 127, 127, 127, 127, 127, 127, 127, 127, 126, 120, 127, 127, 127, 127, 123, 123, 127, 127, 126,   3,   0, 
      0,   0, 123, 127, 127, 117, 127, 127, 127, 127, 127, 117, 127, 127, 127, 127, 127, 127, 127, 117, 127, 127, 127, 127, 127, 127, 117, 127, 127, 127,  12,   0, 
      0,   0, 126, 127, 121, 124, 127, 127, 127, 127, 127, 115, 126, 127, 127, 127, 127, 127, 123, 118, 127, 127, 127, 127, 127, 127, 120, 121, 127, 127,  13,   0, 
      0,   0,  96, 102, 111, 127, 127, 127, 127, 127, 127, 127, 112, 127, 127, 127, 127, 127, 117, 127, 127, 127, 127, 127, 127, 127, 127, 114, 127, 127,   6,   0, 
      0,   0,  12,   0,  52, 127, 127, 127, 127, 127, 127, 127,  70,  25,  25,  25,  25,  25,  82, 127, 127, 127, 127, 127, 127, 127, 127,  58,   0,  15,   0,   0, 
      0,   0,  10,   0,   3, 112, 127, 127, 127, 127, 127, 118,   7,   0,   0,   0,   0,   0,  13, 121, 127, 127, 127, 127, 127, 127, 109,   3,   0,  12,   0,   0, 
      0,   0,   7,   0,   0,  52, 127, 127, 127, 127, 127,  55,   0,   0,   0,   0,   0,   0,   0,  60, 127, 127, 127, 127, 127, 127,  43,   0,   0,  12,   0,   0, 
      0,   0,   1,   4,   0,   3, 112, 127, 127, 127, 111,   3,   0,   0,   0,   0,   0,   0,   0,   4, 114, 127, 127, 127, 127,  97,   0,   0,   6,   6,   0,   0, 
      0,   0,   0,  13,   0,   0, 109, 111, 127, 111,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 102, 118, 127, 127,  52,   0,   0,  13,   0,   0,   0, 
      0,   0,   0,   0,   3,  25, 127, 127, 127, 127, 124,  22,   0,   0,   0,   0,   0,   0,   0,   9, 115, 127, 127, 127, 127, 103,   0,   7,   6,   0,   0,   0, 
      0,   0,   0,   0,   6,  69, 127, 127, 127, 127, 127, 100,   1,   0,   0,   0,   0,   0,   0,  82, 127, 127, 127, 127, 127, 127,  33,  12,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 121, 127, 127, 127, 127, 127,  58,   0,   0,   0,   0,   0,  40, 127, 127, 127, 127, 127, 127, 127,  52,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  30, 123, 127, 127, 127, 127, 115,  75,  76,  76,  69,  51, 111, 127, 127, 127, 127, 127, 126,  58,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  24, 100, 127, 127, 127, 115, 127, 127, 127, 127, 127, 112, 127, 127, 127, 127, 118,  36,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  40, 109, 115, 126, 127, 127, 127, 127, 127, 127, 114, 127, 123,  69,   7,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  40,  82, 114, 127, 127, 127, 127, 117,  82,  46,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
