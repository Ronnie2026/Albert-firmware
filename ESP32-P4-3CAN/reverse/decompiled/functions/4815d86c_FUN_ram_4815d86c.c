/* Firmware entry: 0x4815d86c */

undefined4 FUN_ram_4815d86c(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4815d670(param_2);
  if (param_1[2] != 0) {
    iVar5 = param_1[1];
    uVar3 = *(uint *)(iVar5 + 8);
    if (uVar3 < 0x1d) {
      *(uint *)(iVar5 + 8) = uVar3 + 1;
      *(uint *)(iVar5 + uVar3 * 4 + 0xc) = param_3 & 0xff | iVar1 << 8;
      return 0;
    }
  }
  piVar2 = (int *)FUN_ram_4ff20824(0x80,2,0x1400,0x1800);
  if (piVar2 != (int *)0x0) {
    piVar6 = piVar2 + 3;
    do {
      *piVar6 = 0xff;
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar2 + 0x20);
    iVar5 = param_1[1];
    if (iVar5 != 0) {
      *(int **)(iVar5 + 4) = piVar2;
    }
    iVar4 = *param_1;
    *piVar2 = iVar5;
    piVar2[1] = 0;
    param_1[1] = (int)piVar2;
    if (iVar4 == 0) {
      *param_1 = (int)piVar2;
    }
    param_1[2] = param_1[2] + 1;
    piVar2[2] = 1;
    piVar2[3] = param_3 & 0xff | iVar1 << 8;
    return 0;
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return 0x101;
}


