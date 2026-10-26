/* Firmware entry: 0x48181f96 */

int FUN_ram_48181f96(undefined4 param_1,undefined4 param_2,int param_3,int param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = 0;
  iVar2 = param_4 + -1;
  if (iVar2 < 0) {
    iVar3 = 0;
    uVar7 = 0;
    uVar8 = 0;
    iVar2 = 0xfa;
  }
  else {
    iVar6 = param_4 * 4 + param_3;
    do {
      piVar1 = (int *)(iVar6 + -4);
      iVar6 = iVar6 + -4;
      if (*piVar1 != 0) {
        iVar3 = __clzsi2(*piVar1);
        iVar3 = (iVar2 + 1) * 0x20 - iVar3;
        uVar8 = iVar3 + 7;
        iVar6 = 0x27;
        uVar7 = uVar8 >> 3;
        iVar2 = 0x1e;
        if (uVar8 < 0x28) goto LAB_ram_48182074;
        goto LAB_ram_48182008;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
    iVar3 = 0;
    uVar8 = 0;
    uVar7 = 0;
LAB_ram_48182074:
    iVar2 = 0xfa;
  }
LAB_ram_48182008:
  while( true ) {
    iVar6 = FUN_ram_48181ee2(param_1,param_4,uVar7,param_5,param_6,iVar6);
    if (iVar6 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar6;
    }
    FUN_ram_48181940(param_1,param_4,(uVar8 & 0xfffffff8) - iVar3);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
    uVar4 = FUN_ram_481815c6(param_2,param_1,param_4);
    uVar5 = FUN_ram_48181632(param_1,param_3,param_4);
    iVar6 = 0;
    if ((uVar4 & uVar5) != 0) {
      return 0;
    }
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return -0xe;
}


