/* Firmware entry: 0x4ff2c374 */

void FUN_ram_4ff2c374(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *param_3;
  if ((uVar1 & 0x1e0008) == 0) {
    return;
  }
  uVar3 = *param_1;
  uVar5 = *param_2;
  auStack_24[0] = 0;
  iVar2 = FUN_ram_4ff33c7c(uVar1,auStack_24);
  if (iVar2 == 0) {
    if (((int)(uVar1 << 0xd) < 0) && (auStack_24[0] < 8)) {
      auStack_24[0] = 8;
    }
    uVar4 = auStack_24[0];
    if (auStack_24[0] <= uVar3) {
      uVar4 = uVar3;
    }
    if (((int)(uVar1 << 0xb) < 0) && (uVar4 < 0x10)) {
      uVar4 = 0x10;
    }
    if ((((uVar1 & 8) != 0) && (iVar2 = FUN_ram_4ff20684(), iVar2 != 0)) && (uVar4 < 0x10)) {
      uVar4 = 0x10;
    }
    if ((uVar1 >> 0x11 & 3) != 0) {
      uVar1 = uVar1 & 0xfff9ffff | 8;
    }
    if ((uVar1 & 0x400) != 0) {
      uVar1 = uVar1 & 0xfffffff7;
    }
    *param_2 = -uVar4 & (uVar5 - 1) + uVar4;
    *param_1 = uVar4;
    *param_3 = uVar1 & 0xfff7ffff;
  }
  else {
    *param_3 = *param_3 | 0x80000000;
  }
  return;
}


