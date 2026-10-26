/* Firmware entry: 0x4ff3d67e */

void FUN_ram_4ff3d67e(int param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    FUN_ram_4ff3ebfe();
    param_1 = (&DAT_ram_4ff6da3c)[mhartid];
    FUN_ram_4ff3ec08();
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x4c);
  iVar6 = *(int *)(param_1 + 0x44);
  iVar9 = *(int *)(param_1 + 0x54);
  param_2[6] = *(int *)(param_1 + 100);
  *param_2 = param_1;
  param_2[1] = param_1 + 0x34;
  param_2[4] = iVar2;
  param_2[7] = iVar3;
  param_2[2] = iVar4;
  param_2[9] = iVar6;
  param_2[5] = iVar9;
  if (param_4 == 5) {
    iVar2 = FUN_ram_4ff3c336(param_1);
    param_2[3] = iVar2;
  }
  else if ((&DAT_ram_4ff6da3c)[mhartid] == param_1) {
    param_2[3] = 0;
  }
  else {
    param_2[3] = param_4;
    if ((param_4 == 3) && (*(int *)(param_1 + 0x28) != 0)) {
      param_2[3] = 2;
    }
  }
  uVar12 = 0;
  if (param_3 == 0) goto LAB_ram_4ff3d7a4;
  pcVar13 = *(char **)(param_1 + 0x30);
  if ((*(char **)(param_1 + 0x48) < pcVar13) ||
     (pcVar7 = *(char **)(param_1 + 0x48) + 1, uVar5 = (int)pcVar7 - (int)pcVar13, pcVar10 = pcVar13
     , pcVar13 == pcVar7)) goto LAB_ram_4ff3d7a4;
  do {
    if (((uint)pcVar10 & 3) == 0) goto joined_r0x4ff3d72a;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    if (cVar1 != -0x5b) goto LAB_ram_4ff3d7a4;
    uVar12 = uVar12 + 1;
  } while (uVar5 != uVar12);
LAB_ram_4ff3d788:
  if (uVar12 < uVar5) {
    do {
      if (pcVar13[uVar12] != -0x5b) break;
      uVar12 = uVar12 + 1;
    } while (uVar5 != uVar12);
  }
LAB_ram_4ff3d7a4:
  param_2[8] = uVar12;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return;
joined_r0x4ff3d72a:
  while ((uVar11 = uVar5 - uVar12, 0xf < uVar11 &&
         (piVar8 = (int *)(pcVar13 + uVar12),
         ((*piVar8 == -0x5a5a5a5b && piVar8[1] == -0x5a5a5a5b) && piVar8[2] == -0x5a5a5a5b) &&
         piVar8[3] == -0x5a5a5a5b))) {
    uVar12 = uVar12 + 0x10;
  }
  while ((3 < uVar11 && (*(int *)(pcVar13 + uVar12) == -0x5a5a5a5b))) {
    uVar12 = uVar12 + 4;
    uVar11 = uVar5 - uVar12;
  }
  goto LAB_ram_4ff3d788;
}


