/* Firmware entry: 0x48092202 */

undefined4 FUN_ram_48092202(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    iVar3 = 0x88c;
    iVar4 = 0x18;
    iVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x35a4) == '\x02') {
    iVar4 = 0x3590;
    iVar3 = 0x3e04;
    iVar2 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x6b1c) != '\x02') {
      return 0;
    }
    iVar4 = 0x6b08;
    iVar3 = 0x737c;
    iVar2 = 2;
  }
  FUN_ram_4ff3ec14(iVar3 + param_1,0xffffffff);
  iVar2 = iVar2 * 0x3578 + param_1;
  if ((((*(char *)(iVar2 + 0x895) != '\0') && (*(char *)(iVar2 + 0x896) == '\0')) &&
      (*(char *)(iVar2 + 0x89a) == '\0')) &&
     ((*(char *)(iVar2 + 0x89b) == '\0' && (iVar2 = FUN_ram_4ff2bcc4(), iVar2 == 0)))) {
    fence();
    if (*(char *)(param_1 + 0x18c6b) != '\0') {
      uVar1 = FUN_ram_4ff21a0a();
      uVar1 = FUN_ram_4ff26908(param_1 + iVar4,uVar1);
      goto LAB_ram_480922b4;
    }
  }
  uVar1 = 0;
LAB_ram_480922b4:
  FUN_ram_4ff3ee10(iVar3 + param_1);
  return uVar1;
}


