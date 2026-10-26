/* Firmware entry: 0x480311a6 */

uint FUN_ram_480311a6(uint param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  char cVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = 0;
  uVar1 = 0xffffffff;
  do {
    uVar1 = uVar1 ^ param_1 >> (uVar2 & 0x1f) & 0xff;
    cVar4 = '\b';
    do {
      cVar4 = cVar4 + -1;
      uVar1 = uVar1 >> 1 ^ -(uVar1 & 1) & 0xedb88320;
    } while (cVar4 != '\0');
    uVar2 = uVar2 + 8;
  } while (uVar2 != 0x20);
  pbVar3 = param_2 + 0x20;
  do {
    cVar4 = '\b';
    uVar1 = uVar1 ^ *param_2;
    do {
      cVar4 = cVar4 + -1;
      uVar1 = uVar1 >> 1 ^ -(uVar1 & 1) & 0xedb88320;
    } while (cVar4 != '\0');
    param_2 = param_2 + 1;
  } while (pbVar3 != param_2);
  return ~uVar1;
}


