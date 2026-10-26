/* Firmware entry: 0x48168f64 */

undefined4 FUN_ram_48168f64(int *param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *__s1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (int *)0x0) && (param_2 != (char *)0x0)) {
    puVar3 = (undefined4 *)*param_1;
    for (puVar1 = puVar3; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
      __s1 = (char *)*puVar1;
      iVar2 = strcasecmp(__s1,param_2);
      if (iVar2 == 0) {
        iVar2 = puVar1[2];
        if (puVar3 == puVar1) {
          *param_1 = iVar2;
          if (iVar2 == 0) {
            param_1[1] = (int)param_1;
          }
        }
        else {
          do {
            puVar4 = puVar3;
            puVar3 = (undefined4 *)puVar4[2];
          } while ((undefined4 *)puVar4[2] != puVar1);
          puVar4[2] = iVar2;
          if (iVar2 == 0) {
            param_1[1] = (int)(puVar4 + 2);
          }
        }
        thunk_FUN_ram_4ff209c6(__s1);
        thunk_FUN_ram_4ff209c6(puVar1[1]);
        thunk_FUN_ram_4ff209c6(puVar1);
        return 0;
      }
    }
  }
  return 0x105;
}


