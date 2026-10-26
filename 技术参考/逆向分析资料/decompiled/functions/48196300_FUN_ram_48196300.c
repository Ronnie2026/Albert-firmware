/* Firmware entry: 0x48196300 */

char * FUN_ram_48196300(undefined4 param_1,char *param_2,int *param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4819d29a();
  pcVar4 = param_2;
  if (PTR_DAT_ram_4ff6e2e4_ram_4ff47fb4 != (undefined *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
      if (*pcVar4 == '=') goto LAB_ram_48196324;
    }
    for (piVar1 = (int *)PTR_DAT_ram_4ff6e2e4_ram_4ff47fb4; *piVar1 != 0; piVar1 = piVar1 + 1) {
      iVar3 = FUN_ram_4ff45520(*piVar1,param_2,(int)pcVar4 - (int)param_2);
      if ((iVar3 == 0) &&
         (pcVar2 = (char *)(*piVar1 + ((int)pcVar4 - (int)param_2)), *pcVar2 == '=')) {
        *param_3 = (int)piVar1 - (int)PTR_DAT_ram_4ff6e2e4_ram_4ff47fb4 >> 2;
        FUN_ram_4819d2aa(param_1);
        return pcVar2 + 1;
      }
    }
  }
LAB_ram_48196324:
  FUN_ram_4819d2aa(param_1);
  return (char *)0x0;
}


