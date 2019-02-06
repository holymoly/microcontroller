int main (void) {
  volatile unsigned long i = 0;
  (*( volatile unsigned char *)(0x2A)) = 0b11111111;
  while (1) {
    (*( volatile unsigned char *)(0x2B)) = 0b11111111; for (i = 0; i < 100000; i++);
  }
  return 0;
}