/* Firmware entry: 0x4800d3be */

undefined4
FUN_ram_4800d3be(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  size_t sVar2;
  undefined4 *puVar3;
  int *piVar4;
  size_t sVar5;
  int iVar6;
  char *pcVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar4 = &DAT_ram_4ff5a02c;
  iVar1 = 0;
  while (iVar6 = *piVar4, piVar4 = piVar4 + 1, iVar6 != 0) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 8) {
      return 0x101;
    }
  }
  if (param_2 == 0) {
    return 0x102;
  }
  if (param_1 == (char *)0x0) {
    sVar2 = 0;
    pcVar7 = "";
  }
  else {
    sVar2 = strlen(param_1);
    pcVar7 = param_1;
    if (sVar2 != 0) {
      if (0xd < sVar2 - 2) {
        return 0x102;
      }
      if (*param_1 != '/') {
        return 0x102;
      }
      if (param_1[sVar2 - 1] == '/') {
        return 0x102;
      }
    }
  }
  if ((&DAT_ram_4ff5a02c)[iVar1] != 0) {
    return 0x103;
  }
  if (iVar1 == DAT_ram_4ff6db28) {
    DAT_ram_4ff6db28 = iVar1 + 1;
  }
  puVar3 = (undefined4 *)FUN_ram_4ff206d8(sVar2 + 0x15,0x1000);
  if (puVar3 != (undefined4 *)0x0) {
    (&DAT_ram_4ff5a02c)[iVar1] = puVar3;
    sVar5 = 0xffffffff;
    if (param_1 != (char *)0x0) {
      sVar5 = sVar2;
    }
    puVar3[4] = sVar5;
    puVar3[1] = param_2;
    puVar3[2] = param_4;
    puVar3[3] = iVar1;
    *puVar3 = param_3;
    FUN_ram_4ff45158(puVar3 + 5,pcVar7,sVar2 + 1);
    if (param_5 != (int *)0x0) {
      *param_5 = iVar1;
    }
    return 0;
  }
  return 0x101;
}


