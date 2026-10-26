/* Firmware entry: 0x4813b83a */

undefined4 FUN_ram_4813b83a(uint *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
    return 0xfffffffa;
  }
  uVar1 = param_2[5];
  *(char *)(param_1 + 5) = (char)uVar1;
  uVar7 = *param_2;
  if ((char)uVar1 != '\x06') {
    *param_1 = uVar7;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    return 0;
  }
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar1 = param_2[4];
  *param_1 = uVar7;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(char *)(param_1 + 4) = (char)uVar1;
  if ((char)uVar1 == '\0') {
    if (((uVar7 & 0xc0ff) != 0x80fe) && (((uVar7 & 0x8fff) - 0x1ff & 0xfffffeff) != 0)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    iVar3 = FUN_ram_48148070(param_1,param_1);
    if (iVar3 != 0) {
      if (((*param_1 & 0xc0ff) == 0x80fe) ||
         (cVar2 = '\0', ((*param_1 & 0x8fff) - 0x1ff & 0xfffffeff) == 0)) {
        cVar2 = *(char *)(iVar3 + 0xea) + '\x01';
      }
      *(char *)(param_1 + 4) = cVar2;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  }
  return 0;
}


