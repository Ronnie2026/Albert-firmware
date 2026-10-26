/* Firmware entry: 0x48179024 */

int FUN_ram_48179024(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar14 = param_1 + 8;
  iVar10 = param_1 + 0x20;
  iVar1 = FUN_ram_481802e8(iVar14,0);
  iVar2 = FUN_ram_481802e8(iVar10,0);
  iVar11 = param_1 + 0x28;
  iVar12 = param_1 + 0x18;
  iVar3 = FUN_ram_481802e8(iVar11,0);
  iVar4 = FUN_ram_481802e8(iVar12,0);
  iVar13 = param_1 + 0x10;
  iVar5 = FUN_ram_481802e8(iVar13,0);
  iVar6 = FUN_ram_481802e8(param_1 + 0x30,0);
  iVar7 = FUN_ram_481802e8(param_1 + 0x38,0);
  iVar8 = FUN_ram_481802e8(param_1 + 0x40,0);
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      return -0x4080;
    }
    if (iVar3 != 0) {
      return -0x4080;
    }
    if (iVar4 == 0) {
      uVar9 = 0;
      if (iVar5 == 0) {
        return -0x4080;
      }
      goto LAB_ram_48179110;
    }
    if (iVar5 == 0) {
      return -0x4080;
    }
    iVar1 = FUN_ram_4817a95c(iVar14,iVar13,iVar12,iVar10,iVar11);
joined_r0x48179100:
    if (iVar1 != 0) {
LAB_ram_4817917e:
      return iVar1 + -0x4080;
    }
  }
  else {
    if (iVar3 == 0) {
      return -0x4080;
    }
    if (iVar4 == 0) {
      if (iVar1 == 0) {
        if (iVar5 == 0) {
          return -0x4080;
        }
        iVar1 = FUN_ram_4817bf84(iVar14,iVar10,iVar11);
        if (iVar1 != 0) goto LAB_ram_4817917e;
        uVar9 = FUN_ram_48180076(iVar14);
        *(undefined4 *)(param_1 + 4) = uVar9;
      }
      else if (iVar5 == 0) {
        return -0x4080;
      }
      iVar1 = FUN_ram_4817ab8c(iVar10,iVar11,iVar13,iVar12);
      goto joined_r0x48179100;
    }
    if (iVar5 == 0) {
      return -0x4080;
    }
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4817bf84(iVar14,iVar10,iVar11);
      if (iVar1 != 0) goto LAB_ram_4817917e;
      uVar9 = FUN_ram_48180076(iVar14);
      *(undefined4 *)(param_1 + 4) = uVar9;
    }
  }
  if ((((iVar6 == 0) || (iVar7 == 0)) || (iVar8 == 0)) &&
     (iVar1 = FUN_ram_4817ac6c(iVar10,iVar11,iVar12,param_1 + 0x30,param_1 + 0x38,param_1 + 0x40),
     iVar1 != 0)) {
    return iVar1 + -0x4080;
  }
  uVar9 = 1;
LAB_ram_48179110:
  iVar1 = FUN_ram_48178db6(param_1,uVar9);
  return iVar1;
}


