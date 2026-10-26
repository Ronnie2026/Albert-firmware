/* Firmware entry: 0x4811f19c */

void FUN_ram_4811f19c(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uStack_28;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_28 = 0;
  iStack_24 = 0;
  fence();
  if (DAT_ram_4ff6dff0 != 0) {
    iVar6 = 0x1000;
    do {
      iVar4 = DAT_ram_4ff6dffc;
      DAT_ram_4ff6dffc = 1;
      if (iVar4 == 0) {
        iVar6 = FUN_ram_4ff2d694(DAT_ram_4ff6dff0,&uStack_28);
        uVar7 = (uint)(iVar6 == 0);
        fence();
        DAT_ram_4ff6dffc = 0;
        goto LAB_ram_4811f1cc;
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar7 = 0;
LAB_ram_4811f1cc:
  FUN_ram_4ff3ec14(&DAT_ram_4ff47ed4,0xffffffff);
  DAT_ram_4ff6b778._2_1_ = 0;
  if ((char)DAT_ram_4ff6b778 != '\0') {
    uVar2 = param_1 - DAT_ram_4ff6b780;
    iVar6 = (param_2 - DAT_ram_4ff6b784) - (uint)(param_1 < uVar2);
    if (param_2 - DAT_ram_4ff6b784 == (uint)(param_1 < uVar2)) {
      if (uVar2 < 1000000) goto LAB_ram_4811f2bc;
      uVar3 = param_3 - DAT_ram_4ff6b798;
      iVar4 = (int)((ulonglong)uVar3 * 1000 >> 0x20);
    }
    else {
      uVar3 = param_3 - DAT_ram_4ff6b798;
      iVar4 = (int)((ulonglong)uVar3 * 1000 >> 0x20);
    }
    uVar1 = uVar3 * 1000;
    if (iVar6 < 0) {
      if (DAT_ram_4ff6b79c != -1) {
        DAT_ram_4ff6b79c = DAT_ram_4ff6b79c + 1;
      }
LAB_ram_4811f39a:
      DAT_ram_4ff6b7a4 = uVar1 - uVar2;
      iVar4 = (iVar4 - iVar6) - (uint)(uVar1 < DAT_ram_4ff6b7a4);
    }
    else {
      if ((iVar6 < iVar4) || ((iVar4 == iVar6 && (uVar2 < uVar1)))) goto LAB_ram_4811f39a;
      DAT_ram_4ff6b7a4 = uVar2 + uVar3 * -1000;
      iVar4 = (iVar6 - iVar4) - (uint)(uVar2 < DAT_ram_4ff6b7a4);
    }
    if (iVar4 != 0) {
      DAT_ram_4ff6b7a4 = 0xffffffff;
    }
    if ((uVar7 != 0) && (DAT_ram_4ff6b778._1_1_ != '\0')) {
      uVar3 = uStack_28 - DAT_ram_4ff6b790;
      iVar4 = (iStack_24 - DAT_ram_4ff6b794) - (uint)(uStack_28 < uVar3);
      if ((iVar6 < iVar4) || ((iVar4 == iVar6 && (uVar2 < uVar3)))) {
        DAT_ram_4ff6b7a8 = uVar3 - uVar2;
        iVar5 = (iVar4 - iVar6) - (uint)(uVar3 < DAT_ram_4ff6b7a8);
      }
      else {
        DAT_ram_4ff6b7a8 = uVar2 - uVar3;
        iVar5 = (iVar6 - iVar4) - (uint)(uVar2 < DAT_ram_4ff6b7a8);
      }
      if (iVar5 != 0) {
        DAT_ram_4ff6b7a8 = 0xffffffff;
      }
      if (((iVar4 < 0) || (5000 < DAT_ram_4ff6b7a8)) && (DAT_ram_4ff6b7a0 != -1)) {
        DAT_ram_4ff6b7a0 = DAT_ram_4ff6b7a0 + 1;
      }
    }
    DAT_ram_4ff6b778._2_1_ = 1;
    DAT_ram_4ff6b788 = uVar2;
    DAT_ram_4ff6b78c = iVar6;
  }
  DAT_ram_4ff6b778._1_1_ = (char)uVar7;
  DAT_ram_4ff6b790 = uStack_28;
  DAT_ram_4ff6b794 = iStack_24;
  DAT_ram_4ff6b778._0_1_ = '\x01';
  DAT_ram_4ff6b780 = param_1;
  DAT_ram_4ff6b784 = param_2;
  DAT_ram_4ff6b798 = param_3;
LAB_ram_4811f2bc:
  if ((DAT_ram_4ff6bdd0 == 0) || (999 < (uint)(param_3 - DAT_ram_4ff6bdc8))) {
    DAT_ram_4ff6bdc0 = uStack_28;
    DAT_ram_4ff6bdc4 = iStack_24;
    DAT_ram_4ff6bdcc = cycle;
    DAT_ram_4ff6bdd0 = 1;
    DAT_ram_4ff6bdb8 = param_1;
    DAT_ram_4ff6bdbc = param_2;
    DAT_ram_4ff6bdc8 = param_3;
    DAT_ram_4ff6bdd4 = uVar7;
    FUN_ram_4ff294b8();
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47ed4);
  return;
}


