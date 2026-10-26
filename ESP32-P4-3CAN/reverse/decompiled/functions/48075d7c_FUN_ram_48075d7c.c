/* Firmware entry: 0x48075d7c */

undefined4 FUN_ram_48075d7c(int param_1,size_t param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  size_t sVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar2 = FUN_ram_4ff453ae(param_1,&DAT_ram_481c87b8);
    if (iVar2 == 0) {
      ppuVar1 = &PTR_s__config_ram_481cac88_0xc_ram_48222ab0;
      if (param_2 == 7) goto LAB_ram_48075e2e;
      do {
        do {
          ppuVar1 = ppuVar1 + 1;
          if (ppuVar1 == (undefined **)&DAT_ram_48222af8) {
            return 0;
          }
          sVar3 = strlen(*ppuVar1);
        } while (param_2 != sVar3);
LAB_ram_48075e2e:
        iVar2 = FUN_ram_4ff4511a(param_3,*ppuVar1,param_2);
      } while (iVar2 != 0);
    }
    else {
      iVar2 = FUN_ram_4ff453ae(param_1,&DAT_ram_481c87bc);
      if (iVar2 != 0) {
        return 0;
      }
      ppuVar1 = &PTR_s__config_ram_481cac88_0xc_ram_48222a68;
      if (param_2 == 7) goto LAB_ram_48075de2;
      do {
        do {
          ppuVar1 = ppuVar1 + 1;
          if (ppuVar1 == &PTR_s__config_ram_481cac88_0xc_ram_48222ab0) {
            return 0;
          }
          sVar3 = strlen(*ppuVar1);
        } while (param_2 != sVar3);
LAB_ram_48075de2:
        iVar2 = FUN_ram_4ff4511a(param_3,*ppuVar1,param_2);
      } while (iVar2 != 0);
    }
    return 1;
  }
  return 0;
}


