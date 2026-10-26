/* Firmware entry: 0x48041e96 */

uint FUN_ram_48041e96(byte *param_1,int param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
    pbVar1 = param_1 + param_2;
    uVar3 = 0xffffffff;
    do {
      cVar2 = '\b';
      uVar3 = uVar3 ^ *param_1;
      do {
        cVar2 = cVar2 + -1;
        uVar3 = uVar3 >> 1 ^ -(uVar3 & 1) & 0xedb88320;
      } while (cVar2 != '\0');
      param_1 = param_1 + 1;
    } while (pbVar1 != param_1);
    return ~uVar3;
  }
  return 0;
}


