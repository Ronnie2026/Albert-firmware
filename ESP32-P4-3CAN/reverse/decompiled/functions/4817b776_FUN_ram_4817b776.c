/* Firmware entry: 0x4817b776 */

int FUN_ram_4817b776(undefined1 *param_1,int param_2,uint param_3,uint *param_4,int param_5,
                    byte *param_6,byte *param_7)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_4817b566(param_1,param_6,param_7);
  if (iVar4 == 0) {
    if (param_5 == 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: No IV supplied\n",uVar5,"esp-aes");
      return -0x21;
    }
    if (param_4 != (uint *)0x0) {
      iVar4 = FUN_ram_4817b4e8(param_1);
      if (iVar4 == 0) {
        return -0x20;
      }
      uVar2 = *param_4;
      while (uVar2 != 0) {
        pbVar1 = (byte *)(param_5 + uVar2);
        if (param_3 == 0) goto LAB_ram_4817b7f4;
        bVar6 = *param_6;
        uVar2 = uVar2 + 1 & 0xf;
        param_6 = param_6 + 1;
        bVar7 = bVar6 ^ *pbVar1;
        if (param_2 == 1) {
          bVar6 = bVar7;
        }
        *param_7 = bVar7;
        *pbVar1 = bVar6;
        param_3 = param_3 - 1;
        param_7 = param_7 + 1;
      }
      if (param_3 == 0) {
        uVar2 = 0;
      }
      else {
        FUN_ram_4813227a();
        FUN_ram_4813234a(1);
        param_1[1] = 0;
        uVar3 = FUN_ram_4818b75c(param_1 + 2,*param_1,param_2);
        param_1[1] = uVar3;
        FUN_ram_4818b7f2(5);
        FUN_ram_4818b80c(param_5);
        iVar4 = FUN_ram_481868c6(param_1,param_6,param_7,param_3,param_5);
        uVar2 = param_3 & 0xf;
        if (iVar4 != 0) {
          FUN_ram_4813234a(0);
          FUN_ram_4813228a();
          return iVar4;
        }
        if (uVar2 == 0) {
          FUN_ram_4818b856(param_5);
        }
        else if (param_2 == 0) {
          FUN_ram_4ff45158(param_5,param_6 + (param_3 - uVar2),uVar2);
        }
        FUN_ram_4813234a(0);
        FUN_ram_4813228a();
      }
LAB_ram_4817b7f4:
      *param_4 = uVar2;
      return 0;
    }
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: No IV offset supplied\n",uVar5,"esp-aes");
  }
  return -0x21;
}


