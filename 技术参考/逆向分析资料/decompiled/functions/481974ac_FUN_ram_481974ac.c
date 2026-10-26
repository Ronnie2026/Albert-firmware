/* Firmware entry: 0x481974ac */

undefined4 FUN_ram_481974ac(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  size_t sVar6;
  size_t sVar7;
  undefined *puVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int aiStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = FUN_ram_4ff3e8de();
  pcVar4 = strchr(param_1,0x3d);
  if (pcVar4 != (char *)0x0) {
    puVar5 = (undefined4 *)FUN_ram_4819bf88();
    *puVar5 = 0x16;
    return 0xffffffff;
  }
  FUN_ram_4819d29a(uVar3);
  sVar6 = strlen(param_2);
  pcVar4 = (char *)FUN_ram_48196300(uVar3,param_1,aiStack_34);
  pcVar10 = param_1;
  if (pcVar4 == (char *)0x0) {
    for (iVar9 = 0; iVar11 = iVar9 * 4, *(int *)(PTR_DAT_ram_4ff6e2e4_ram_4ff47fb4 + iVar11) != 0;
        iVar9 = iVar9 + 1) {
    }
    if (DAT_ram_4ff6e2e8 == 0) {
      DAT_ram_4ff6e2e8 = 1;
      puVar8 = (undefined *)FUN_ram_4ff450d0(uVar3,iVar11 + 8);
      if (puVar8 == (undefined *)0x0) goto LAB_ram_4819759a;
      FUN_ram_4ff45158(puVar8,PTR_DAT_ram_4ff6e2e4_ram_4ff47fb4,iVar11);
    }
    else {
      puVar8 = (undefined *)FUN_ram_4ff450c8(uVar3);
      PTR_DAT_ram_4ff6e2e4_ram_4ff47fb4 = puVar8;
      if (puVar8 == (undefined *)0x0) goto LAB_ram_4819759a;
    }
    PTR_DAT_ram_4ff6e2e4_ram_4ff47fb4 = puVar8;
    *(undefined4 *)(puVar8 + iVar11 + 4) = 0;
    aiStack_34[0] = iVar9;
  }
  else {
    if (param_3 == 0) goto LAB_ram_4819752e;
    sVar7 = strlen(pcVar4);
    if (sVar6 <= sVar7) {
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      goto LAB_ram_4819752e;
    }
  }
  for (; (*pcVar10 != '\0' && (*pcVar10 != '=')); pcVar10 = pcVar10 + 1) {
  }
  piVar2 = (int *)(PTR_DAT_ram_4ff6e2e4_ram_4ff47fb4 + aiStack_34[0] * 4);
  iVar9 = FUN_ram_4ff450d0(uVar3,pcVar10 + (sVar6 - (int)param_1) + 2);
  *piVar2 = iVar9;
  if (iVar9 == 0) {
LAB_ram_4819759a:
    FUN_ram_4819d2aa(uVar3);
    return 0xffffffff;
  }
  pcVar4 = *(char **)(PTR_DAT_ram_4ff6e2e4_ram_4ff47fb4 + aiStack_34[0] * 4);
  do {
    pcVar10 = pcVar4;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar10 + 1;
  } while (cVar1 != '=');
  *pcVar10 = '=';
  pcVar4 = pcVar10 + 1;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
LAB_ram_4819752e:
  FUN_ram_4819d2aa(uVar3);
  return 0;
}


