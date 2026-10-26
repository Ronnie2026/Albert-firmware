/* Firmware entry: 0x48052348 */

undefined4
FUN_ram_48052348(char *param_1,char *param_2,int param_3,int *param_4,undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_5 = 0;
  cVar1 = *param_1;
  *param_4 = -0x80000000;
  if (((cVar1 == '\0') || (iVar5 = *(int *)(param_1 + 8), iVar5 == 0)) ||
     (300 < (uint)(param_3 - iVar5))) {
    if (*param_2 == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    if (*(int *)(param_2 + 8) == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    if (300 < (uint)(param_3 - *(int *)(param_2 + 8))) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    if (param_2[1] == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    iVar5 = *(int *)(param_2 + 4);
  }
  else {
    if (((*param_2 != '\0') && (iVar6 = *(int *)(param_2 + 8), iVar6 != 0)) &&
       ((uint)(param_3 - iVar6) < 0x12d)) {
      if ((param_1[1] != '\0') && (param_2[1] != '\0')) {
        uVar4 = *(int *)(param_1 + 4) - *(int *)(param_2 + 4);
        uVar3 = (int)uVar4 >> 0x1f;
        if ((int)((uVar4 ^ uVar3) - uVar3) < 0x65) {
          iVar2 = *(int *)(param_2 + 4);
          if (-1 < iVar5 - iVar6) {
            iVar2 = *(int *)(param_1 + 4);
          }
          *param_4 = iVar2;
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 1;
        }
        *param_5 = 1;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      return 0;
    }
    if (param_1[1] == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    iVar5 = *(int *)(param_1 + 4);
  }
  *param_4 = iVar5;
  return 1;
}


