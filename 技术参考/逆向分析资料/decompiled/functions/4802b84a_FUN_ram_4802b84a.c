/* Firmware entry: 0x4802b84a */

void FUN_ram_4802b84a(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar6 = param_1[0xf];
  if ((char)bVar6 < '\0') {
    uVar1 = param_1[0xf] & 0x7f;
    pbVar4 = param_1;
    pbVar5 = param_1;
    if ((param_1[0xf] & 0x7f) == 0) {
      return;
    }
  }
  else {
    pbVar4 = *(byte **)param_1;
    if (pbVar4 == (byte *)0x0) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 8);
    pbVar5 = pbVar4;
    if (uVar1 == 0) {
      return;
    }
  }
  while (iVar3 = isspace((uint)*pbVar4), iVar3 != 0) {
    pbVar4 = pbVar4 + 1;
  }
  for (pbVar2 = pbVar5 + (uVar1 - 1);
      (iVar3 = isspace((uint)*pbVar2), iVar3 != 0 && (pbVar4 <= pbVar2)); pbVar2 = pbVar2 + -1) {
  }
  pbVar2 = pbVar2 + (1 - (int)pbVar4);
  if (pbVar5 < pbVar4) {
    FUN_ram_4ff4522c(pbVar5,pbVar4,pbVar2);
    bVar6 = param_1[0xf];
  }
  if ((char)bVar6 < '\0') {
    param_1[0xf] = param_1[0xf] & 0x80 | (byte)pbVar2 & 0x7f;
    param_1[(int)pbVar2] = 0;
  }
  else {
    *(byte **)(param_1 + 8) = pbVar2;
    pbVar4 = (byte *)0x0;
    if (*(int *)param_1 == 0) goto LAB_ram_4802b8c6;
    pbVar2[*(int *)param_1] = 0;
  }
  pbVar4 = param_1;
  if (-1 < (char)param_1[0xf]) {
    pbVar4 = *(byte **)param_1;
  }
LAB_ram_4802b8c6:
  pbVar4[(int)pbVar2] = 0;
  return;
}


