/* Firmware entry: 0x4ff2b226 */

/* WARNING: Removing unreachable block (ram,0x4ff2b35a) */

void FUN_ram_4ff2b226(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid != 1) {
    DAT_ram_4ff5079c = DAT_ram_4ff5079c + 1;
    return;
  }
  if (param_1 == 2) {
    piVar4 = &DAT_ram_4ff50f44;
  }
  else if (param_1 == 4) {
    piVar4 = &DAT_ram_4ff50f5c;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    piVar4 = &DAT_ram_4ff50f2c;
  }
  uVar1 = cycle - param_3;
  if (*piVar4 != -1) {
    *piVar4 = *piVar4 + 1;
  }
  if ((uint)piVar4[1] < uVar1) {
    piVar4[1] = uVar1;
  }
  uVar2 = piVar4[2];
  if (param_1 == 2) {
    puVar3 = &DAT_ram_4ff50f44;
  }
  else if (param_1 == 4) {
    puVar3 = &DAT_ram_4ff50f5c;
  }
  else {
    puVar3 = &DAT_ram_4ff50f2c;
  }
  if ((puVar3[2] & 0x80) == 0) {
    if (puVar3[5] != -1) {
      puVar3[5] = puVar3[5] + 1;
    }
    piVar4[2] = uVar2 & 0x3f;
    if (piVar4[4] != -1) {
      piVar4[4] = piVar4[4] + 1;
    }
    return;
  }
  piVar4[2] = uVar2 & 0x3f;
  if (piVar4[3] != -1) {
    piVar4[3] = piVar4[3] + 1;
  }
  FUN_ram_4ff3ebfe();
  uVar2 = DAT_ram_4ff50e7c;
  iVar5 = DAT_ram_4ff50e78 * 0x18;
  DAT_ram_4ff50e80 = DAT_ram_4ff50e80 + 1;
  DAT_ram_4ff50e78 = DAT_ram_4ff50e78 + 1 & 0xf;
  *(undefined4 *)(&DAT_ram_4ff50d00 + iVar5) = param_2;
  *(int *)(&DAT_ram_4ff50cfc + iVar5) = cycle;
  *(uint *)(&DAT_ram_4ff50d04 + iVar5) = uVar1;
  (&DAT_ram_4ff50d0c)[iVar5] = (char)param_1;
  (&DAT_ram_4ff50d0e)[iVar5] = 0;
  (&DAT_ram_4ff50d0f)[iVar5] = param_4;
  (&DAT_ram_4ff50d0d)[iVar5] = 3;
  *(int *)(&DAT_ram_4ff50cf8 + iVar5) = DAT_ram_4ff50e80;
  *(undefined4 *)(&DAT_ram_4ff50d08 + iVar5) = 0xffffffff;
  if (uVar2 < 0x10) {
    DAT_ram_4ff50e7c = uVar2 + 1;
  }
  else if (DAT_ram_4ff50e84 != -1) {
    DAT_ram_4ff50e84 = DAT_ram_4ff50e84 + 1;
  }
  FUN_ram_4ff3ec08();
  return;
}


