/* Firmware entry: 0x480319ac */

uint FUN_ram_480319ac(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = 0;
  if ((((*(char *)(param_1 + 0x132) != '\0') &&
       ((uint)(param_2 - *(int *)(param_1 + 0x134)) < 0x1f5)) &&
      (uVar4 = (uint)*(byte *)(param_1 + 0x130), *(char *)(param_1 + 9) == '\0')) && (uVar4 == 3)) {
    uVar4 = 0;
  }
  uVar5 = 0;
  uVar3 = 0;
  do {
    uVar1 = uVar5 & 0x1f;
    uVar2 = uVar5 & 0xf;
    uVar5 = uVar5 + 1;
    if ((*(byte *)(param_1 + 0xb) >> uVar1 & 1) != 0) {
      uVar3 = (uVar4 & 3) << (uVar2 << 1) & 0xff | uVar3;
    }
  } while (uVar5 != 3);
  return uVar3;
}


