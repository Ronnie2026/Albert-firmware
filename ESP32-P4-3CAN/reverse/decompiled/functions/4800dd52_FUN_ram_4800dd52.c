/* Firmware entry: 0x4800dd52 */

int FUN_ram_4800dd52(char *param_1)

{
  int *piVar1;
  uint uVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar3 = strlen(param_1);
  if (DAT_ram_4ff6db28 != 0) {
    piVar1 = &DAT_ram_4ff5a02c;
    uVar7 = 0xffffffff;
    piVar6 = &DAT_ram_4ff5a02c + DAT_ram_4ff6db28;
    iVar9 = 0;
    do {
      iVar5 = *piVar1;
      if (((((iVar5 != 0) && (uVar2 = *(uint *)(iVar5 + 0x10), uVar2 != 0xffffffff)) &&
           (uVar2 <= sVar3)) && (iVar4 = FUN_ram_4ff4511a(param_1,iVar5 + 0x14,uVar2), iVar4 == 0))
         && (((uVar2 == 0 && (uVar8 = uVar7, iVar9 == 0)) ||
             (((sVar3 <= uVar2 || (param_1[uVar2] == '/')) &&
              (uVar8 = uVar2, (int)uVar7 < (int)uVar2)))))) {
        uVar7 = uVar8;
        iVar9 = iVar5;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != piVar6);
    return iVar9;
  }
  return 0;
}


