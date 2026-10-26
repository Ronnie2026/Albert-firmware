/* Firmware entry: 0x48025e50 */

char * FUN_ram_48025e50(char *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar3 = *param_1;
  if (cVar3 != '\0') {
    iVar2 = 0;
    iVar1 = 0;
    do {
      while ((iVar2 = iVar2 + 1, cVar3 == '/' || (cVar3 == '\\'))) {
        cVar3 = param_1[iVar2];
        iVar1 = iVar2;
        if (cVar3 == '\0') goto LAB_ram_48025e84;
      }
      cVar3 = param_1[iVar2];
    } while (cVar3 != '\0');
LAB_ram_48025e84:
    param_1 = param_1 + iVar1;
  }
  return param_1;
}


