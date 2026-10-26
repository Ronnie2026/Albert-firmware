/* Firmware entry: 0x48032060 */

undefined4 FUN_ram_48032060(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar6 = 0;
  if ((((*(char *)(param_1 + 0x132) != '\0') &&
       ((uint)(param_2 - *(int *)(param_1 + 0x134)) < 0x1f5)) &&
      (uVar6 = (uint)*(byte *)(param_1 + 0x130), *(char *)(param_1 + 9) == '\0')) && (uVar6 == 3)) {
    uVar6 = 0;
  }
  uVar5 = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar5 & 0x1f;
    uVar2 = uVar5 & 0xf;
    uVar5 = uVar5 + 1;
    if ((*(byte *)(param_1 + 0xb) >> uVar1 & 1) != 0) {
      uVar4 = (uVar6 & 3) << (uVar2 << 1) & 0xff | uVar4;
    }
  } while (uVar5 != 3);
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x138);
  }
  return uVar3;
}


