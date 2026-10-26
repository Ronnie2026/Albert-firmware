/* Firmware entry: 0x4814a19c */

int FUN_ram_4814a19c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = &DAT_ram_4ff6d2fc;
  iVar1 = 0;
  while( true ) {
    uVar2 = iVar1 + 1;
    if ((((*param_1 == *piVar3) && (param_1[1] == piVar3[1])) && (param_1[2] == piVar3[2])) &&
       ((param_1[3] == piVar3[3] && ((char)param_1[4] == (char)piVar3[4])))) break;
    iVar1 = (int)(uVar2 * 0x1000000) >> 0x18;
    piVar3 = piVar3 + 0xb;
    if ((uVar2 & 0xff) == 5) {
      return -1;
    }
  }
  return iVar1;
}


