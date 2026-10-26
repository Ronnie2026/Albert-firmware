/* Firmware entry: 0x4812ea5a */

uint FUN_ram_4812ea5a(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (((*param_1 == 0xffffffff) || (iVar3 = 1, param_1[6] - 3 < 2)) ||
     (uVar1 = param_1[7], uVar2 = crc32_le(0xffffffff,param_1,4), uVar1 != uVar2)) {
    if (param_1[8] == 0xffffffff) {
      return 0xffffffff;
    }
    iVar3 = 0;
  }
  else if (param_1[8] == 0xffffffff) {
    return 0;
  }
  uVar1 = iVar3 - 1;
  if (((param_1[0xe] != 3) && (param_1[0xe] != 4)) &&
     ((uVar4 = param_1[0xf], uVar2 = crc32_le(0xffffffff,param_1 + 8), uVar4 == uVar2 &&
      (uVar1 = 1, iVar3 != 0)))) {
    return (uint)(*param_1 < param_1[8]);
  }
  return uVar1;
}


