/* Firmware entry: 0x4ff2b006 */

undefined4 FUN_ram_4ff2b006(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid != 1) {
    DAT_ram_4ff5079c = DAT_ram_4ff5079c + 1;
    return 0;
  }
  if (param_1 == 2) {
    if ((DAT_ram_4ff50f4c & 0x3f) == 0) {
      DAT_ram_4ff50f4c = 0x81;
      uVar1 = FUN_ram_4ff2a25e(2,param_2,0xffffffff,1,0,0);
      return uVar1;
    }
    fence();
    DAT_ram_4ff50f4c = (DAT_ram_4ff50f4c & 0x3f) + 1 & 0x3f;
    if (DAT_ram_4ff509ec != 0) {
      DAT_ram_4ff50f4c = DAT_ram_4ff50f4c | 0x80;
    }
    uVar3 = DAT_ram_4ff50f4c & 0x80;
    puVar2 = &DAT_ram_4ff50f44;
  }
  else if (param_1 == 4) {
    if ((DAT_ram_4ff50f64 & 0x3f) == 0) {
      DAT_ram_4ff50f64 = 0x81;
      uVar1 = FUN_ram_4ff2a25e(4,param_2,0xffffffff,1,0,0);
      return uVar1;
    }
    fence();
    DAT_ram_4ff50f64 = (DAT_ram_4ff50f64 & 0x3f) + 1 & 0x3f;
    if (DAT_ram_4ff509ec != 0) {
      DAT_ram_4ff50f64 = DAT_ram_4ff50f64 | 0x80;
    }
    uVar3 = DAT_ram_4ff50f64 & 0x80;
    puVar2 = &DAT_ram_4ff50f5c;
  }
  else {
    if (param_1 != 1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return cycle;
    }
    if ((DAT_ram_4ff50f34 & 0x3f) == 0) {
      DAT_ram_4ff50f34 = 0x81;
      goto LAB_ram_4ff2b04a;
    }
    fence();
    DAT_ram_4ff50f34 = (DAT_ram_4ff50f34 & 0x3f) + 1 & 0x3f;
    if (DAT_ram_4ff509ec != 0) {
      DAT_ram_4ff50f34 = DAT_ram_4ff50f34 | 0x80;
    }
    uVar3 = DAT_ram_4ff50f34 & 0x80;
    puVar2 = &DAT_ram_4ff50f2c;
  }
  if (uVar3 == 0) {
    if (puVar2[5] != -1) {
      puVar2[5] = puVar2[5] + 1;
    }
    return cycle;
  }
LAB_ram_4ff2b04a:
  uVar1 = FUN_ram_4ff2a25e(param_1,param_2,0xffffffff,1,0,0);
  return uVar1;
}


