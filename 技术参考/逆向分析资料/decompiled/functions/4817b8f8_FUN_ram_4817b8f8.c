/* Firmware entry: 0x4817b8f8 */

int FUN_ram_4817b8f8(undefined1 *param_1,uint param_2,uint *param_3,int param_4,byte *param_5,
                    byte *param_6)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4817b566(param_1,param_5,param_6);
  if (iVar3 == 0) {
    if (param_4 != 0) {
      if (param_3 == (uint *)0x0) {
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: No IV offset supplied\n",uVar4,"esp-aes");
        return -0x21;
      }
      for (uVar1 = *param_3; uVar1 != 0; uVar1 = uVar1 + 1 & 0xf) {
        if (param_2 == 0) goto LAB_ram_4817b95e;
        param_2 = param_2 - 1;
        *param_6 = *(byte *)(param_4 + uVar1) ^ *param_5;
        param_5 = param_5 + 1;
        param_6 = param_6 + 1;
      }
      if (param_2 == 0) {
        uVar1 = 0;
      }
      else {
        FUN_ram_4813227a();
        FUN_ram_4813234a(1);
        param_1[1] = 0;
        uVar2 = FUN_ram_4818b75c(param_1 + 2,*param_1,0);
        param_1[1] = uVar2;
        FUN_ram_4818b7f2(2);
        FUN_ram_4818b80c(param_4);
        iVar3 = FUN_ram_481868c6(param_1,param_5,param_6,param_2,param_4);
        if (iVar3 != 0) {
          FUN_ram_4813234a(0);
          FUN_ram_4813228a();
          return iVar3;
        }
        FUN_ram_4818b856(param_4);
        uVar1 = param_2 & 0xf;
        FUN_ram_4813234a(0);
        FUN_ram_4813228a();
      }
LAB_ram_4817b95e:
      *param_3 = uVar1;
      return 0;
    }
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: No IV supplied\n",uVar4,"esp-aes");
  }
  return -0x21;
}


