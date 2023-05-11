main() {
  char *poinc = "Osaka";
  poinc = "Nagoya";

  printf("%s\n", poinc);
  printf("%p\n", poinc);
  printf("%d\n", *poinc);

  *poinc = "Tokyo";
  printf("%s\n", poinc);
}