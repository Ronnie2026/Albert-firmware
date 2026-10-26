/* Firmware entry: 0x481a36d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_481a36d4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): invalid argument\n",uVar1,"gptimer",
                     "gptimer_del_timer",0xc1);
    return 0x102;
  }
  fence();
  fence();
  if (param_1[0xb] == 0) {
    iVar2 = *(int *)*param_1;
    iVar3 = param_1[0x12];
    FUN_ram_4ff3122a();
    if (iVar2 == 0) {
      if (param_1[10] == 0) {
        _DAT_ram_500e6094 = _DAT_ram_500e6094 & 0xfeffffff;
      }
      else {
        _DAT_ram_500e6094 = _DAT_ram_500e6094 & 0xf7ffffff;
      }
    }
    else if (param_1[10] == 0) {
      _DAT_ram_500e6098 = _DAT_ram_500e6098 & 0xffbfffff;
    }
    else {
      _DAT_ram_500e6098 = _DAT_ram_500e6098 & 0xfdffffff;
    }
    FUN_ram_4ff31240();
    FUN_ram_481a91aa(param_1 + 9);
    iVar2 = FUN_ram_481a31d6(param_1);
    if (iVar2 == 0) {
      if (iVar3 == 0x11) {
        FUN_ram_48132ec4();
        return 0;
      }
    }
    else {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): destroy gptimer failed\n",uVar1,"gptimer",
                       "gptimer_del_timer",0xcf);
    }
  }
  else {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): timer not in init state\n",uVar1,"gptimer",
                     "gptimer_del_timer",0xc2);
    iVar2 = 0x103;
  }
  return iVar2;
}


