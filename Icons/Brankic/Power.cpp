#include <Brankic.h>

namespace Brankic {
  const uint8_t Power[] = {
    28, 33, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 100, 100,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 115, 127, 127, 115,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  24,  96,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,  39,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  10,  78, 127, 127,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0, 127,  88,   9,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  16, 112, 127, 127, 127,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0, 127, 127, 111,  15,   0,   0,   0,   0, 
      0,   0,   0,   0,  10, 111, 127, 127, 127, 127,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0, 127, 127, 127, 111,  12,   0,   0,   0, 
      0,   0,   0,   0,  93, 127, 127, 127, 127, 103,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0, 127, 127, 127, 127,  94,   1,   0,   0, 
      0,   0,   0,  45, 127, 127, 127, 127,  85,   4,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,  84, 127, 127, 127, 127,  46,   0,   0, 
      0,   0,   1, 109, 127, 127, 127, 100,   3,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   3,  94, 127, 127, 127, 112,   1,   0, 
      0,   0,  34, 127, 127, 127, 126,  16,   0,   0,   0,   0,   0, 127, 127, 127, 127,   0,   0,   0,   0,  18, 124, 127, 127, 127,  34,   0, 
      0,   0,  72, 127, 127, 127,  85,   0,   0,   0,   0,   0,   0, 118, 127, 127, 118,   0,   0,   0,   0,   0,  81, 127, 127, 127,  73,   0, 
      0,   0, 102, 127, 127, 127,  37,   0,   0,   0,   0,   0,   0,  48, 124, 124,  48,   0,   0,   0,   0,   0,  37, 127, 127, 127, 102,   0, 
      0,   0, 120, 127, 127, 127,  12,   0,   0,   0,   0,   0,   0,   0,   4,   4,   0,   0,   0,   0,   0,   0,  12, 127, 127, 127, 117,   0, 
      0,   0, 127, 127, 127, 127,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1, 127, 127, 127, 126,   0, 
      0,   0, 121, 127, 127, 127,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10, 127, 127, 127, 121,   0, 
      0,   0, 106, 127, 127, 127,  30,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28, 127, 127, 127, 106,   0, 
      0,   0,  82, 127, 127, 127,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64, 127, 127, 127,  82,   0, 
      0,   0,  42, 127, 127, 127, 118,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6, 118, 127, 127, 127,  43,   0, 
      0,   0,   4, 120, 127, 127, 127,  72,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  72, 127, 127, 127, 120,   4,   0, 
      0,   0,   0,  60, 127, 127, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54, 127, 127, 127, 127,  60,   0,   0, 
      0,   0,   0,   6, 112, 127, 127, 127, 127,  67,   4,   0,   0,   0,   0,   0,   0,   0,   4,  67, 127, 127, 127, 127, 112,   4,   0,   0, 
      0,   0,   0,   0,  22, 123, 127, 127, 127, 127, 112,  60,  15,   0,   0,   0,  15,  60, 112, 127, 127, 127, 127, 123,  22,   0,   0,   0, 
      0,   0,   0,   0,   0,  37, 123, 127, 127, 127, 127, 127, 127, 127, 111, 127, 127, 127, 127, 127, 127, 127, 123,  37,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  25, 112, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 112,  27,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   7,  67, 123, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  75,   7,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  54,  91, 120, 127, 127, 127, 120,  91,  54,  12,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
