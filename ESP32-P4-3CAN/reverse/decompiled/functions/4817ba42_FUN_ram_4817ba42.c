/* Firmware entry: 0x4817ba42 */

int FUN_ram_4817ba42(undefined1 *param_1,uint param_2,uint *param_3,int param_4,int param_5,
                    byte *param_6,byte *param_7)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_4817b566(param_1,param_6,param_7);
  if (iVar4 == 0) {
    if (param_5 == 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: No stream supplied\n",uVar5,"esp-aes");
      return -1;
    }
    if (param_4 == 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: No nonce supplied\n",uVar5,"esp-aes");
      return -0x21;
    }
    if (param_3 != (uint *)0x0) {
      uVar1 = *param_3;
      iVar4 = FUN_ram_4817b4e8(param_1);
      if (iVar4 == 0) {
        return -0x20;
      }
      for (; uVar1 != 0; uVar1 = uVar1 + 1 & 0xf) {
        uVar2 = 0;
        if (param_2 == 0) goto LAB_ram_4817bb06;
        param_2 = param_2 - 1;
        *param_7 = *(byte *)(param_5 + uVar1) ^ *param_6;
        param_6 = param_6 + 1;
        param_7 = param_7 + 1;
      }
      uVar2 = param_2;
      if (param_2 == 0) {
        uVar1 = 0;
      }
      else {
        FUN_ram_4813227a();
        FUN_ram_4813234a(1);
        param_1[1] = 0;
        uVar3 = FUN_ram_4818b75c(param_1 + 2,*param_1,0);
        param_1[1] = uVar3;
        FUN_ram_4818b7f2(3);
        FUN_ram_4818b80c(param_4);
        iVar4 = FUN_ram_481868c6(param_1,param_6,param_7,param_2,param_5);
        if (iVar4 != 0) {
          FUN_ram_4813234a(0);
          FUN_ram_4813228a();
          return iVar4;
        }
        FUN_ram_4818b856(param_4);
        FUN_ram_4813234a(0);
        uVar1 = 0;
        FUN_ram_4813228a();
      }
LAB_ram_4817bb06:
      *param_3 = (uVar2 & 0xf) + uVar1;
      return 0;
    }
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: No nonce offset supplied\n",uVar5,"esp-aes");
  }
  return -0x21;
}


