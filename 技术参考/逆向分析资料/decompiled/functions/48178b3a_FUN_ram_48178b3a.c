/* Firmware entry: 0x48178b3a */

int FUN_ram_48178b3a(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 local_70;
  undefined1 auStack_6c [12];
  byte local_60 [64];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_481769e8(auStack_6c);
  iVar4 = FUN_ram_4817697e(param_5);
  if (iVar4 == 0) {
    iVar7 = -0x4080;
  }
  else {
    FUN_ram_481769e8(auStack_6c);
    iVar5 = FUN_ram_48176b18(auStack_6c,iVar4,0);
    iVar7 = iVar5;
    if (iVar5 == 0) {
      uVar6 = FUN_ram_48176d4c(iVar4);
      memset(local_60,0,0x40);
      local_70 = 0;
      for (; iVar7 = iVar5, param_2 != 0; param_2 = param_2 - uVar3) {
        while( true ) {
          uVar3 = uVar6;
          if (param_2 < uVar6) {
            uVar3 = param_2;
          }
          iVar7 = FUN_ram_48176bfe(auStack_6c);
          if ((((iVar7 != 0) || (iVar7 = FUN_ram_48176c62(auStack_6c,param_3,param_4), iVar7 != 0))
              || (iVar7 = FUN_ram_48176c62(auStack_6c,&local_70), iVar7 != 0)) ||
             (iVar7 = FUN_ram_48176caa(auStack_6c,local_60), iVar7 != 0)) goto LAB_ram_48178b78;
          pbVar9 = local_60;
          pbVar2 = param_1 + uVar3;
          pbVar8 = param_1;
          if (uVar3 != 0) break;
          local_70 = CONCAT13(local_70._3_1_ + '\x01',(undefined3)local_70);
        }
        do {
          bVar1 = *pbVar9;
          param_1 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
          *pbVar8 = *pbVar8 ^ bVar1;
          pbVar8 = param_1;
        } while (param_1 != pbVar2);
        local_70 = CONCAT13(local_70._3_1_ + '\x01',(undefined3)local_70);
      }
    }
LAB_ram_48178b78:
    FUN_ram_48178af2(local_60,0x40);
    FUN_ram_48176a1a(auStack_6c);
  }
  return iVar7;
}


