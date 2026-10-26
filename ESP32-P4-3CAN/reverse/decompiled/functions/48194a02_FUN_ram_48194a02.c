/* Firmware entry: 0x48194a02 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_48194a02(int param_1,uint *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0x102;
  }
  if ((((param_2 != (uint *)0x0) && (param_4 != (int *)0x0)) && (param_3 < 8)) &&
     ((*param_2 & 0xffffff9f) == 0x1f)) {
    FUN_ram_481321ea(0x102);
    FUN_ram_48132634(1);
    FUN_ram_481323ba(1);
    FUN_ram_4813244e(1);
    FUN_ram_4813269e(1);
    FUN_ram_48132780(1);
    if (param_3 == 7) {
      FUN_ram_4818ba48(3,0);
      FUN_ram_48194d56(1);
    }
    else {
      FUN_ram_4818ba48(3,1);
      FUN_ram_48194d56(0);
      FUN_ram_4818b95e();
      iVar2 = FUN_ram_4818b974(1,param_3);
      if (iVar2 != 0) {
        FUN_ram_48132780(0);
        FUN_ram_4813269e(0);
        FUN_ram_4813244e(0);
        FUN_ram_481323ba(0);
        FUN_ram_48132634(0);
        FUN_ram_48132232();
        return 0xc001;
      }
    }
    FUN_ram_48194d0c();
    uVar5 = FUN_ram_4ff21a0a();
    do {
      if (_DAT_ram_50094e0c == 0) {
        iVar2 = thunk_FUN_ram_4ff2070c(4);
        *param_4 = iVar2;
        if (iVar2 == 0) {
          FUN_ram_48194d18();
          FUN_ram_48132780(0);
          FUN_ram_4813269e(0);
          FUN_ram_4813244e(0);
          FUN_ram_481323ba(0);
          FUN_ram_48132634(0);
          FUN_ram_48132232();
          return 0x101;
        }
        uVar1 = *param_2;
        FUN_ram_48194d82(param_2 + 5);
        FUN_ram_48194d2c(param_2 + 1);
        FUN_ram_48194d60(param_1,(uVar1 + 1) * 4);
        FUN_ram_48194de4();
        *(uint **)*param_4 = param_2;
        return 0;
      }
      uVar6 = FUN_ram_4ff21a0a();
      uVar3 = (uint)uVar6 - (int)uVar5;
      uVar4 = (int)((ulonglong)uVar6 >> 0x20) - (int)((ulonglong)uVar5 >> 0x20);
      uVar1 = (uint)((uint)uVar6 < uVar3);
    } while (((int)(uVar4 - uVar1) < 1) && ((uVar4 != uVar1 || (uVar3 < 0x44d))));
    FUN_ram_48194d18();
    FUN_ram_48132780(0);
    FUN_ram_4813269e(0);
    FUN_ram_4813244e(0);
    FUN_ram_481323ba(0);
    FUN_ram_48132634(0);
    FUN_ram_48132232();
    return 0xc002;
  }
  return 0x102;
}


