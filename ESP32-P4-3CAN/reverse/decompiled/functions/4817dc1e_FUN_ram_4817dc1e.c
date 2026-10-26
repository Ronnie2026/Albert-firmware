/* Firmware entry: 0x4817dc1e */

undefined4 FUN_ram_4817dc1e(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_84 [48];
  undefined1 auStack_54 [48];
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffb080;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0xffffb080;
  }
  else {
    if ((*param_1 != 1) && (1 < *param_1 - 3U)) {
      uVar1 = FUN_ram_4817470e();
      return uVar1;
    }
    iVar2 = FUN_ram_481802e8(param_2 + 4,1);
    if (iVar2 == 0) {
      FUN_ram_48178af2(auStack_84,100);
      uVar3 = *param_2;
      uVar1 = FUN_ram_48180076(param_2);
      FUN_ram_4ff45158(auStack_84,uVar3,uVar1);
      uVar1 = param_2[2];
      uVar3 = FUN_ram_48180076(param_2 + 2);
      FUN_ram_4ff45158(auStack_54,uVar1,uVar3);
      uStack_24 = (uint)param_1[0xf] >> 3;
      iVar2 = FUN_ram_481880c0(auStack_84);
      if (iVar2 == 1) {
        return 0;
      }
    }
    uVar1 = 0xffffb380;
  }
  return uVar1;
}


