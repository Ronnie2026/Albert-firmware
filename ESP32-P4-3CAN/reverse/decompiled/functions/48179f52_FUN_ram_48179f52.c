/* Firmware entry: 0x48179f52 */

int FUN_ram_48179f52(int param_1,code *param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                    undefined1 *param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = *(uint *)(param_1 + 4);
  if ((0xfffffff4 < param_4) || (uVar5 < param_4 + 0xb)) {
    return -0x4080;
  }
  *param_6 = 0;
  iVar6 = uVar5 - param_4;
  if (param_2 == (code *)0x0) {
    return -0x4080;
  }
  param_6[1] = 2;
  if (iVar6 == 3) {
    param_6[2] = 0;
    pcVar4 = param_6 + 3;
  }
  else {
    pcVar1 = param_6 + 2;
    do {
      pcVar4 = pcVar1;
      iVar2 = 100;
      while( true ) {
        iVar3 = (*param_2)(param_3,pcVar4,1);
        iVar2 = iVar2 + -1;
        if (*pcVar4 != '\0') break;
        if ((iVar2 == 0) || (iVar3 != 0)) goto LAB_ram_48179fce;
      }
      if (iVar3 != 0) {
LAB_ram_48179fce:
        return iVar3 + -0x4480;
      }
      pcVar1 = pcVar4 + 1;
    } while (pcVar4 + 1 != param_6 + iVar6 + -1);
    pcVar4[1] = '\0';
    if (param_4 == 0) goto LAB_ram_48179ffc;
    pcVar4 = pcVar4 + 2;
  }
  FUN_ram_4ff45158(pcVar4,param_5,param_4);
LAB_ram_48179ffc:
  iVar6 = FUN_ram_48179632(param_1,param_6,param_6);
  return iVar6;
}


