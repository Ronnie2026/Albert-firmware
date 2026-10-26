/* Firmware entry: 0x4819a0a6 */

undefined4 FUN_ram_4819a0a6(uint *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar6 = (uint)(short)*(ushort *)(param_2 + 3);
  if ((uVar6 & 8) == 0) {
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x800;
    if ((param_2[1] < 1) && (param_2[0x10] < 1)) {
      return 0;
    }
    pcVar3 = (code *)param_2[0xb];
    if (pcVar3 == (code *)0x0) {
      return 0;
    }
    uVar7 = *param_1;
    *param_1 = 0;
    if ((int)(uVar6 << 0x13) < 0) {
      iVar2 = param_2[0x15];
    }
    else {
      iVar2 = (*pcVar3)(param_1,param_2[8],0,1);
      if ((iVar2 == -1) && (uVar6 = *param_1, uVar6 != 0)) {
        if ((uVar6 == 0x1d) || (uVar6 == 0x16)) {
          *param_1 = uVar7;
          return 0;
        }
LAB_ram_4819a1d0:
        uVar5 = *(ushort *)(param_2 + 3);
        goto LAB_ram_4819a1d4;
      }
    }
    if (((*(ushort *)(param_2 + 3) & 4) != 0) && (iVar2 = iVar2 - param_2[1], param_2[0xd] != 0)) {
      iVar2 = iVar2 - param_2[0x10];
    }
    iVar2 = (*(code *)param_2[0xb])(param_1,param_2[8],iVar2,0);
    uVar5 = *(ushort *)(param_2 + 3);
    if ((iVar2 == -1) && ((0x1d < *param_1 || ((0x20400001U >> (*param_1 & 0x1f) & 1) == 0)))) {
LAB_ram_4819a1d4:
      *(ushort *)(param_2 + 3) = uVar5 | 0x40;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffffff;
    }
    *(ushort *)(param_2 + 3) = uVar5 & 0xf7ff;
    param_2[1] = 0;
    *param_2 = param_2[4];
    if (((int)(short)uVar5 << 0x13 < 0) && ((iVar2 != -1 || (*param_1 == 0)))) {
      param_2[0x15] = iVar2;
    }
    piVar1 = (int *)param_2[0xd];
    *param_1 = uVar7;
    if (piVar1 != (int *)0x0) {
      if (piVar1 != param_2 + 0x11) {
        FUN_ram_4ff450c2(param_1);
      }
      param_2[0xd] = 0;
    }
  }
  else {
    iVar2 = param_2[4];
    if (iVar2 != 0) {
      iVar8 = *param_2;
      *param_2 = iVar2;
      iVar8 = iVar8 - iVar2;
      iVar4 = 0;
      if ((uVar6 & 3) == 0) {
        iVar4 = param_2[5];
      }
      param_2[2] = iVar4;
      for (; 0 < iVar8; iVar8 = iVar8 - iVar4) {
        iVar4 = (*(code *)param_2[10])(param_1,param_2[8],iVar2,iVar8);
        if (iVar4 < 1) goto LAB_ram_4819a1d0;
        iVar2 = iVar2 + iVar4;
      }
    }
  }
  return 0;
}


