/* Firmware entry: 0x48093bb2 */

undefined4 FUN_ram_48093bb2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_1 + 0x88c;
  while( true ) {
    FUN_ram_4ff3ec14(iVar1,0xffffffff);
    if (*(char *)(iVar1 + -0x2f2) != '\0') break;
    uVar2 = FUN_ram_4ff21a0a();
    iVar3 = FUN_ram_48093896(iVar1 + -0x874,uVar2);
    if ((iVar3 != 0) || (*(char *)(iVar1 + -0x2d) != '\0')) break;
    iVar3 = iVar1 + 0x3578;
    FUN_ram_4ff3ee10(iVar1);
    iVar1 = iVar3;
    if (iVar3 == param_1 + 0xa8f4) {
      return 1;
    }
  }
  FUN_ram_4ff3ee10(iVar1);
  return 0;
}


