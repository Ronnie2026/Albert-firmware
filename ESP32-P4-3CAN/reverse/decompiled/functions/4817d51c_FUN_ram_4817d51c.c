/* Firmware entry: 0x4817d51c */

int FUN_ram_4817d51c(int param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                    uint *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char acStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes-gcm","E (%lu) %s: No GCM context supplied\n",uVar3,"esp-aes-gcm");
    iVar2 = -0x14;
  }
  else {
    if (*(int *)(param_1 + 0x184) != 0) {
      iVar2 = FUN_ram_4818474a();
      return iVar2;
    }
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    acStack_34[0] = '\0';
    acStack_34[1] = '\0';
    acStack_34[2] = '\0';
    acStack_34[3] = '\0';
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    if (param_6 == (uint *)0x0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-aes-gcm","E (%lu) %s: No output length supplied\n",uVar3,"esp-aes-gcm"
                      );
      iVar2 = -0x14;
    }
    else {
      *param_6 = param_3;
      if (param_2 == 0) {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-aes-gcm","E (%lu) %s: No input supplied\n",uVar3,"esp-aes-gcm");
        iVar2 = -0x14;
      }
      else if (param_4 == 0) {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-aes-gcm","E (%lu) %s: No output supplied\n",uVar3,"esp-aes-gcm");
        iVar2 = -0x14;
      }
      else if ((param_2 < param_4) && (param_4 - param_2 < param_3)) {
        iVar2 = -0x14;
      }
      else {
        if (*(int *)(param_1 + 0x180) == 1) {
          FUN_ram_4ff45158(&uStack_40,param_1 + 0x20,0x10);
          puVar4 = &uStack_40;
          do {
            cVar1 = *(char *)((int)puVar4 + 0xf);
            puVar5 = (undefined4 *)((int)puVar4 + -1);
            *(char *)((int)puVar4 + 0xf) = cVar1 + '\x01';
            if (cVar1 != -1) break;
            puVar4 = puVar5;
          } while (&uStack_44 != puVar5);
          FUN_ram_4ff45158(param_1 + 0x20,&uStack_40,0x10);
          *(undefined4 *)(param_1 + 0x180) = 2;
        }
        else if (*(int *)(param_1 + 0x180) == 2) {
          FUN_ram_4ff45158(&uStack_40,param_1 + 0x20,0x10);
        }
        if (*(int *)(param_1 + 0x154) == 0) {
          FUN_ram_4817cedc(param_1,param_2,param_3,param_1 + 0x10);
        }
        iVar2 = FUN_ram_4817ba42(param_1 + 0x15c,param_3,&uStack_44,&uStack_40,&uStack_30,param_2,
                                 param_4);
        if (iVar2 == 0) {
          FUN_ram_4ff45158(param_1 + 0x20,&uStack_40,0x10);
          *(uint *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + param_3;
          if (*(int *)(param_1 + 0x154) == 1) {
            FUN_ram_4817cedc(param_1,param_4,param_3,param_1 + 0x10);
          }
        }
      }
    }
  }
  return iVar2;
}


