main() {
  #if 0
  
  char *poinc = "Osaka";
  poinc = "Nagoya";

  printf("%s\n", poinc);
  printf("%p\n", poinc);
  printf("%d\n", *poinc);

  *poinc = "Tokyo";
  printf("%s\n", poinc);

  *poinc = 0x000000000001;
  printf("%d", poinc);
  #endif

  int i;
  for (;i++ < 100;) {
    printf("%d\n", i);
  }
}