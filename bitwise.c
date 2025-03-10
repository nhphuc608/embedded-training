#include <stdio.h>
#define set_bit(reg,bit) (reg |= (1<<bit))
#define clear_bit(reg,bit) (reg &= ~(1<<bit))
#define convert_bit(reg,bit) (reg ^= (1<<bit))

int main(){
  unsigned char reg = 0x00; //0000 0000
  set_bit(reg,3); //0000 1000
  printf("After setting bit 3: 0x%X\n",reg);

  clear_bit(reg,3); // 0000 0000
  printf("After clearing bit 3:0x%X\n",reg);

  convert_bit(reg,1); // 0000 0100
  printf("After convert bit 1:0x%X\n",reg);

  return 0;
  
}
