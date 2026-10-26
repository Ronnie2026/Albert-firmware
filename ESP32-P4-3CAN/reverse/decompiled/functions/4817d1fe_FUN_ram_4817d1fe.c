/* Firmware entry: 0x4817d1fe */

undefined4 FUN_ram_4817d1fe(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x184) != 0) {
    FUN_ram_48184c08();
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x184));
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  if (param_2 == 2) {
    if (param_4 == 0xc0) {
      uVar1 = 0xffffff8e;
    }
    else {
      uVar1 = 0xffffffe0;
      if ((param_4 - 0x80 & 0xffffff7f) == 0) {
        *(char *)(param_1 + 0x15c) = (char)(param_4 >> 3);
        FUN_ram_4ff45158(param_1 + 0x15e,param_3);
        return 0;
      }
    }
  }
  else {
    iVar2 = thunk_FUN_ram_4ff2070c(400);
    *(int *)(param_1 + 0x184) = iVar2;
    if (iVar2 != 0) {
      FUN_ram_4818410e();
      uVar1 = FUN_ram_4818411c(*(undefined4 *)(param_1 + 0x184),param_2,param_3,param_4);
      return uVar1;
    }
    uVar1 = 0xffff9e80;
  }
  return uVar1;
}


