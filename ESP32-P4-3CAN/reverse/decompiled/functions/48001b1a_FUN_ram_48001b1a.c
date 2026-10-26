/* Firmware entry: 0x48001b1a */

undefined4 FUN_ram_48001b1a(char *param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  
  iVar1 = (int)DAT_ram_4ff6d998;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar2 = DAT_ram_4ff6d998;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      sVar4 = strlen(param_1);
      piVar2 = (int *)thunk_FUN_ram_4ff2070c(sVar4 + 6);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      *(undefined1 *)(piVar2 + 1) = param_2;
      FUN_ram_4ff45158((int)piVar2 + 5,param_1,sVar4 + 1);
      *piVar2 = iVar1;
      DAT_ram_4ff6d998 = piVar2;
      return 1;
    }
    iVar3 = FUN_ram_4ff453ae((int)piVar2 + 5,param_1);
    if (iVar3 == 0) break;
    piVar2 = (int *)*piVar2;
  }
  *(undefined1 *)(piVar2 + 1) = param_2;
  return 1;
}


