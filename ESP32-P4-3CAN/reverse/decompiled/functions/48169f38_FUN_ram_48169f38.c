/* Firmware entry: 0x48169f38 */

int FUN_ram_48169f38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    int param_5,undefined4 param_6,int param_7,int param_8,uint param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [76];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_481769e8(auStack_8c);
  iVar1 = FUN_ram_4817697e(param_1);
  if (iVar1 == 0) {
    return -0x6c00;
  }
  uVar2 = FUN_ram_48176d4c();
  iVar8 = uVar2 + param_5 + param_7;
  iVar3 = thunk_FUN_ram_4817b126(1,iVar8);
  if (iVar3 == 0) {
    FUN_ram_48176a1a(auStack_8c);
    iVar1 = -0x7f00;
    goto LAB_ram_48169fd6;
  }
  FUN_ram_4ff45158(iVar3 + uVar2,param_4,param_5);
  FUN_ram_4ff45158(iVar3 + uVar2 + param_5,param_6,param_7);
  iVar1 = FUN_ram_48176b18(auStack_8c,iVar1,1);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_48176d6c(auStack_8c,param_2,param_3), iVar1 == 0)) {
    iVar1 = FUN_ram_48176e96(auStack_8c,iVar3 + uVar2,param_5 + param_7);
    if ((iVar1 != 0) || (iVar4 = FUN_ram_48176eac(auStack_8c,iVar3), iVar1 = iVar4, iVar4 != 0))
    goto LAB_ram_48169fc4;
    uVar6 = 0;
    if (param_9 != 0) {
      do {
        iVar1 = FUN_ram_48176f38(auStack_8c);
        if ((((iVar1 != 0) ||
             (iVar1 = FUN_ram_48176e96(auStack_8c,iVar3,param_5 + param_7 + uVar2), iVar1 != 0)) ||
            (iVar1 = FUN_ram_48176eac(auStack_8c,auStack_80), iVar1 != 0)) ||
           (((iVar1 = FUN_ram_48176f38(auStack_8c), iVar1 != 0 ||
             (iVar1 = FUN_ram_48176e96(auStack_8c,iVar3,uVar2), iVar1 != 0)) ||
            (iVar1 = FUN_ram_48176eac(auStack_8c,iVar3), iVar1 != 0)))) break;
        uVar7 = uVar2 + uVar6;
        if (param_9 < uVar7) {
          uVar5 = param_9 % uVar2;
          iVar1 = iVar4;
          if (param_9 % uVar2 == 0) break;
LAB_ram_4816a044:
          FUN_ram_4ff45158(param_8 + uVar6,auStack_80,uVar5);
        }
        else {
          uVar5 = uVar2;
          if (uVar2 != 0) goto LAB_ram_4816a044;
        }
        iVar1 = iVar4;
        uVar6 = uVar7;
      } while (uVar7 < param_9);
    }
    FUN_ram_48176a1a(auStack_8c);
  }
  else {
LAB_ram_48169fc4:
    FUN_ram_48176a1a(auStack_8c);
  }
  FUN_ram_48178af2(iVar3,iVar8);
LAB_ram_48169fd6:
  FUN_ram_48178af2(auStack_80,0x40);
  thunk_FUN_ram_4ff209c6(iVar3);
  return iVar1;
}


