JPON sysjan(int sainome) {
  int pon;
  switch (sainome) {
    case 1 | 2 : pon = 0; break; 
    case 2 | 4 : pon = 2; break;
    case 5 | 6 : pon = 5; break;
  }
  return ((JPON)pon);
}