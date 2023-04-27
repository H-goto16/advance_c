
int shoubu(JPON kenin, JPON kenout) {
  int shoubukekka;
  switch (kenin) {
    case Gu : {
      if (kenout == Gu) {
        shoubukekka = 0;
      } else if (kenout == Choki) {
        shoubukekka = 1;
      } else {
        shoubukekka = -1;
      }
      break;
    }
    case Choki : {
      if (kenout == Gu) {
        shoubukekka = -1;
      } else if (kenout == Choki) {
        shoubukekka = 0;
      } else {
        shoubukekka = 1;
      }
      break;
    }
    case Pa : {
      if (kenout == Gu) {
        shoubukekka = 1;
      } else if (kenout == Choki) {
        shoubukekka = -1;
      } else {
        shoubukekka = 0;
      }
      break;
    }
  }
  return shoubukekka;
}