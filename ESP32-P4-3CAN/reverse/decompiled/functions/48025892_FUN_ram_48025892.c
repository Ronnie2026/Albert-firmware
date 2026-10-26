/* Firmware entry: 0x48025892 */

void FUN_ram_48025892(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48027528("=========== After Setup Start ============\n");
  FUN_ram_48024fd0(0x800,"INTERNAL");
  FUN_ram_48027528("------------------------------------------\n");
  iVar3 = FUN_ram_48026baa();
  if (iVar3 != 0) {
    FUN_ram_48024fd0(0x400,"SPIRAM");
    FUN_ram_48027528("------------------------------------------\n");
  }
  FUN_ram_48027528("GPIO Info:\n");
  FUN_ram_48027528("------------------------------------------\n");
  FUN_ram_48027528("  GPIO : BUS_TYPE[bus/unit][chan]\n");
  FUN_ram_48027528("  --------------------------------------  \n");
  uVar1 = 0;
  do {
    uVar2 = uVar1 & 0xff;
    iVar3 = FUN_ram_48026b5a(uVar2);
    if ((iVar3 != 0) && (iVar3 = FUN_ram_4802664c(uVar2), iVar3 != 0)) {
      FUN_ram_48027528("  %4u : ",uVar1);
      iVar4 = FUN_ram_48026704(uVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_ram_48025e8c(iVar3,0);
      }
      FUN_ram_48027528(&DAT_ram_481cd004,iVar4);
      iVar3 = FUN_ram_480267ba(uVar2);
      if (iVar3 != -1) {
        FUN_ram_48027528(&DAT_ram_481c261c,iVar3);
      }
      iVar3 = FUN_ram_4802686a(uVar2);
      if (iVar3 != -1) {
        FUN_ram_48027528(&DAT_ram_481c261c,iVar3);
      }
      FUN_ram_48027528(&DAT_ram_481df93c);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x37);
  FUN_ram_48027528("============ After Setup End =============\n");
  thunk_FUN_ram_4ff3c2b6(0x14);
  return;
}


