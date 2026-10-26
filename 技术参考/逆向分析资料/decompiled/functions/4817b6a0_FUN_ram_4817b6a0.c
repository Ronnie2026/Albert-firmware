/* Firmware entry: 0x4817b6a0 */

int FUN_ram_4817b6a0(undefined1 *param_1,undefined4 param_2,uint param_3,int param_4,
                    undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4817b566(param_1,param_5,param_6);
  if (iVar2 == 0) {
    if (param_4 != 0) {
      if (((param_3 & 0xf) == 0) && (param_3 != 0)) {
        iVar2 = FUN_ram_4817b4e8(param_1);
        if (iVar2 != 0) {
          FUN_ram_4813227a();
          FUN_ram_4813234a(1);
          param_1[1] = 0;
          uVar1 = FUN_ram_4818b75c(param_1 + 2,*param_1,param_2);
          param_1[1] = uVar1;
          FUN_ram_4818b7f2(1);
          FUN_ram_4818b80c(param_4);
          iVar2 = FUN_ram_481868c6(param_1,param_5,param_6,param_3,0);
          if (iVar2 == 0) {
            FUN_ram_4818b856(param_4);
          }
          FUN_ram_4813234a(0);
          FUN_ram_4813228a();
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar2;
        }
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return -0x20;
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return -0x22;
    }
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: No IV supplied\n",uVar3,"esp-aes");
  }
  return -0x21;
}


