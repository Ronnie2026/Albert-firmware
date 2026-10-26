/* Firmware entry: 0x4817fa5a */

int FUN_ram_4817fa5a(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 < 0x80) {
    iVar1 = *param_1;
    if (iVar1 - param_2 < 1) {
      return -0x6c;
    }
    *param_1 = iVar1 + -1;
    *(char *)(iVar1 + -1) = (char)param_3;
    return 1;
  }
  iVar1 = 1;
  uVar2 = param_3;
  do {
    uVar2 = uVar2 >> 8;
    iVar1 = iVar1 + 1;
  } while (uVar2 != 0);
  iVar3 = *param_1;
  if (iVar3 - param_2 < iVar1) {
    return -0x6c;
  }
  while( true ) {
    *param_1 = iVar3 + -1;
    *(char *)(iVar3 + -1) = (char)param_3;
    param_3 = param_3 >> 8;
    if (param_3 == 0) break;
    iVar3 = *param_1;
  }
  iVar3 = *param_1;
  *param_1 = iVar3 + -1;
  *(char *)(iVar3 + -1) = (char)iVar1 + '\x7f';
  return iVar1;
}


