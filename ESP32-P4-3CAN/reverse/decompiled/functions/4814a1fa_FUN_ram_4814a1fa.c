/* Firmware entry: 0x4814a1fa */

int FUN_ram_4814a1fa(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = &DAT_ram_4ff6d11c;
  iVar1 = 0;
  while( true ) {
    uVar2 = iVar1 + 1;
    if ((((*param_1 == *piVar3) && (param_1[1] == piVar3[1])) && (param_1[2] == piVar3[2])) &&
       ((param_1[3] == piVar3[3] && ((char)param_1[4] == (char)piVar3[4])))) break;
    iVar1 = (int)(uVar2 * 0x10000) >> 0x10;
    piVar3 = piVar3 + 0xc;
    if ((uVar2 & 0xffff) == 10) {
      return -1;
    }
  }
  return iVar1;
}


