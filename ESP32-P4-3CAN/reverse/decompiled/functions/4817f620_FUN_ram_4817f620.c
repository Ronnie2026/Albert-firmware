/* Firmware entry: 0x4817f620 */

int FUN_ram_4817f620(undefined4 *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar4 = (char *)*param_1;
  if ((int)param_2 - (int)pcVar4 < 1) {
    return -0x60;
  }
  if (*pcVar4 == '\x03') {
    *param_1 = pcVar4 + 1;
    iVar2 = FUN_ram_4817f2d4();
    if (iVar2 == 0) {
      iVar3 = *param_3;
      if (iVar3 == 0) {
        iVar2 = -0x60;
      }
      else {
        pbVar5 = (byte *)*param_1;
        *param_3 = iVar3 + -1;
        bVar1 = *pbVar5;
        *(byte *)(param_3 + 1) = bVar1;
        if (bVar1 < 8) {
          param_3[2] = (int)(pbVar5 + 1);
          *param_1 = pbVar5 + iVar3;
          if (pbVar5 + iVar3 != param_2) {
            iVar2 = -0x66;
          }
        }
        else {
          iVar2 = -100;
        }
      }
    }
    return iVar2;
  }
  return -0x62;
}


