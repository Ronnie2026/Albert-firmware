/* Firmware entry: 0x48173140 */

int FUN_ram_48173140(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_38 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 < 2) {
    iVar2 = FUN_ram_48173028(param_1,*param_2);
    return iVar2;
  }
  iVar2 = thunk_FUN_ram_4817b126(param_3,8);
  if (iVar2 == 0) {
    iVar3 = -0x4d80;
  }
  else {
    iVar5 = param_3 * 8;
    iVar4 = iVar2 + iVar5;
    FUN_ram_4817fb86(auStack_38);
    iVar3 = iVar2;
    do {
      iVar1 = iVar3 + 8;
      FUN_ram_4817fb86(iVar3);
      iVar3 = iVar1;
    } while (iVar1 != iVar4);
    iVar3 = FUN_ram_4817fe72(iVar2,*param_2 + 0x10);
    if (iVar3 == 0) {
      iVar1 = iVar2 + 8;
      piVar7 = param_2;
      do {
        piVar7 = piVar7 + 1;
        iVar3 = FUN_ram_4817bf84(iVar1,iVar1 + -8,*piVar7 + 0x10);
        if (iVar3 != 0) goto LAB_ram_481731e2;
        iVar3 = FUN_ram_48172ae2(iVar1,param_1);
        iVar1 = iVar1 + 8;
        if (iVar3 != 0) goto LAB_ram_481731e2;
        DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
      } while (iVar1 != iVar4);
      iVar3 = iVar5 + -8 + iVar2;
      iVar3 = FUN_ram_48180ec2(0,iVar3,iVar3,param_1 + 4);
      if (iVar3 == 0) {
        iVar1 = param_3 - 1;
        iVar5 = iVar5 + -0x10 + iVar2;
        param_2 = param_2 + iVar1;
        if (iVar1 == 0) goto LAB_ram_48173386;
        while( true ) {
          iVar3 = FUN_ram_4817bf84(auStack_38,iVar5 + 8,iVar5);
          if ((iVar3 != 0) || (iVar3 = FUN_ram_48172ae2(auStack_38,param_1), iVar3 != 0)) break;
          DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
          iVar3 = FUN_ram_4817bf84(iVar5,iVar5 + 8,*param_2 + 0x10);
          if ((iVar3 != 0) || (iVar3 = FUN_ram_48172ae2(iVar5,param_1), iVar3 != 0)) break;
          DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
          while( true ) {
            iVar6 = *param_2 + 8;
            iVar3 = FUN_ram_4817bf84(iVar6,iVar6,auStack_38);
            if ((iVar3 != 0) || (iVar3 = FUN_ram_48172ae2(iVar6,param_1), iVar3 != 0))
            goto LAB_ram_481731e2;
            DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
            iVar3 = FUN_ram_4817bf84(auStack_38,auStack_38);
            if ((iVar3 != 0) || (iVar3 = FUN_ram_48172ae2(auStack_38,param_1), iVar3 != 0))
            goto LAB_ram_481731e2;
            iVar6 = *param_2;
            DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
            iVar3 = FUN_ram_4817bf84(iVar6,iVar6,auStack_38);
            if ((iVar3 != 0) || (iVar3 = FUN_ram_48172ae2(iVar6,param_1), iVar3 != 0))
            goto LAB_ram_481731e2;
            iVar6 = *param_2 + 8;
            DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
            iVar3 = FUN_ram_4817bf84(iVar6,iVar6,auStack_38);
            if ((iVar3 != 0) || (iVar3 = FUN_ram_48172ae2(iVar6,param_1), iVar3 != 0))
            goto LAB_ram_481731e2;
            DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
            iVar3 = FUN_ram_4817fdde(*param_2,*(undefined2 *)(param_1 + 10));
            if (((iVar3 != 0) ||
                (iVar3 = FUN_ram_4817fdde(*param_2 + 8,*(undefined2 *)(param_1 + 10)), iVar3 != 0))
               || (iVar3 = FUN_ram_4817ff24(*param_2 + 0x10,1), iVar3 != 0)) goto LAB_ram_481731e2;
            param_2 = param_2 + -1;
            iVar5 = iVar5 + -8;
            if (iVar1 == 0) goto LAB_ram_481731e2;
            iVar1 = iVar1 + -1;
            if (iVar1 != 0) break;
LAB_ram_48173386:
            iVar3 = FUN_ram_4817fe72(auStack_38,iVar2);
            if (iVar3 != 0) goto LAB_ram_481731e2;
          }
        }
      }
    }
LAB_ram_481731e2:
    FUN_ram_4817fb90(auStack_38);
    iVar5 = iVar2;
    do {
      iVar1 = iVar5 + 8;
      FUN_ram_4817fb90(iVar5);
      iVar5 = iVar1;
    } while (iVar1 != iVar4);
    thunk_FUN_ram_4ff209c6(iVar2);
  }
  return iVar3;
}


