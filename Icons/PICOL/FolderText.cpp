#include <PICOL.h>

namespace PICOL {
  const uint8_t FolderText[] = {
    48, 44, // width, height
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,  10,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101,  74,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  94,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 126, 121, 120, 120, 120, 120, 120, 120, 120, 122, 127, 127,  96,  15,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,   3,   0,   0,   0, 
    127, 127, 114,  39,  27,  27,  27,  27,  27,  27,  27,  57, 125, 127, 121, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 102,  28,   0,   0,   0, 
    127, 127, 110,  13,   0,   0,   0,   0,   0,   0,   0,  37, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  33,   0,   0,   0, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  38, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  47,  18,  17,   5, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  38, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 117, 113, 108,  32, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  38, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  34, 110, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 114, 124, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   4,  15,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  22, 103, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  99, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   9,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  13,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  37, 120, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123,  52,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  39, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  55,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  28,  91,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  39,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   1,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   2,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  13,  43,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  45,  19,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  38, 123, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126,  53,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  39, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  55,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  24,  77,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79,  33,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  18,  59,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  38, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  65,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  38, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  65,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  19,  61,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 122,  36, 
    127, 127, 111,  20,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,  13, 101, 127, 122,  36, 
    127, 127, 123, 100,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  98, 120, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 118,  35, 
     34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  33,   9, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
