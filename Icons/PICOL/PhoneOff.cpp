#include <PICOL.h>

namespace PICOL {
  const uint8_t PhoneOff[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,   4,   0,   0,   0,   0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33, 103, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 104,  41,   0,   0,   0,   0,  12,  75,  41,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  51,   0,   0,   0,  12,  85, 127, 114,  40,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,  12,  85, 127, 127, 127, 113,  47, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,  12,  85, 127, 127, 127, 127, 127,  87, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  49,  11,  85, 127, 127, 127, 127, 127,  86,  16, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  63,  83, 127, 127, 127, 127, 127,  87,  13,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 103,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  69,  99, 127, 127, 127, 126, 116, 126, 127, 127, 127, 127,  86,  13,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127,  74,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  66, 127, 127, 127, 127, 127, 127, 127, 127, 127,  86,  13,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127, 127, 127, 127, 127, 127, 127,  86,  13,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127, 127, 127, 127, 127, 127,  86,  13,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  66, 127, 127, 127, 127, 127, 127,  86,  13,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  93, 127, 127, 127, 127, 127,  86,  13,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  85, 126, 127, 127, 127, 127,  90,  13,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  85, 127, 127, 127, 127, 127, 127,  51,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127,  74,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  85, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127,  80,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  21,  85, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 120, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 113, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 101,  64,  64,  82, 125, 127, 127, 127, 127, 127, 127, 127, 127,  90,  64,  64,  97, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127,  74,   0,   0,  35, 123, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,  66, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127,  74,   0,   0,  34, 123, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,  66, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127,  97,  53,  53,  74, 125, 127, 127, 127, 127, 127, 127, 127, 127,  83,  53,  53,  92, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124, 107, 104, 106, 123, 127, 127, 113, 104, 104, 116, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 112,  26,  10,  20, 107, 127, 127,  57,  10,  10,  72, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  40, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  15,   0,   9, 104, 127, 127,  50,   0,   0,  66, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 113,  31,  16,  25, 108, 127, 127,  61,  16,  16,  75, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  87, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125, 114, 112, 113, 125, 127, 127, 118, 112, 112, 120, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  13,  85, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  12,  85, 127, 127, 127, 127, 127, 127, 125, 123, 123, 124, 127, 127, 127, 123, 123, 123, 126, 127, 127, 125, 123, 123, 125, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  13,  85, 127, 127, 127, 127, 127, 127, 127,  89,  35,  35,  61, 124, 127, 115,  47,  35,  41, 107, 127, 127,  72,  35,  35,  83, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  12,  86, 127, 127, 127, 127, 127, 127, 127, 127,  74,   0,   0,  34, 123, 127, 111,  15,   0,   6,  99, 127, 127,  50,   0,   0,  66, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  13,  85, 127, 127, 127, 127, 127, 127, 127, 127, 127,  75,   0,   0,  36, 123, 127, 111,  17,   0,   8, 100, 127, 127,  51,   0,   0,  67, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,  12,  86, 127, 127, 127, 127, 126, 113, 126, 127, 127, 127, 106,  77,  77,  91, 126, 127, 121,  84,  77,  80, 116, 127, 127,  97,  77,  77, 103, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  13,  86, 127, 127, 127, 127, 127,  84,  54, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,  13,  86, 127, 127, 127, 127, 127,  86,  11,  39, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      2,  68, 127, 127, 127, 127, 127,  86,  13,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,  26, 103, 127, 127, 127,  86,  13,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  26, 103, 127,  86,  13,   0,   0,   0,  41, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  51,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,  26,  68,  13,   0,   0,   0,   0,  32,  98, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  99,  39,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   2,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
