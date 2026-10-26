/* Firmware entry: 0x480b356e */

char FUN_ram_480b356e(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  void *pvStack_23c;
  uint uStack_238;
  uint uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined2 uStack_214;
  undefined1 auStack_210 [512];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pvStack_23c = memset(auStack_210,0,0x200);
  uStack_238 = 0x200;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_21c = 0;
  uStack_218 = 0;
  auStack_210[0] = 0x7b;
  uStack_214 = 1;
  uStack_234 = 1;
  uStack_22c = 1;
  uStack_220 = 1;
  iStack_230 = 1;
  FUN_ram_480b320a(&pvStack_23c,param_1);
  if (((((char)uStack_214 != '\0') && (iStack_230 == 1)) &&
      (cVar1 = (char)uStack_220, (char)uStack_220 != '\0')) &&
     ((uStack_234 <= uStack_238 && (1 < uStack_238 - uStack_234)))) {
    *(undefined1 *)(uStack_234 + (int)pvStack_23c) = 0x7d;
    *(undefined1 *)((int)pvStack_23c + uStack_234 + 1) = 0;
    FUN_ram_4817b062(pvStack_23c,uStack_234 + 1,param_2,0);
    return cVar1;
  }
  return '\0';
}


