/* Firmware entry: 0x48168f0c */

undefined4 FUN_ram_48168f0c(int *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    if (param_2 == (char *)0x0) {
      uVar2 = 0;
    }
    else {
      puVar1 = (undefined4 *)*param_1;
      while( true ) {
        if (puVar1 == (undefined4 *)0x0) {
          *param_3 = 0;
          return 0;
        }
        iVar3 = strcasecmp((char *)*puVar1,param_2);
        if (iVar3 == 0) break;
        puVar1 = (undefined4 *)puVar1[2];
      }
      uVar2 = puVar1[1];
    }
  }
  *param_3 = uVar2;
  return 0;
}


