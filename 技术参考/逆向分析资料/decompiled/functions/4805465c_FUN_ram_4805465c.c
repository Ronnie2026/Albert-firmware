/* Firmware entry: 0x4805465c */

undefined4 FUN_ram_4805465c(int param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uStack_18;
  uint uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x1f < (param_3 - 1 & 0xff)) {
    return 0;
  }
  uVar1 = (uint)*(byte *)(param_1 + 4);
  if (uVar1 << 3 < param_2 + param_3) {
    return 0;
  }
  uStack_18 = 0;
  uStack_14 = 0;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  FUN_ram_4ff45158(&uStack_18,param_1 + 5,uVar1);
  uVar1 = 0xffffffff;
  if (param_3 != 0x20) {
    if ((int)(param_3 - 0x20) < 0) {
      uVar1 = (1 << (param_3 & 0x1f)) - 1;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  if ((int)(param_2 - 0x20) < 0) {
    uStack_14 = uStack_18 >> (param_2 & 0x1f) | (uStack_14 << 1) << (0x1f - param_2 & 0x1f);
  }
  else {
    uStack_14 = uStack_14 >> (param_2 - 0x20 & 0x1f);
  }
  *param_4 = uVar1 & uStack_14;
  return 1;
}


