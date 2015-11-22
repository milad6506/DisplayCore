#include <Brankic.h>

namespace Brankic {
  const uint8_t QuoteOpen[] = {
    29, 29, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28,  66, 100, 106, 127, 120, 102,  88,  48,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  49, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  79,  16,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  12,  97, 127, 127, 111,  64,  33,  21,   0,   9,  25,  45,  88, 126, 127, 123,  48,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  22, 112, 127, 115,  51,   1,   0,   0,   0,   0,   0,   0,   0,   0,  18,  84, 127, 127,  73,   1,   0,   0,   0,   0, 
      0,   0,   0,   0,  18, 117, 127,  97,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48, 124, 127,  73,   0,   0,   0,   0, 
      0,   0,   0,   3, 105, 127,  94,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36, 126, 127,  46,   0,   0,   0, 
      0,   0,   0,  57, 127, 109,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54, 127, 114,   6,   0,   0, 
      0,   0,   9, 118, 127,  37,   0,   0,   0,   0,   0,   0,  22,  31,   0,   0,   0,   0,   0,   0,  28,  25,   0,   0,  99, 127,  61,   0,   0, 
      0,   0,  55, 127,  94,   0,   0,   0,   0,   0,  18,  94, 127, 111,   0,   0,   0,   0,  25, 102, 127,  97,   0,   0,  31, 127, 117,   1,   0, 
      0,   0,  97, 127,  43,   0,   0,   0,   0,  36, 118, 127,  97,  16,   0,   0,   0,  45, 123, 127,  91,  12,   0,   0,   0, 112, 127,  33,   0, 
      0,   3, 124, 126,   9,   0,   0,   0,  24, 123, 127,  63,   1,   0,   0,   0,  34, 126, 126,  51,   0,   0,   0,   0,   0,  75, 127,  64,   0, 
      0,  19, 127, 111,   0,   0,   0,   1, 111, 127,  88,   0,   0,   0,   0,   7, 117, 127,  72,   0,   0,   0,   0,   0,   0,  46, 127,  84,   0, 
      0,  28, 127,  99,   0,   0,   0,  46, 127, 127, 124,  96,  48,   0,   0,  60, 127, 127, 121,  93,  39,   0,   0,   0,   0,  34, 127,  93,   0, 
      0,  28, 127, 102,   0,   0,   0,  88, 127, 127, 127, 127, 127,  43,   0, 103, 127, 127, 127, 127, 127,  34,   0,   0,   0,  34, 127,  93,   0, 
      0,  19, 127, 115,   0,   0,   0, 100, 127, 127, 127, 127, 127,  94,   0, 117, 127, 127, 127, 127, 127,  81,   0,   0,   0,  46, 127,  84,   0, 
      0,   3, 124, 126,   9,   0,   0,  82, 127, 127, 127, 127, 127,  99,   0,  97, 127, 127, 127, 127, 127,  87,   0,   0,   0,  73, 127,  64,   0, 
      0,   0,  97, 127,  42,   0,   0,  30, 127, 127, 127, 127, 127,  64,   0,  45, 127, 127, 127, 127, 127,  55,   0,   0,   0, 112, 127,  33,   0, 
      0,   0,  55, 127,  93,   0,   0,   0,  54, 124, 127, 127,  91,   6,   0,   0,  67, 127, 127, 127,  81,   3,   0,   0,  31, 127, 117,   1,   0, 
      0,   0,   9, 118, 127,  36,   0,   0,   0,  13,  37,  24,   0,   0,   0,   0,   0,  16,  37,  21,   0,   0,   0,   0,  99, 127,  63,   0,   0, 
      0,   0,   0,  58, 127, 109,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54, 127, 114,   6,   0,   0, 
      0,   0,   0,   3, 105, 127,  93,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34, 126, 127,  46,   0,   0,   0, 
      0,   0,   0,   0,  18, 117, 127,  96,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48, 124, 127,  73,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  22, 112, 127, 115,  49,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  82, 127, 127,  73,   1,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  12,  99, 127, 127, 109,  63,  31,  18,   0,   4,  25,  43,  85, 124, 127, 123,  49,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  52, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  82,  18,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31,  67, 102, 109, 127, 123, 102,  90,  49,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};