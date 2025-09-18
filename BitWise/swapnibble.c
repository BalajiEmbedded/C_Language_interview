  #include<stdio.h>
   
  void main()
  {
  int i=0x1234;
  printf("before swapping %x\n",i);
  int lower_nibbles=i & 0xFF;
   
 int first=lower_nibbles & 0x0F;
 printf("%x\n",first);
 int second=lower_nibbles & 0xF0;
 printf("%x\n",second);
 int upper_nibbles=i& 0xFF00;
 printf("%x\n",upper_nibbles);
 int res=upper_nibbles | ((first << 4) | (second >>4));
 printf("after swapping nibbles %x\n",res);
  
  
 }
